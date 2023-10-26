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

#include <alibabacloud/cloudapi/model/DescribeAppAttributesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAppAttributesRequest;

DescribeAppAttributesRequest::DescribeAppAttributesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAppAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAppAttributesRequest::~DescribeAppAttributesRequest() {}

std::string DescribeAppAttributesRequest::getStageName() const {
  return stageName_;
}

void DescribeAppAttributesRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

int DescribeAppAttributesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAppAttributesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAppAttributesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAppAttributesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAppAttributesRequest::getAppName() const {
  return appName_;
}

void DescribeAppAttributesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeAppAttributesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeAppAttributesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeAppAttributesRequest::getExcludeApiId() const {
  return excludeApiId_;
}

void DescribeAppAttributesRequest::setExcludeApiId(const std::string &excludeApiId) {
  excludeApiId_ = excludeApiId;
  setParameter(std::string("ExcludeApiId"), excludeApiId);
}

int DescribeAppAttributesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAppAttributesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeAppAttributesRequest::Tag> DescribeAppAttributesRequest::getTag() const {
  return tag_;
}

void DescribeAppAttributesRequest::setTag(const std::vector<DescribeAppAttributesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeAppAttributesRequest::getSort() const {
  return sort_;
}

void DescribeAppAttributesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

bool DescribeAppAttributesRequest::getEnableTagAuth() const {
  return enableTagAuth_;
}

void DescribeAppAttributesRequest::setEnableTagAuth(bool enableTagAuth) {
  enableTagAuth_ = enableTagAuth;
  setParameter(std::string("EnableTagAuth"), enableTagAuth ? "true" : "false");
}

std::string DescribeAppAttributesRequest::getExtend() const {
  return extend_;
}

void DescribeAppAttributesRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string DescribeAppAttributesRequest::getExcludeApiProductId() const {
  return excludeApiProductId_;
}

void DescribeAppAttributesRequest::setExcludeApiProductId(const std::string &excludeApiProductId) {
  excludeApiProductId_ = excludeApiProductId;
  setParameter(std::string("ExcludeApiProductId"), excludeApiProductId);
}

long DescribeAppAttributesRequest::getAppId() const {
  return appId_;
}

void DescribeAppAttributesRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

std::string DescribeAppAttributesRequest::getAppCode() const {
  return appCode_;
}

void DescribeAppAttributesRequest::setAppCode(const std::string &appCode) {
  appCode_ = appCode;
  setParameter(std::string("AppCode"), appCode);
}

std::string DescribeAppAttributesRequest::getAppKey() const {
  return appKey_;
}

void DescribeAppAttributesRequest::setAppKey(const std::string &appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), appKey);
}

