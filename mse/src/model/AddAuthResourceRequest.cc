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

#include <alibabacloud/mse/model/AddAuthResourceRequest.h>

using AlibabaCloud::Mse::Model::AddAuthResourceRequest;

AddAuthResourceRequest::AddAuthResourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddAuthResource") {
  setMethod(HttpRequest::Method::Post);
}

AddAuthResourceRequest::~AddAuthResourceRequest() {}

bool AddAuthResourceRequest::getIgnoreCase() const {
  return ignoreCase_;
}

void AddAuthResourceRequest::setIgnoreCase(bool ignoreCase) {
  ignoreCase_ = ignoreCase;
  setParameter(std::string("IgnoreCase"), ignoreCase ? "true" : "false");
}

std::string AddAuthResourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddAuthResourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddAuthResourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddAuthResourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long AddAuthResourceRequest::getDomainId() const {
  return domainId_;
}

void AddAuthResourceRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

std::string AddAuthResourceRequest::getPath() const {
  return path_;
}

void AddAuthResourceRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string AddAuthResourceRequest::getMatchType() const {
  return matchType_;
}

void AddAuthResourceRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

long AddAuthResourceRequest::getAuthId() const {
  return authId_;
}

void AddAuthResourceRequest::setAuthId(long authId) {
  authId_ = authId;
  setParameter(std::string("AuthId"), std::to_string(authId));
}

std::vector<AddAuthResourceRequest::AuthResourceHeaderList> AddAuthResourceRequest::getAuthResourceHeaderList() const {
  return authResourceHeaderList_;
}

void AddAuthResourceRequest::setAuthResourceHeaderList(const std::vector<AddAuthResourceRequest::AuthResourceHeaderList> &authResourceHeaderList) {
  authResourceHeaderList_ = authResourceHeaderList;
  for(int dep1 = 0; dep1 != authResourceHeaderList.size(); dep1++) {
    setParameter(std::string("AuthResourceHeaderList") + "." + std::to_string(dep1 + 1) + ".HeaderValue", authResourceHeaderList[dep1].headerValue);
    setParameter(std::string("AuthResourceHeaderList") + "." + std::to_string(dep1 + 1) + ".HeaderMethod", authResourceHeaderList[dep1].headerMethod);
    setParameter(std::string("AuthResourceHeaderList") + "." + std::to_string(dep1 + 1) + ".HeaderKey", authResourceHeaderList[dep1].headerKey);
  }
}

std::string AddAuthResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddAuthResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

