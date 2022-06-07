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

#include <alibabacloud/adb/model/DescribeMaintenanceActionRequest.h>

using AlibabaCloud::Adb::Model::DescribeMaintenanceActionRequest;

DescribeMaintenanceActionRequest::DescribeMaintenanceActionRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeMaintenanceAction") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMaintenanceActionRequest::~DescribeMaintenanceActionRequest() {}

long DescribeMaintenanceActionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMaintenanceActionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeMaintenanceActionRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMaintenanceActionRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMaintenanceActionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMaintenanceActionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeMaintenanceActionRequest::getIsHistory() const {
  return isHistory_;
}

void DescribeMaintenanceActionRequest::setIsHistory(int isHistory) {
  isHistory_ = isHistory;
  setParameter(std::string("IsHistory"), std::to_string(isHistory));
}

std::string DescribeMaintenanceActionRequest::getRegionId() const {
  return regionId_;
}

void DescribeMaintenanceActionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeMaintenanceActionRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMaintenanceActionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMaintenanceActionRequest::getTaskType() const {
  return taskType_;
}

void DescribeMaintenanceActionRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string DescribeMaintenanceActionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMaintenanceActionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMaintenanceActionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeMaintenanceActionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeMaintenanceActionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMaintenanceActionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeMaintenanceActionRequest::getRegion() const {
  return region_;
}

void DescribeMaintenanceActionRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

