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

#include <alibabacloud/mse/model/GetPluginsRequest.h>

using AlibabaCloud::Mse::Model::GetPluginsRequest;

GetPluginsRequest::GetPluginsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetPlugins") {
  setMethod(HttpRequest::Method::Post);
}

GetPluginsRequest::~GetPluginsRequest() {}

std::string GetPluginsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetPluginsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetPluginsRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetPluginsRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

bool GetPluginsRequest::getEnableOnly() const {
  return enableOnly_;
}

void GetPluginsRequest::setEnableOnly(bool enableOnly) {
  enableOnly_ = enableOnly;
  setParameter(std::string("EnableOnly"), enableOnly ? "true" : "false");
}

std::string GetPluginsRequest::getName() const {
  return name_;
}

void GetPluginsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string GetPluginsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetPluginsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int GetPluginsRequest::getCategory() const {
  return category_;
}

void GetPluginsRequest::setCategory(int category) {
  category_ = category;
  setParameter(std::string("Category"), std::to_string(category));
}

