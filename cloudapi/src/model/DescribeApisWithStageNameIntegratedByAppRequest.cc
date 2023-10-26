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

#include <alibabacloud/cloudapi/model/DescribeApisWithStageNameIntegratedByAppRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApisWithStageNameIntegratedByAppRequest;

DescribeApisWithStageNameIntegratedByAppRequest::DescribeApisWithStageNameIntegratedByAppRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApisWithStageNameIntegratedByApp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApisWithStageNameIntegratedByAppRequest::~DescribeApisWithStageNameIntegratedByAppRequest() {}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getMethod() const {
  return method_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getDescription() const {
  return description_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeApisWithStageNameIntegratedByAppRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getPath() const {
  return path_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getApiName() const {
  return apiName_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeApisWithStageNameIntegratedByAppRequest::getAppId() const {
  return appId_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

std::string DescribeApisWithStageNameIntegratedByAppRequest::getApiUid() const {
  return apiUid_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setApiUid(const std::string &apiUid) {
  apiUid_ = apiUid;
  setParameter(std::string("ApiUid"), apiUid);
}

int DescribeApisWithStageNameIntegratedByAppRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApisWithStageNameIntegratedByAppRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

