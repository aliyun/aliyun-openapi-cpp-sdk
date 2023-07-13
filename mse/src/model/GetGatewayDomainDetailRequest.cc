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

#include <alibabacloud/mse/model/GetGatewayDomainDetailRequest.h>

using AlibabaCloud::Mse::Model::GetGatewayDomainDetailRequest;

GetGatewayDomainDetailRequest::GetGatewayDomainDetailRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetGatewayDomainDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetGatewayDomainDetailRequest::~GetGatewayDomainDetailRequest() {}

std::string GetGatewayDomainDetailRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetGatewayDomainDetailRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetGatewayDomainDetailRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetGatewayDomainDetailRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string GetGatewayDomainDetailRequest::getId() const {
  return id_;
}

void GetGatewayDomainDetailRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string GetGatewayDomainDetailRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetGatewayDomainDetailRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

