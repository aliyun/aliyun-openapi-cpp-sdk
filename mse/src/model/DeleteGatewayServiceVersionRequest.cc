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

#include <alibabacloud/mse/model/DeleteGatewayServiceVersionRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewayServiceVersionRequest;

DeleteGatewayServiceVersionRequest::DeleteGatewayServiceVersionRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewayServiceVersion") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayServiceVersionRequest::~DeleteGatewayServiceVersionRequest() {}

std::string DeleteGatewayServiceVersionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewayServiceVersionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewayServiceVersionRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewayServiceVersionRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string DeleteGatewayServiceVersionRequest::getServiceVersion() const {
  return serviceVersion_;
}

void DeleteGatewayServiceVersionRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string DeleteGatewayServiceVersionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewayServiceVersionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long DeleteGatewayServiceVersionRequest::getServiceId() const {
  return serviceId_;
}

void DeleteGatewayServiceVersionRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

