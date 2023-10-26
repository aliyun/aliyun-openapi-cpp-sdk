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

#include <alibabacloud/cloudapi/model/DescribePluginsByApiRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribePluginsByApiRequest;

DescribePluginsByApiRequest::DescribePluginsByApiRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribePluginsByApi") {
  setMethod(HttpRequest::Method::Post);
}

DescribePluginsByApiRequest::~DescribePluginsByApiRequest() {}

std::string DescribePluginsByApiRequest::getStageName() const {
  return stageName_;
}

void DescribePluginsByApiRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribePluginsByApiRequest::getGroupId() const {
  return groupId_;
}

void DescribePluginsByApiRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int DescribePluginsByApiRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePluginsByApiRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePluginsByApiRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePluginsByApiRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePluginsByApiRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePluginsByApiRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribePluginsByApiRequest::getPageSize() const {
  return pageSize_;
}

void DescribePluginsByApiRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePluginsByApiRequest::getApiId() const {
  return apiId_;
}

void DescribePluginsByApiRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

