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

#include <alibabacloud/rds/model/UpdateUserBackupFileRequest.h>

using AlibabaCloud::Rds::Model::UpdateUserBackupFileRequest;

UpdateUserBackupFileRequest::UpdateUserBackupFileRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UpdateUserBackupFile") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserBackupFileRequest::~UpdateUserBackupFileRequest() {}

long UpdateUserBackupFileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateUserBackupFileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateUserBackupFileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateUserBackupFileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateUserBackupFileRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateUserBackupFileRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateUserBackupFileRequest::getRegionId() const {
  return regionId_;
}

void UpdateUserBackupFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateUserBackupFileRequest::getRetention() const {
  return retention_;
}

void UpdateUserBackupFileRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string UpdateUserBackupFileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateUserBackupFileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateUserBackupFileRequest::getBackupId() const {
  return backupId_;
}

void UpdateUserBackupFileRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long UpdateUserBackupFileRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateUserBackupFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateUserBackupFileRequest::getOpsServiceVersion() const {
  return opsServiceVersion_;
}

void UpdateUserBackupFileRequest::setOpsServiceVersion(const std::string &opsServiceVersion) {
  opsServiceVersion_ = opsServiceVersion;
  setParameter(std::string("OpsServiceVersion"), opsServiceVersion);
}

std::string UpdateUserBackupFileRequest::getComment() const {
  return comment_;
}

void UpdateUserBackupFileRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

