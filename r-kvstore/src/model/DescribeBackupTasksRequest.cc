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

#include <alibabacloud/r-kvstore/model/DescribeBackupTasksRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeBackupTasksRequest;

DescribeBackupTasksRequest::DescribeBackupTasksRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeBackupTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupTasksRequest::~DescribeBackupTasksRequest() {}

std::string DescribeBackupTasksRequest::getBackupJobId() const {
  return backupJobId_;
}

void DescribeBackupTasksRequest::setBackupJobId(const std::string &backupJobId) {
  backupJobId_ = backupJobId;
  setParameter(std::string("BackupJobId"), backupJobId);
}

long DescribeBackupTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackupTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeBackupTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
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

std::string DescribeBackupTasksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeBackupTasksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeBackupTasksRequest::getJobMode() const {
  return jobMode_;
}

void DescribeBackupTasksRequest::setJobMode(const std::string &jobMode) {
  jobMode_ = jobMode;
  setParameter(std::string("JobMode"), jobMode);
}

