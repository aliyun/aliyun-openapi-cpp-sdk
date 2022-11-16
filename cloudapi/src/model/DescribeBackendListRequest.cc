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

#include <alibabacloud/cloudapi/model/DescribeBackendListRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeBackendListRequest;

DescribeBackendListRequest::DescribeBackendListRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeBackendList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackendListRequest::~DescribeBackendListRequest() {}

std::string DescribeBackendListRequest::getBackendName() const {
  return backendName_;
}

void DescribeBackendListRequest::setBackendName(const std::string &backendName) {
  backendName_ = backendName;
  setParameter(std::string("BackendName"), backendName);
}

int DescribeBackendListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBackendListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBackendListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackendListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackendListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeBackendListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeBackendListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackendListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackendListRequest::getBackendType() const {
  return backendType_;
}

void DescribeBackendListRequest::setBackendType(const std::string &backendType) {
  backendType_ = backendType;
  setParameter(std::string("BackendType"), backendType);
}

