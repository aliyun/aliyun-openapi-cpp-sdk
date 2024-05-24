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

#include <alibabacloud/dds/model/DescribeClusterBackupsRequest.h>

using AlibabaCloud::Dds::Model::DescribeClusterBackupsRequest;

DescribeClusterBackupsRequest::DescribeClusterBackupsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeClusterBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterBackupsRequest::~DescribeClusterBackupsRequest() {}

long DescribeClusterBackupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeClusterBackupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeClusterBackupsRequest::getStartTime() const {
  return startTime_;
}

void DescribeClusterBackupsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeClusterBackupsRequest::getSrcRegion() const {
  return srcRegion_;
}

void DescribeClusterBackupsRequest::setSrcRegion(const std::string &srcRegion) {
  srcRegion_ = srcRegion;
  setParameter(std::string("SrcRegion"), srcRegion);
}

std::string DescribeClusterBackupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClusterBackupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeClusterBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeClusterBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeClusterBackupsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeClusterBackupsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeClusterBackupsRequest::getDestRegion() const {
  return destRegion_;
}

void DescribeClusterBackupsRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
}

std::string DescribeClusterBackupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeClusterBackupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeClusterBackupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeClusterBackupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeClusterBackupsRequest::getBackupId() const {
  return backupId_;
}

void DescribeClusterBackupsRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string DescribeClusterBackupsRequest::getEndTime() const {
  return endTime_;
}

void DescribeClusterBackupsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeClusterBackupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeClusterBackupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DescribeClusterBackupsRequest::getIsOnlyGetClusterBackUp() const {
  return isOnlyGetClusterBackUp_;
}

void DescribeClusterBackupsRequest::setIsOnlyGetClusterBackUp(bool isOnlyGetClusterBackUp) {
  isOnlyGetClusterBackUp_ = isOnlyGetClusterBackUp;
  setParameter(std::string("IsOnlyGetClusterBackUp"), isOnlyGetClusterBackUp ? "true" : "false");
}

int DescribeClusterBackupsRequest::getPageNo() const {
  return pageNo_;
}

void DescribeClusterBackupsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

