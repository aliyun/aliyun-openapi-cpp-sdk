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

#include <alibabacloud/cloudapi/model/DescribeApisByBackendRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApisByBackendRequest;

DescribeApisByBackendRequest::DescribeApisByBackendRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApisByBackend") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApisByBackendRequest::~DescribeApisByBackendRequest() {}

std::string DescribeApisByBackendRequest::getStageName() const {
  return stageName_;
}

void DescribeApisByBackendRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string DescribeApisByBackendRequest::getBackendId() const {
  return backendId_;
}

void DescribeApisByBackendRequest::setBackendId(const std::string &backendId) {
  backendId_ = backendId;
  setParameter(std::string("BackendId"), backendId);
}

int DescribeApisByBackendRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApisByBackendRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApisByBackendRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApisByBackendRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApisByBackendRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApisByBackendRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeApisByBackendRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApisByBackendRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

