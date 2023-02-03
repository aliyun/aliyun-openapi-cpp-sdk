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

#include <alibabacloud/mse/model/DeleteGatewayServiceRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewayServiceRequest;

DeleteGatewayServiceRequest::DeleteGatewayServiceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewayService") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayServiceRequest::~DeleteGatewayServiceRequest() {}

std::string DeleteGatewayServiceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewayServiceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewayServiceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewayServiceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long DeleteGatewayServiceRequest::getGatewayId() const {
  return gatewayId_;
}

void DeleteGatewayServiceRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string DeleteGatewayServiceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewayServiceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string DeleteGatewayServiceRequest::getServiceId() const {
  return serviceId_;
}

void DeleteGatewayServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

