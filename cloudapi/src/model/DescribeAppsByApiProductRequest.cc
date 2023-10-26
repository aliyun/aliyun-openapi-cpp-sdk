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

#include <alibabacloud/cloudapi/model/DescribeAppsByApiProductRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAppsByApiProductRequest;

DescribeAppsByApiProductRequest::DescribeAppsByApiProductRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAppsByApiProduct") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAppsByApiProductRequest::~DescribeAppsByApiProductRequest() {}

int DescribeAppsByApiProductRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAppsByApiProductRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAppsByApiProductRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAppsByApiProductRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAppsByApiProductRequest::getAppName() const {
  return appName_;
}

void DescribeAppsByApiProductRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeAppsByApiProductRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeAppsByApiProductRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeAppsByApiProductRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAppsByApiProductRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAppsByApiProductRequest::getApiProductId() const {
  return apiProductId_;
}

void DescribeAppsByApiProductRequest::setApiProductId(const std::string &apiProductId) {
  apiProductId_ = apiProductId;
  setParameter(std::string("ApiProductId"), apiProductId);
}

