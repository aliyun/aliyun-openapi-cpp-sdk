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

#include <alibabacloud/mse/model/PullServicesRequest.h>

using AlibabaCloud::Mse::Model::PullServicesRequest;

PullServicesRequest::PullServicesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "PullServices") {
  setMethod(HttpRequest::Method::Get);
}

PullServicesRequest::~PullServicesRequest() {}

std::string PullServicesRequest::getSourceId() const {
  return sourceId_;
}

void PullServicesRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string PullServicesRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void PullServicesRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string PullServicesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void PullServicesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string PullServicesRequest::getSourceType() const {
  return sourceType_;
}

void PullServicesRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

