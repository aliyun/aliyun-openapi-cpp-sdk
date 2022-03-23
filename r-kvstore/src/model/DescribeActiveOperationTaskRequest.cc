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

#include <alibabacloud/r-kvstore/model/DescribeActiveOperationTaskRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeActiveOperationTaskRequest;

DescribeActiveOperationTaskRequest::DescribeActiveOperationTaskRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeActiveOperationTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationTaskRequest::~DescribeActiveOperationTaskRequest() {}

long DescribeActiveOperationTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActiveOperationTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationTaskRequest::getProductId() const {
  return productId_;
}

void DescribeActiveOperationTaskRequest::setProductId(const std::string &productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), productId);
}

int DescribeActiveOperationTaskRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeActiveOperationTaskRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeActiveOperationTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActiveOperationTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeActiveOperationTaskRequest::getIsHistory() const {
  return isHistory_;
}

void DescribeActiveOperationTaskRequest::setIsHistory(int isHistory) {
  isHistory_ = isHistory;
  setParameter(std::string("IsHistory"), std::to_string(isHistory));
}

std::string DescribeActiveOperationTaskRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeActiveOperationTaskRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeActiveOperationTaskRequest::getPageSize() const {
  return pageSize_;
}

void DescribeActiveOperationTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeActiveOperationTaskRequest::getTaskType() const {
  return taskType_;
}

void DescribeActiveOperationTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string DescribeActiveOperationTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActiveOperationTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActiveOperationTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActiveOperationTaskRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActiveOperationTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeActiveOperationTaskRequest::getRegion() const {
  return region_;
}

void DescribeActiveOperationTaskRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

