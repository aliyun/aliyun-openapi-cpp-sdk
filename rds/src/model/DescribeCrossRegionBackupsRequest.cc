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

#include <alibabacloud/rds/model/DescribeCrossRegionBackupsRequest.h>

using AlibabaCloud::Rds::Model::DescribeCrossRegionBackupsRequest;

DescribeCrossRegionBackupsRequest::DescribeCrossRegionBackupsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCrossRegionBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCrossRegionBackupsRequest::~DescribeCrossRegionBackupsRequest() {}

long DescribeCrossRegionBackupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCrossRegionBackupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCrossRegionBackupsRequest::getStartTime() const {
  return startTime_;
}

void DescribeCrossRegionBackupsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeCrossRegionBackupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCrossRegionBackupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCrossRegionBackupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCrossRegionBackupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCrossRegionBackupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCrossRegionBackupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCrossRegionBackupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCrossRegionBackupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeCrossRegionBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCrossRegionBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCrossRegionBackupsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeCrossRegionBackupsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeCrossRegionBackupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCrossRegionBackupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int DescribeCrossRegionBackupsRequest::getBackupId() const {
  return backupId_;
}

void DescribeCrossRegionBackupsRequest::setBackupId(int backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), std::to_string(backupId));
}

std::string DescribeCrossRegionBackupsRequest::getEndTime() const {
  return endTime_;
}

void DescribeCrossRegionBackupsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCrossRegionBackupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCrossRegionBackupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCrossRegionBackupsRequest::getCrossBackupRegion() const {
  return crossBackupRegion_;
}

void DescribeCrossRegionBackupsRequest::setCrossBackupRegion(const std::string &crossBackupRegion) {
  crossBackupRegion_ = crossBackupRegion;
  setParameter(std::string("CrossBackupRegion"), crossBackupRegion);
}

int DescribeCrossRegionBackupsRequest::getCrossBackupId() const {
  return crossBackupId_;
}

void DescribeCrossRegionBackupsRequest::setCrossBackupId(int crossBackupId) {
  crossBackupId_ = crossBackupId;
  setParameter(std::string("CrossBackupId"), std::to_string(crossBackupId));
}

