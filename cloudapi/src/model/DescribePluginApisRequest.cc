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

#include <alibabacloud/cloudapi/model/DescribePluginApisRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribePluginApisRequest;

DescribePluginApisRequest::DescribePluginApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribePluginApis") {
  setMethod(HttpRequest::Method::Post);
}

DescribePluginApisRequest::~DescribePluginApisRequest() {}

std::string DescribePluginApisRequest::getMethod() const {
  return method_;
}

void DescribePluginApisRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

std::string DescribePluginApisRequest::getPluginId() const {
  return pluginId_;
}

void DescribePluginApisRequest::setPluginId(const std::string &pluginId) {
  pluginId_ = pluginId;
  setParameter(std::string("PluginId"), pluginId);
}

std::string DescribePluginApisRequest::getGroupId() const {
  return groupId_;
}

void DescribePluginApisRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribePluginApisRequest::getDescription() const {
  return description_;
}

void DescribePluginApisRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribePluginApisRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePluginApisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePluginApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePluginApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePluginApisRequest::getPath() const {
  return path_;
}

void DescribePluginApisRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string DescribePluginApisRequest::getApiName() const {
  return apiName_;
}

void DescribePluginApisRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribePluginApisRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePluginApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribePluginApisRequest::getPageSize() const {
  return pageSize_;
}

void DescribePluginApisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePluginApisRequest::getApiId() const {
  return apiId_;
}

void DescribePluginApisRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

