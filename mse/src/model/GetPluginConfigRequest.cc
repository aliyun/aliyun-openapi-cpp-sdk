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

#include <alibabacloud/mse/model/GetPluginConfigRequest.h>

using AlibabaCloud::Mse::Model::GetPluginConfigRequest;

GetPluginConfigRequest::GetPluginConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetPluginConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetPluginConfigRequest::~GetPluginConfigRequest() {}

std::string GetPluginConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetPluginConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetPluginConfigRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetPluginConfigRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long GetPluginConfigRequest::getPluginId() const {
  return pluginId_;
}

void GetPluginConfigRequest::setPluginId(long pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), std::to_string(pluginId));
}

std::string GetPluginConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetPluginConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

