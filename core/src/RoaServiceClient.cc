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

#include <alibabacloud/core/RoaServiceClient.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <alibabacloud/core/HmacSha1Signer.h>
//#include <alibabacloud/core/RoaErrorMarshaller.h>
#include "Utils.h"

using namespace AlibabaCloud;

RoaServiceClient::RoaServiceClient(const std::string & servicename, const std::shared_ptr<CredentialsProvider> &credentialsProvider,
	const ClientConfiguration &configuration,
	const std::shared_ptr<Signer> &signer) :
	CoreClient(servicename, configuration),
	credentialsProvider_(credentialsProvider),
	signer_(signer)
{
}

RoaServiceClient::~RoaServiceClient()
{
}

std::string RoaServiceClient::canonicalizedResource(const std::string &path, std::map <std::string, std::string> &params)const
{
	if (params.empty())
		return path;

	std::stringstream ss;
	for (const auto &p : params)
	{
		if (p.second.empty())
			ss << "&" << p.first;
		else
			ss << "&" << p.first << "=" << p.second;
	}

	std::string str = path;
	str.append("?").append(ss.str().substr(1));
	return str;
}

std::string RoaServiceClient::canonicalizedHeaders(const HttpMessage::HeaderCollection &headers)const
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

RoaServiceClient::JsonOutcome RoaServiceClient::makeRequest(const std::string &endpoint, const RoaServiceRequest &msg, HttpRequest::Method method)const
{
	auto outcome = AttemptRequest(endpoint, msg, method);
	if (outcome.isSuccess())
		return JsonOutcome(std::string(outcome.result().body(),
			outcome.result().bodySize()));
	else
		return JsonOutcome(outcome.error());
}

HttpRequest RoaServiceClient::buildHttpRequest(const std::string & endpoint, const ServiceRequest &msg, HttpRequest::Method method)const
{
	return buildHttpRequest(endpoint, dynamic_cast<const RoaServiceRequest& >(msg), method);
}

HttpRequest RoaServiceClient::buildHttpRequest(const std::string & endpoint, const RoaServiceRequest &msg, HttpRequest::Method method) const
{
	const Credentials credentials = credentialsProvider_->getCredentials();

	Url url;
	url.setScheme("https");
	url.setHost(endpoint);
	url.setPath(msg.resourcePath());

	auto params = msg.parameters();
	std::map <std::string, std::string> queryParams;
	for (const auto &p : params){
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
		request.setHeader("Content-MD5", ComputeContentMD5(msg.content(),msg.contentSize()));
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
	if(!credentials.sessionToken().empty())
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
