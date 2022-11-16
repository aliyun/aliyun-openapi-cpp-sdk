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

#include <alibabacloud/cloudapi/model/ModifyPluginRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyPluginRequest;

ModifyPluginRequest::ModifyPluginRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyPlugin") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPluginRequest::~ModifyPluginRequest() {}

std::string ModifyPluginRequest::getPluginName() const {
  return pluginName_;
}

void ModifyPluginRequest::setPluginName(const std::string &pluginName) {
  pluginName_ = pluginName;
  setParameter(std::string("PluginName"), pluginName);
}

std::string ModifyPluginRequest::getPluginId() const {
  return pluginId_;
}

void ModifyPluginRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

std::string ModifyPluginRequest::getPluginData() const {
  return pluginData_;
}

void ModifyPluginRequest::setPluginData(const std::string &pluginData) {
  pluginData_ = pluginData;
  setParameter(std::string("PluginData"), pluginData);
}

std::string ModifyPluginRequest::getDescription() const {
  return description_;
}

void ModifyPluginRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyPluginRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyPluginRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyPluginRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyPluginRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<ModifyPluginRequest::Tag> ModifyPluginRequest::getTag() const {
  return tag_;
}

void ModifyPluginRequest::setTag(const std::vector<ModifyPluginRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

