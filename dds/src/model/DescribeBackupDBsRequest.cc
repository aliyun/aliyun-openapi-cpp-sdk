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

#include <alibabacloud/dds/model/DescribeBackupDBsRequest.h>

using AlibabaCloud::Dds::Model::DescribeBackupDBsRequest;

DescribeBackupDBsRequest::DescribeBackupDBsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeBackupDBs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupDBsRequest::~DescribeBackupDBsRequest() {}

long DescribeBackupDBsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupDBsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeBackupDBsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBackupDBsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBackupDBsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupDBsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackupDBsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeBackupDBsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeBackupDBsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupDBsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackupDBsRequest::getRestoreTime() const {
  return restoreTime_;
}

void DescribeBackupDBsRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string DescribeBackupDBsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBackupDBsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBackupDBsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBackupDBsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeBackupDBsRequest::getBackupId() const {
  return backupId_;
}

void DescribeBackupDBsRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string DescribeBackupDBsRequest::getSourceDBInstance() const {
  return sourceDBInstance_;
}

void DescribeBackupDBsRequest::setSourceDBInstance(const std::string &sourceDBInstance) {
  sourceDBInstance_ = sourceDBInstance;
  setParameter(std::string("SourceDBInstance"), sourceDBInstance);
}

long DescribeBackupDBsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupDBsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

