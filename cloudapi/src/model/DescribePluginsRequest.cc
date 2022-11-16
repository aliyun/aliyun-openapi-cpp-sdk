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

#include <alibabacloud/cloudapi/model/DescribePluginsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribePluginsRequest;

DescribePluginsRequest::DescribePluginsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribePlugins") {
  setMethod(HttpRequest::Method::Post);
}

DescribePluginsRequest::~DescribePluginsRequest() {}

std::string DescribePluginsRequest::getPluginName() const {
  return pluginName_;
}

void DescribePluginsRequest::setPluginName(const std::string &pluginName) {
  pluginName_ = pluginName;
  setParameter(std::string("PluginName"), pluginName);
}

std::string DescribePluginsRequest::getPluginId() const {
  return pluginId_;
}

void DescribePluginsRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

int DescribePluginsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePluginsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePluginsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePluginsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DescribePluginsRequest::getDisableAuthForConsole() const {
  return disableAuthForConsole_;
}

void DescribePluginsRequest::setDisableAuthForConsole(bool disableAuthForConsole) {
  disableAuthForConsole_ = disableAuthForConsole;
  setParameter(std::string("DisableAuthForConsole"), disableAuthForConsole ? "true" : "false");
}

std::string DescribePluginsRequest::getPluginType() const {
  return pluginType_;
}

void DescribePluginsRequest::setPluginType(const std::string &pluginType) {
  pluginType_ = pluginType;
  setParameter(std::string("PluginType"), pluginType);
}

std::string DescribePluginsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePluginsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribePluginsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePluginsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribePluginsRequest::Tag> DescribePluginsRequest::getTag() const {
  return tag_;
}

void DescribePluginsRequest::setTag(const std::vector<DescribePluginsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

