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

#include <alibabacloud/rds/model/DescribeMigrateTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeMigrateTasksRequest;

DescribeMigrateTasksRequest::DescribeMigrateTasksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeMigrateTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMigrateTasksRequest::~DescribeMigrateTasksRequest() {}

long DescribeMigrateTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMigrateTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMigrateTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeMigrateTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeMigrateTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeMigrateTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeMigrateTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMigrateTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMigrateTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeMigrateTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeMigrateTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeMigrateTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeMigrateTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMigrateTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMigrateTasksRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeMigrateTasksRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeMigrateTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMigrateTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMigrateTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeMigrateTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeMigrateTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMigrateTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

