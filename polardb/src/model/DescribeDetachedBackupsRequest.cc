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

#include <alibabacloud/polardb/model/DescribeDetachedBackupsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDetachedBackupsRequest;

DescribeDetachedBackupsRequest::DescribeDetachedBackupsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDetachedBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDetachedBackupsRequest::~DescribeDetachedBackupsRequest() {}

long DescribeDetachedBackupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDetachedBackupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDetachedBackupsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDetachedBackupsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDetachedBackupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDetachedBackupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDetachedBackupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDetachedBackupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeDetachedBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDetachedBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDetachedBackupsRequest::getBackupRegion() const {
  return backupRegion_;
}

void DescribeDetachedBackupsRequest::setBackupRegion(const std::string &backupRegion) {
  backupRegion_ = backupRegion;
  setParameter(std::string("BackupRegion"), backupRegion);
}

std::string DescribeDetachedBackupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDetachedBackupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDetachedBackupsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDetachedBackupsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDetachedBackupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDetachedBackupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDetachedBackupsRequest::getBackupId() const {
  return backupId_;
}

void DescribeDetachedBackupsRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string DescribeDetachedBackupsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDetachedBackupsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDetachedBackupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDetachedBackupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDetachedBackupsRequest::getBackupStatus() const {
  return backupStatus_;
}

void DescribeDetachedBackupsRequest::setBackupStatus(const std::string &backupStatus) {
  backupStatus_ = backupStatus;
  setParameter(std::string("BackupStatus"), backupStatus);
}

std::string DescribeDetachedBackupsRequest::getBackupMode() const {
  return backupMode_;
}

void DescribeDetachedBackupsRequest::setBackupMode(const std::string &backupMode) {
  backupMode_ = backupMode;
  setParameter(std::string("BackupMode"), backupMode);
}

