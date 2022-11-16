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

#include <alibabacloud/cloudapi/model/DescribeApiHistoriesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiHistoriesRequest;

DescribeApiHistoriesRequest::DescribeApiHistoriesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiHistories") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApiHistoriesRequest::~DescribeApiHistoriesRequest() {}

std::string DescribeApiHistoriesRequest::getStageName() const {
  return stageName_;
}

void DescribeApiHistoriesRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeApiHistoriesRequest::getGroupId() const {
  return groupId_;
}

void DescribeApiHistoriesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int DescribeApiHistoriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApiHistoriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApiHistoriesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApiHistoriesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApiHistoriesRequest::getApiName() const {
  return apiName_;
}

void DescribeApiHistoriesRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribeApiHistoriesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApiHistoriesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeApiHistoriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApiHistoriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeApiHistoriesRequest::getApiId() const {
  return apiId_;
}

void DescribeApiHistoriesRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

