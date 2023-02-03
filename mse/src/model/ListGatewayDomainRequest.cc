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

#include <alibabacloud/mse/model/ListGatewayDomainRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayDomainRequest;

ListGatewayDomainRequest::ListGatewayDomainRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewayDomain") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayDomainRequest::~ListGatewayDomainRequest() {}

std::string ListGatewayDomainRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayDomainRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListGatewayDomainRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ListGatewayDomainRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string ListGatewayDomainRequest::getType() const {
  return type_;
}

void ListGatewayDomainRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListGatewayDomainRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayDomainRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

