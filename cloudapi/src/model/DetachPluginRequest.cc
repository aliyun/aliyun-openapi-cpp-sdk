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

#include <alibabacloud/cloudapi/model/DetachPluginRequest.h>

using AlibabaCloud::CloudAPI::Model::DetachPluginRequest;

DetachPluginRequest::DetachPluginRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DetachPlugin") {
  setMethod(HttpRequest::Method::Post);
}

DetachPluginRequest::~DetachPluginRequest() {}

std::string DetachPluginRequest::getStageName() const {
  return stageName_;
}

void DetachPluginRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DetachPluginRequest::getPluginId() const {
  return pluginId_;
}

void DetachPluginRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

std::string DetachPluginRequest::getGroupId() const {
  return groupId_;
}

void DetachPluginRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DetachPluginRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachPluginRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DetachPluginRequest::getSecurityToken() const {
  return securityToken_;
}

void DetachPluginRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DetachPluginRequest::getApiId() const {
  return apiId_;
}

void DetachPluginRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

std::string DetachPluginRequest::getApiIds() const {
  return apiIds_;
}

void DetachPluginRequest::setApiIds(const std::string &apiIds) {
  apiIds_ = apiIds;
  setParameter(std::string("ApiIds"), apiIds);
}

