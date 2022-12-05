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

#include <alibabacloud/polardb/model/DescribePendingMaintenanceActionRequest.h>

using AlibabaCloud::Polardb::Model::DescribePendingMaintenanceActionRequest;

DescribePendingMaintenanceActionRequest::DescribePendingMaintenanceActionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribePendingMaintenanceAction") {
  setMethod(HttpRequest::Method::Post);
}

DescribePendingMaintenanceActionRequest::~DescribePendingMaintenanceActionRequest() {}

long DescribePendingMaintenanceActionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePendingMaintenanceActionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribePendingMaintenanceActionRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePendingMaintenanceActionRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePendingMaintenanceActionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePendingMaintenanceActionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePendingMaintenanceActionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePendingMaintenanceActionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribePendingMaintenanceActionRequest::getIsHistory() const {
  return isHistory_;
}

void DescribePendingMaintenanceActionRequest::setIsHistory(int isHistory) {
  isHistory_ = isHistory;
  setParameter(std::string("IsHistory"), std::to_string(isHistory));
}

std::string DescribePendingMaintenanceActionRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribePendingMaintenanceActionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribePendingMaintenanceActionRequest::getPageSize() const {
  return pageSize_;
}

void DescribePendingMaintenanceActionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePendingMaintenanceActionRequest::getTaskType() const {
  return taskType_;
}

void DescribePendingMaintenanceActionRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string DescribePendingMaintenanceActionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePendingMaintenanceActionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePendingMaintenanceActionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePendingMaintenanceActionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePendingMaintenanceActionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePendingMaintenanceActionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePendingMaintenanceActionRequest::getRegion() const {
  return region_;
}

void DescribePendingMaintenanceActionRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

