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

#include <alibabacloud/mse/model/SelectGatewaySlbRequest.h>

using AlibabaCloud::Mse::Model::SelectGatewaySlbRequest;

SelectGatewaySlbRequest::SelectGatewaySlbRequest()
    : RpcServiceRequest("mse", "2019-05-31", "SelectGatewaySlb") {
  setMethod(HttpRequest::Method::Post);
}

SelectGatewaySlbRequest::~SelectGatewaySlbRequest() {}

std::string SelectGatewaySlbRequest::getMseSessionId() const {
  return mseSessionId_;
}

void SelectGatewaySlbRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string SelectGatewaySlbRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void SelectGatewaySlbRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string SelectGatewaySlbRequest::getType() const {
  return type_;
}

void SelectGatewaySlbRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string SelectGatewaySlbRequest::getName() const {
  return name_;
}

void SelectGatewaySlbRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string SelectGatewaySlbRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void SelectGatewaySlbRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

