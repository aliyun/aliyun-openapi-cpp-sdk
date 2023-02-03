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

#include <alibabacloud/mse/model/AddGatewayServiceVersionRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayServiceVersionRequest;

AddGatewayServiceVersionRequest::AddGatewayServiceVersionRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewayServiceVersion") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayServiceVersionRequest::~AddGatewayServiceVersionRequest() {}

std::string AddGatewayServiceVersionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddGatewayServiceVersionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddGatewayServiceVersionRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewayServiceVersionRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewayServiceVersionRequest::getServiceVersion() const {
  return serviceVersion_;
}

void AddGatewayServiceVersionRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string AddGatewayServiceVersionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayServiceVersionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long AddGatewayServiceVersionRequest::getServiceId() const {
  return serviceId_;
}

void AddGatewayServiceVersionRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

