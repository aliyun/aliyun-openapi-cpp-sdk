/*
 * Copyright 1999-2019 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/core/AlibabaCloud.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include <alibabacloud/core/HmacSha1Signer.h>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <alibabacloud/core/Utils.h>

namespace AlibabaCloud {

RpcServiceClient::RpcServiceClient(const std::string & servicename,
  const std::shared_ptr<CredentialsProvider> &credentialsProvider,
  const ClientConfiguration &configuration,
  const std::shared_ptr<Signer> &signer) :
  CoreClient(servicename, configuration),
  credentialsProvider_(credentialsProvider),
  signer_(signer) {
}

RpcServiceClient::~RpcServiceClient() {
}

RpcServiceClient::JsonOutcome RpcServiceClient::makeRequest(
  const std::string &endpoint,
  const RpcServiceRequest &msg, HttpRequest::Method method)const {
  auto outcome = AttemptRequest(endpoint, msg, method);
  if (outcome.isSuccess())
    return JsonOutcome(std::string(outcome.result().body(),
      outcome.result().bodySize()));
  else
    return JsonOutcome(outcome.error());
}

HttpRequest RpcServiceClient::buildHttpRequest(const std::string & endpoint,
  const ServiceRequest &msg, HttpRequest::Method method)const {
  return buildHttpRequest(endpoint,
    dynamic_cast<const RpcServiceRequest& >(msg), method);
}

HttpRequest RpcServiceClient::buildHttpRequest(const std::string & endpoint,
  const RpcServiceRequest &msg, HttpRequest::Method method) const {
  const Credentials credentials = credentialsProvider_->getCredentials();

  Url url;
  if (msg.scheme().empty()) {
    url.setScheme("https");
  } else {
    url.setScheme(msg.scheme());
  }
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

  queryParams["Signature"] = signer_->generate(plaintext.str(),
    credentials.accessKeySecret() + "&");

  std::stringstream queryString;
  for (const auto &p : queryParams)
    queryString << "&" << p.first << "=" << UrlEncode(p.second);
  url.setQuery(queryString.str().substr(1));

  HttpRequest request(url);
  if (msg.connectTimeout() != kInvalidTimeout) {
    request.setConnectTimeout(msg.connectTimeout());
  } else {
    request.setConnectTimeout(configuration().connectTimeout());
  }

  if (msg.readTimeout() != kInvalidTimeout) {
    request.setReadTimeout(msg.readTimeout());
  } else {
    request.setReadTimeout(configuration().readTimeout());
  }

  request.setMethod(method);
  request.setHeader("Host", url.host());
  request.setHeader("x-sdk-client",
    std::string("CPP/").append(ALIBABACLOUD_VERSION_STR));
  return request;
}

}  // namespace AlibabaCloud
