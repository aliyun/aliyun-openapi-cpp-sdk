/*
* Copyright 2009-2017 Alibaba Cloud All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <alibabacloud/core/CommonClient.h>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <alibabacloud/core/location/LocationClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>
#include "Utils.h"

using namespace AlibabaCloud;
using namespace Location;

namespace
{
#if defined(WIN32) && defined(_MSC_VER)
#	define strcasecmp _stricmp
#	define strncasecmp _strnicmp
#else
#	include <strings.h>
#endif
}

CommonClient::CommonClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	CoreClient(configuration),
	credentialsProvider_(std::make_shared<SimpleCredentialsProvider>(credentials))
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

CommonClient::CommonClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	CoreClient(configuration),
	signer_(std::make_shared<HmacSha1Signer>())
{
	credentialsProvider_ = credentialsProvider;
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

CommonClient::CommonClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	CoreClient(configuration),
	signer_(std::make_shared<HmacSha1Signer>())
{
	credentialsProvider_ = std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret);

	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "ecs");
}

CommonClient::~CommonClient()
{
}

CommonClient::JsonOutcome CommonClient::makeRequest(const std::string &endpoint, const CommonRequest &msg, HttpRequest::Method method)const
{
	auto outcome = AttemptRequest(endpoint, msg, method);
	if (outcome.isSuccess())
		return JsonOutcome(std::string(outcome.result().body(),
			outcome.result().bodySize()));
	else
		return JsonOutcome(outcome.error());
}

CommonClient::CommonResponseOutcome CommonClient::commonResponse(const CommonRequest & request) const
{
	auto outcome = makeRequest(request.domain(), request, request.httpMethod());

	if (outcome.isSuccess())
		return CommonResponseOutcome(CommonResponse(outcome.result()));
	else
		return CommonResponseOutcome(Error(outcome.error()));
}

void CommonClient::commonResponseAsync(const CommonRequest & request, const CommonResponseAsyncHandler & handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commonResponse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CommonClient::CommonResponseOutcomeCallable CommonClient::commonResponseCallable(const CommonRequest & request) const
{
	auto task = std::make_shared<std::packaged_task<CommonResponseOutcome()>>(
		[this, request]()
	{
		return this->commonResponse(request);
	});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CoreClient::EndpointOutcome CommonClient::endpoint() const
{
	return EndpointOutcome();
}

HttpRequest CommonClient::buildHttpRequest(const std::string & endpoint, const ServiceRequest & msg, HttpRequest::Method method) const
{
	return buildHttpRequest(endpoint, dynamic_cast<const CommonRequest& >(msg), method);
}

HttpRequest CommonClient::buildHttpRequest(const std::string & endpoint, const CommonRequest &msg, HttpRequest::Method method) const
{
	if (msg.uriPattern().empty() ||
		(strcasecmp(msg.uriPattern().c_str(),"rpc") == 0))
		return buildRpcHttpRequest(endpoint, msg, method);
	else
		return buildRoaHttpRequest(endpoint, msg, method);
}

std::string CommonClient::canonicalizedHeaders(const HttpMessage::HeaderCollection &headers)const
{
	std::map <std::string, std::string> materials;
	for (const auto &p : headers)
	{
		std::string key = p.first;
		std::transform(key.begin(), key.end(), key.begin(), ::tolower);
		if (key.find("x-acs-") != 0)
			continue;

		std::string value = p.second;
		StringReplace(value, "\t", " ");
		StringReplace(value, "\n", " ");
		StringReplace(value, "\r", " ");
		StringReplace(value, "\f", " ");
		materials[key] = value;
	}

	if (materials.empty())
		return std::string();
	std::stringstream ss;
	for (const auto &p : materials)
		ss << p.first << ":" << p.second << "\n";

	return ss.str();
}

HttpRequest CommonClient::buildRoaHttpRequest(const std::string & endpoint, const CommonRequest &msg, HttpRequest::Method method) const
{
	const Credentials credentials = credentialsProvider_->getCredentials();

	Url url;
	url.setScheme("https");
	url.setHost(endpoint);
	url.setPath(msg.resourcePath());

	auto params = msg.headerParameters();
	std::map <std::string, std::string> queryParams;
	for (const auto &p : params) {
		if (!p.second.empty())
			queryParams[p.first] = p.second;
	}

	if (!queryParams.empty()) {
		std::stringstream queryString;
		for (const auto &p : queryParams)
		{
			if (p.second.empty())
				queryString << "&" << p.first;
			else
				queryString << "&" << p.first << "=" << p.second;
		}
		url.setQuery(queryString.str().substr(1));
	}

	HttpRequest request(url);
	request.setMethod(method);
	request.setHeader("Accept", "application/json");
	if (msg.hasContent()) {
		std::stringstream ss;
		ss << msg.contentSize();
		request.setHeader("Content-Length", ss.str());
		request.setHeader("Content-Type", "application/octet-stream");
		request.setHeader("Content-MD5", ComputeContentMD5(msg.content(), msg.contentSize()));
	}

	std::time_t t = std::time(nullptr);
	std::stringstream date;
#if defined(__GNUG__) && __GNUC__ < 5
	char tmbuff[26];
	strftime(tmbuff, 26, "%a, %d %b %Y %T", std::gmtime(&t));
	date << tmbuff << " GMT";
#else
	date << std::put_time(std::gmtime(&t), "%a, %d %b %Y %T GMT");
#endif
	request.setHeader("Date", date.str());
	request.setHeader("Host", url.host());
	request.setHeader("x-sdk-client", std::string("CPP/").append(ALIBABACLOUD_VERSION_STR));
	request.setHeader("x-acs-region-id", configuration().regionId());
	request.setHeader("x-acs-security-token", credentials.sessionToken());
	request.setHeader("x-acs-signature-method", signer_->name());
	request.setHeader("x-acs-signature-nonce", GenerateUuid());
	request.setHeader("x-acs-signature-version", signer_->version());
	request.setHeader("x-acs-version", msg.version());

	std::stringstream plaintext;
	plaintext << HttpMethodToString(method) << "\n"
		<< request.header("Accept") << "\n"
		<< request.header("Content-MD5") << "\n"
		<< request.header("Content-Type") << "\n"
		<< request.header("Date") << "\n"
		<< canonicalizedHeaders(request.headers());
	if (!url.hasQuery())
		plaintext << url.path();
	else
		plaintext << url.path() << "?" << url.query();

	std::stringstream sign;
	sign << "acs "
		<< credentials.accessKeyId()
		<< ":"
		<< signer_->generate(plaintext.str(), credentials.accessKeySecret());
	request.setHeader("Authorization", sign.str());

	return request;
}


std::string CommonClient::canonicalizedQuery(const std::map<std::string, std::string>& params) const
{
	if (params.empty())
		return std::string();

	std::stringstream ss;
	for (const auto &p : params)
	{
		std::string key = UrlEncode(p.first);
		StringReplace(key, "+", "%20");
		StringReplace(key, "*", "%2A");
		StringReplace(key, "%7E", "~");
		std::string value = UrlEncode(p.second);
		StringReplace(value, "+", "%20");
		StringReplace(value, "*", "%2A");
		StringReplace(value, "%7E", "~");
		ss << "&" << key << "=" << value;
	}
	return ss.str().substr(1);
}

HttpRequest CommonClient::buildRpcHttpRequest(const std::string & endpoint, const CommonRequest &msg, HttpRequest::Method method) const
{
	const Credentials credentials = credentialsProvider_->getCredentials();

	Url url;
	url.setScheme("https");
	url.setHost(endpoint);
	url.setPath(msg.resourcePath());

	auto params = msg.queryParameters();
	std::map <std::string, std::string> queryParams;
	for (const auto &p : params) {
		if (!p.second.empty())
			queryParams[p.first] = p.second;
	}

	queryParams["AccessKeyId"] = credentials.accessKeyId();
	queryParams["Format"] = "JSON";
	queryParams["RegionId"] = configuration().regionId();
	queryParams["SecurityToken"] = credentials.sessionToken();
	queryParams["SignatureMethod"] = signer_->name();
	queryParams["SignatureNonce"] = GenerateUuid();
	queryParams["SignatureVersion"] = signer_->version();
	std::time_t t = std::time(nullptr);
	std::stringstream ss;
#if defined(__GNUG__) && __GNUC__ < 5
	char tmbuff[26];
	strftime(tmbuff, 26, "%FT%TZ", std::gmtime(&t));
	ss << tmbuff;
#else
	ss << std::put_time(std::gmtime(&t), "%FT%TZ");
#endif
	queryParams["Timestamp"] = ss.str();
	queryParams["Version"] = msg.version();

	std::stringstream plaintext;
	plaintext << HttpMethodToString(method)
		<< "&"
		<< UrlEncode(url.path())
		<< "&"
		<< UrlEncode(canonicalizedQuery(queryParams));

	queryParams["Signature"] = signer_->generate(plaintext.str(), credentials.accessKeySecret() + "&");

	std::stringstream queryString;
	for (const auto &p : queryParams)
		queryString << "&" << p.first << "=" << UrlEncode(p.second);
	url.setQuery(queryString.str().substr(1));

	HttpRequest request(url);
	request.setMethod(method);
	request.setHeader("Host", url.host());
	request.setHeader("x-sdk-client", std::string("CPP/").append(ALIBABACLOUD_VERSION_STR));
	return request;
}