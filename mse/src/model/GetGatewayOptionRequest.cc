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

#include <alibabacloud/mse/model/GetGatewayOptionRequest.h>

using AlibabaCloud::Mse::Model::GetGatewayOptionRequest;

GetGatewayOptionRequest::GetGatewayOptionRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetGatewayOption") {
  setMethod(HttpRequest::Method::Post);
}

GetGatewayOptionRequest::~GetGatewayOptionRequest() {}

std::string GetGatewayOptionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetGatewayOptionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetGatewayOptionRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetGatewayOptionRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long GetGatewayOptionRequest::getGatewayId() const {
  return gatewayId_;
}

void GetGatewayOptionRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string GetGatewayOptionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetGatewayOptionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

