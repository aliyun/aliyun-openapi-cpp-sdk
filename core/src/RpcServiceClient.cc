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

#include <alibabacloud/core/RpcServiceClient.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <alibabacloud/core/HmacSha1Signer.h>
#include "Utils.h"

using namespace AlibabaCloud;

RpcServiceClient::RpcServiceClient(const std::string & servicename, const std::shared_ptr<CredentialsProvider> &credentialsProvider,
	const ClientConfiguration &configuration,
	const std::shared_ptr<Signer> &signer) :
	CoreClient(servicename, configuration),
	credentialsProvider_(credentialsProvider),
	signer_(signer)
{
}

RpcServiceClient::~RpcServiceClient()
{
}

std::string RpcServiceClient::canonicalizedQuery(const std::map<std::string, std::string>& params) const
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

RpcServiceClient::JsonOutcome RpcServiceClient::makeRequest(const std::string &endpoint, const RpcServiceRequest &msg, HttpRequest::Method method)const
{
	auto outcome = AttemptRequest(endpoint, msg, method);
	if (outcome.isSuccess())
		return JsonOutcome(std::string(outcome.result().body(),
			outcome.result().bodySize()));
	else
		return JsonOutcome(outcome.error());
}

HttpRequest RpcServiceClient::buildHttpRequest(const std::string & endpoint, const ServiceRequest &msg, HttpRequest::Method method )const
{
	return buildHttpRequest(endpoint, dynamic_cast<const RpcServiceRequest& >(msg), method);
}

HttpRequest RpcServiceClient::buildHttpRequest(const std::string & endpoint, const RpcServiceRequest &msg, HttpRequest::Method method) const
{
	const Credentials credentials = credentialsProvider_->getCredentials();

	Url url;
	url.setScheme("https");
	url.setHost(endpoint);
	url.setPath(msg.resourcePath());

	auto params = msg.parameters();
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
	strftime(tmbuff, 26, "%FT%TZ" , std::gmtime(&t));
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