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

#include <alibabacloud/rds/model/DescribeBackupTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeBackupTasksRequest;

DescribeBackupTasksRequest::DescribeBackupTasksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeBackupTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupTasksRequest::~DescribeBackupTasksRequest() {}

int DescribeBackupTasksRequest::getBackupJobId() const {
  return backupJobId_;
}

void DescribeBackupTasksRequest::setBackupJobId(int backupJobId) {
  backupJobId_ = backupJobId;
  setParameter(std::string("BackupJobId"), std::to_string(backupJobId));
}

long DescribeBackupTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupTasksRequest::getFlag() const {
  return flag_;
}

void DescribeBackupTasksRequest::setFlag(const std::string &flag) {
  flag_ = flag;
  setParameter(std::string("Flag"), flag);
}

std::string DescribeBackupTasksRequest::getClientToken() const {
  return clientToken_;
}

void DescribeBackupTasksRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeBackupTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackupTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeBackupTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeBackupTasksRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeBackupTasksRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeBackupTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBackupTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBackupTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBackupTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeBackupTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeBackupTasksRequest::getBackupJobStatus() const {
  return backupJobStatus_;
}

void DescribeBackupTasksRequest::setBackupJobStatus(const std::string &backupJobStatus) {
  backupJobStatus_ = backupJobStatus;
  setParameter(std::string("BackupJobStatus"), backupJobStatus);
}

std::string DescribeBackupTasksRequest::getBackupMode() const {
  return backupMode_;
}

void DescribeBackupTasksRequest::setBackupMode(const std::string &backupMode) {
  backupMode_ = backupMode;
  setParameter(std::string("BackupMode"), backupMode);
}

