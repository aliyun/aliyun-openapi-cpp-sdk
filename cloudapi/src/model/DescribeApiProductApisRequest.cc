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

#include <alibabacloud/cloudapi/model/DescribeApiProductApisRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiProductApisRequest;

DescribeApiProductApisRequest::DescribeApiProductApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiProductApis") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApiProductApisRequest::~DescribeApiProductApisRequest() {}

int DescribeApiProductApisRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApiProductApisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApiProductApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApiProductApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApiProductApisRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApiProductApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeApiProductApisRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApiProductApisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeApiProductApisRequest::getApiProductId() const {
  return apiProductId_;
}

void DescribeApiProductApisRequest::setApiProductId(const std::string &apiProductId) {
  apiProductId_ = apiProductId;
  setParameter(std::string("ApiProductId"), apiProductId);
}

