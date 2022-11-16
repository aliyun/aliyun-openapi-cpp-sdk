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

#include <alibabacloud/cloudapi/model/DeletePluginRequest.h>

using AlibabaCloud::CloudAPI::Model::DeletePluginRequest;

DeletePluginRequest::DeletePluginRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DeletePlugin") {
  setMethod(HttpRequest::Method::Post);
}

DeletePluginRequest::~DeletePluginRequest() {}

std::string DeletePluginRequest::getPluginId() const {
  return pluginId_;
}

void DeletePluginRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

std::string DeletePluginRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeletePluginRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeletePluginRequest::getSecurityToken() const {
  return securityToken_;
}

void DeletePluginRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<DeletePluginRequest::Tag> DeletePluginRequest::getTag() const {
  return tag_;
}

void DeletePluginRequest::setTag(const std::vector<DeletePluginRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

