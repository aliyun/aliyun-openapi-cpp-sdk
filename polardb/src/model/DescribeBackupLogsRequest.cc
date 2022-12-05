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

#include <alibabacloud/polardb/model/DescribeBackupLogsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeBackupLogsRequest;

DescribeBackupLogsRequest::DescribeBackupLogsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeBackupLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupLogsRequest::~DescribeBackupLogsRequest() {}

long DescribeBackupLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeBackupLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeBackupLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBackupLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBackupLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeBackupLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackupLogsRequest::getBackupRegion() const {
  return backupRegion_;
}

void DescribeBackupLogsRequest::setBackupRegion(const std::string &backupRegion) {
  backupRegion_ = backupRegion;
  setParameter(std::string("BackupRegion"), backupRegion);
}

std::string DescribeBackupLogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBackupLogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBackupLogsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeBackupLogsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeBackupLogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBackupLogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeBackupLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeBackupLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeBackupLogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupLogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

