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

#include <alibabacloud/cloudapi/model/DescribeApisByAppRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApisByAppRequest;

DescribeApisByAppRequest::DescribeApisByAppRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApisByApp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApisByAppRequest::~DescribeApisByAppRequest() {}

std::string DescribeApisByAppRequest::getMethod() const {
  return method_;
}

void DescribeApisByAppRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

std::string DescribeApisByAppRequest::getDescription() const {
  return description_;
}

void DescribeApisByAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeApisByAppRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApisByAppRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApisByAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApisByAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApisByAppRequest::getPath() const {
  return path_;
}

void DescribeApisByAppRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string DescribeApisByAppRequest::getApiName() const {
  return apiName_;
}

void DescribeApisByAppRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribeApisByAppRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApisByAppRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeApisByAppRequest::getAppId() const {
  return appId_;
}

void DescribeApisByAppRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

std::string DescribeApisByAppRequest::getApiUid() const {
  return apiUid_;
}

void DescribeApisByAppRequest::setApiUid(const std::string &apiUid) {
  apiUid_ = apiUid;
  setParameter(std::string("ApiUid"), apiUid);
}

int DescribeApisByAppRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApisByAppRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

