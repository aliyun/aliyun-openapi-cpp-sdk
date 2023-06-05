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

#include <alibabacloud/rds/model/DescribeActiveOperationTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeActiveOperationTasksRequest;

DescribeActiveOperationTasksRequest::DescribeActiveOperationTasksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeActiveOperationTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationTasksRequest::~DescribeActiveOperationTasksRequest() {}

long DescribeActiveOperationTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActiveOperationTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationTasksRequest::getProductId() const {
  return productId_;
}

void DescribeActiveOperationTasksRequest::setProductId(const std::string &productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), productId);
}

std::string DescribeActiveOperationTasksRequest::getChangeLevel() const {
  return changeLevel_;
}

void DescribeActiveOperationTasksRequest::setChangeLevel(const std::string &changeLevel) {
  changeLevel_ = changeLevel;
  setParameter(std::string("ChangeLevel"), changeLevel);
}

int DescribeActiveOperationTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeActiveOperationTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeActiveOperationTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActiveOperationTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeActiveOperationTasksRequest::getInsName() const {
  return insName_;
}

void DescribeActiveOperationTasksRequest::setInsName(const std::string &insName) {
  insName_ = insName;
  setParameter(std::string("InsName"), insName);
}

std::string DescribeActiveOperationTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeActiveOperationTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeActiveOperationTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeActiveOperationTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeActiveOperationTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeActiveOperationTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeActiveOperationTasksRequest::getTaskType() const {
  return taskType_;
}

void DescribeActiveOperationTasksRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string DescribeActiveOperationTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActiveOperationTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActiveOperationTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActiveOperationTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int DescribeActiveOperationTasksRequest::getAllowCancel() const {
  return allowCancel_;
}

void DescribeActiveOperationTasksRequest::setAllowCancel(int allowCancel) {
  allowCancel_ = allowCancel;
  setParameter(std::string("AllowCancel"), std::to_string(allowCancel));
}

long DescribeActiveOperationTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActiveOperationTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeActiveOperationTasksRequest::getDbType() const {
  return dbType_;
}

void DescribeActiveOperationTasksRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

int DescribeActiveOperationTasksRequest::getAllowChange() const {
  return allowChange_;
}

void DescribeActiveOperationTasksRequest::setAllowChange(int allowChange) {
  allowChange_ = allowChange;
  setParameter(std::string("AllowChange"), std::to_string(allowChange));
}

std::string DescribeActiveOperationTasksRequest::getRegion() const {
  return region_;
}

void DescribeActiveOperationTasksRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

int DescribeActiveOperationTasksRequest::getStatus() const {
  return status_;
}

void DescribeActiveOperationTasksRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

