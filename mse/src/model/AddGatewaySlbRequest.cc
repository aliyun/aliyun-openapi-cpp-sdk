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

#include <alibabacloud/mse/model/AddGatewaySlbRequest.h>

using AlibabaCloud::Mse::Model::AddGatewaySlbRequest;

AddGatewaySlbRequest::AddGatewaySlbRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewaySlb") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewaySlbRequest::~AddGatewaySlbRequest() {}

std::string AddGatewaySlbRequest::getSlbId() const {
  return slbId_;
}

void AddGatewaySlbRequest::setSlbId(const std::string &slbId) {
  slbId_ = slbId;
  setParameter(std::string("SlbId"), slbId);
}

std::string AddGatewaySlbRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewaySlbRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewaySlbRequest::getType() const {
  return type_;
}

void AddGatewaySlbRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddGatewaySlbRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewaySlbRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

