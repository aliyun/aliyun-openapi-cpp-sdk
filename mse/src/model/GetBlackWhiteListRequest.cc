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

#include <alibabacloud/mse/model/GetBlackWhiteListRequest.h>

using AlibabaCloud::Mse::Model::GetBlackWhiteListRequest;

GetBlackWhiteListRequest::GetBlackWhiteListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetBlackWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

GetBlackWhiteListRequest::~GetBlackWhiteListRequest() {}

std::string GetBlackWhiteListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetBlackWhiteListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetBlackWhiteListRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetBlackWhiteListRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string GetBlackWhiteListRequest::getType() const {
  return type_;
}

void GetBlackWhiteListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

bool GetBlackWhiteListRequest::getIsWhite() const {
  return isWhite_;
}

void GetBlackWhiteListRequest::setIsWhite(bool isWhite) {
  isWhite_ = isWhite;
  setParameter(std::string("IsWhite"), isWhite ? "true" : "false");
}

std::string GetBlackWhiteListRequest::getResourceType() const {
  return resourceType_;
}

void GetBlackWhiteListRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetBlackWhiteListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetBlackWhiteListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

