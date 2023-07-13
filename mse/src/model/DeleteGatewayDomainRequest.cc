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

#include <alibabacloud/mse/model/DeleteGatewayDomainRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewayDomainRequest;

DeleteGatewayDomainRequest::DeleteGatewayDomainRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewayDomain") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayDomainRequest::~DeleteGatewayDomainRequest() {}

std::string DeleteGatewayDomainRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewayDomainRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewayDomainRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewayDomainRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string DeleteGatewayDomainRequest::getId() const {
  return id_;
}

void DeleteGatewayDomainRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DeleteGatewayDomainRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewayDomainRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

