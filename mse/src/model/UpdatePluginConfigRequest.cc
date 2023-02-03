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

#include <alibabacloud/mse/model/UpdatePluginConfigRequest.h>

using AlibabaCloud::Mse::Model::UpdatePluginConfigRequest;

UpdatePluginConfigRequest::UpdatePluginConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdatePluginConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePluginConfigRequest::~UpdatePluginConfigRequest() {}

std::string UpdatePluginConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdatePluginConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdatePluginConfigRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdatePluginConfigRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdatePluginConfigRequest::getGmtModified() const {
  return gmtModified_;
}

void UpdatePluginConfigRequest::setGmtModified(const std::string &gmtModified) {
  gmtModified_ = gmtModified;
  setParameter(std::string("GmtModified"), gmtModified);
}

bool UpdatePluginConfigRequest::getEnable() const {
  return enable_;
}

void UpdatePluginConfigRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

long UpdatePluginConfigRequest::getId() const {
  return id_;
}

void UpdatePluginConfigRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdatePluginConfigRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdatePluginConfigRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

long UpdatePluginConfigRequest::getPluginId() const {
  return pluginId_;
}

void UpdatePluginConfigRequest::setPluginId(long pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), std::to_string(pluginId));
}

std::string UpdatePluginConfigRequest::getGmtCreate() const {
  return gmtCreate_;
}

void UpdatePluginConfigRequest::setGmtCreate(const std::string &gmtCreate) {
  gmtCreate_ = gmtCreate;
  setParameter(std::string("GmtCreate"), gmtCreate);
}

std::string UpdatePluginConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdatePluginConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int UpdatePluginConfigRequest::getConfigLevel() const {
  return configLevel_;
}

void UpdatePluginConfigRequest::setConfigLevel(int configLevel) {
  configLevel_ = configLevel;
  setParameter(std::string("ConfigLevel"), std::to_string(configLevel));
}

std::string UpdatePluginConfigRequest::getConfig() const {
  return config_;
}

void UpdatePluginConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

