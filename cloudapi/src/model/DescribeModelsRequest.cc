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

#include <alibabacloud/cloudapi/model/DescribeModelsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeModelsRequest;

DescribeModelsRequest::DescribeModelsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeModels") {
  setMethod(HttpRequest::Method::Post);
}

DescribeModelsRequest::~DescribeModelsRequest() {}

std::string DescribeModelsRequest::getModelId() const {
  return modelId_;
}

void DescribeModelsRequest::setModelId(const std::string &modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), modelId);
}

std::string DescribeModelsRequest::getGroupId() const {
  return groupId_;
}

void DescribeModelsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeModelsRequest::getModelName() const {
  return modelName_;
}

void DescribeModelsRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

int DescribeModelsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeModelsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeModelsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeModelsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeModelsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeModelsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeModelsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeModelsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

