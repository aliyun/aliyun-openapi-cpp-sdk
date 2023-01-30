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

#include <alibabacloud/cloudapi/model/DescribeApisRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApisRequest;

DescribeApisRequest::DescribeApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApis") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApisRequest::~DescribeApisRequest() {}

std::string DescribeApisRequest::getStageName() const {
  return stageName_;
}

void DescribeApisRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

int DescribeApisRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeApisRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool DescribeApisRequest::getUnDeployed() const {
  return unDeployed_;
}

void DescribeApisRequest::setUnDeployed(bool unDeployed) {
  unDeployed_ = unDeployed;
  setParameter(std::string("UnDeployed"), unDeployed ? "true" : "false");
}

int DescribeApisRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeApisRequest::Tag> DescribeApisRequest::getTag() const {
  return tag_;
}

void DescribeApisRequest::setTag(const std::vector<DescribeApisRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeApisRequest::getApiMethod() const {
  return apiMethod_;
}

void DescribeApisRequest::setApiMethod(const std::string &apiMethod) {
  apiMethod_ = apiMethod;
  setParameter(std::string("ApiMethod"), apiMethod);
}

std::string DescribeApisRequest::getVisibility() const {
  return visibility_;
}

void DescribeApisRequest::setVisibility(const std::string &visibility) {
  visibility_ = visibility;
  setParameter(std::string("Visibility"), visibility);
}

std::string DescribeApisRequest::getGroupId() const {
  return groupId_;
}

void DescribeApisRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeApisRequest::getApiPath() const {
  return apiPath_;
}

void DescribeApisRequest::setApiPath(const std::string &apiPath) {
  apiPath_ = apiPath;
  setParameter(std::string("ApiPath"), apiPath);
}

bool DescribeApisRequest::getEnableTagAuth() const {
  return enableTagAuth_;
}

void DescribeApisRequest::setEnableTagAuth(bool enableTagAuth) {
  enableTagAuth_ = enableTagAuth;
  setParameter(std::string("EnableTagAuth"), enableTagAuth ? "true" : "false");
}

std::string DescribeApisRequest::getApiName() const {
  return apiName_;
}

void DescribeApisRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribeApisRequest::getCatalogId() const {
  return catalogId_;
}

void DescribeApisRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string DescribeApisRequest::getApiId() const {
  return apiId_;
}

void DescribeApisRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

