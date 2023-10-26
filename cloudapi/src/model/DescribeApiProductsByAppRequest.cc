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

#include <alibabacloud/cloudapi/model/DescribeApiProductsByAppRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiProductsByAppRequest;

DescribeApiProductsByAppRequest::DescribeApiProductsByAppRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiProductsByApp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApiProductsByAppRequest::~DescribeApiProductsByAppRequest() {}

int DescribeApiProductsByAppRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApiProductsByAppRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApiProductsByAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApiProductsByAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApiProductsByAppRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApiProductsByAppRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeApiProductsByAppRequest::getAppId() const {
  return appId_;
}

void DescribeApiProductsByAppRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

int DescribeApiProductsByAppRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApiProductsByAppRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

