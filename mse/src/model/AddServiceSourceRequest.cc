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

#include <alibabacloud/mse/model/AddServiceSourceRequest.h>

using AlibabaCloud::Mse::Model::AddServiceSourceRequest;

AddServiceSourceRequest::AddServiceSourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddServiceSource") {
  setMethod(HttpRequest::Method::Post);
}

AddServiceSourceRequest::~AddServiceSourceRequest() {}

std::string AddServiceSourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddServiceSourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddServiceSourceRequest::getSource() const {
  return source_;
}

void AddServiceSourceRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string AddServiceSourceRequest::getType() const {
  return type_;
}

void AddServiceSourceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string AddServiceSourceRequest::getAddress() const {
  return address_;
}

void AddServiceSourceRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string AddServiceSourceRequest::getName() const {
  return name_;
}

void AddServiceSourceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddServiceSourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddServiceSourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

