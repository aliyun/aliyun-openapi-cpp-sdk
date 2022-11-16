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

#include <alibabacloud/cloudapi/model/AttachPluginRequest.h>

using AlibabaCloud::CloudAPI::Model::AttachPluginRequest;

AttachPluginRequest::AttachPluginRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "AttachPlugin") {
  setMethod(HttpRequest::Method::Post);
}

AttachPluginRequest::~AttachPluginRequest() {}

std::string AttachPluginRequest::getStageName() const {
  return stageName_;
}

void AttachPluginRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string AttachPluginRequest::getPluginId() const {
  return pluginId_;
}

void AttachPluginRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

std::string AttachPluginRequest::getGroupId() const {
  return groupId_;
}

void AttachPluginRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string AttachPluginRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AttachPluginRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AttachPluginRequest::getSecurityToken() const {
  return securityToken_;
}

void AttachPluginRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AttachPluginRequest::getApiId() const {
  return apiId_;
}

void AttachPluginRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

std::string AttachPluginRequest::getApiIds() const {
  return apiIds_;
}

void AttachPluginRequest::setApiIds(const std::string &apiIds) {
  apiIds_ = apiIds;
  setParameter(std::string("ApiIds"), apiIds);
}

