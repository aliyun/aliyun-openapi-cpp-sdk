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

#include <alibabacloud/rds/model/DeleteUserBackupFileRequest.h>

using AlibabaCloud::Rds::Model::DeleteUserBackupFileRequest;

DeleteUserBackupFileRequest::DeleteUserBackupFileRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteUserBackupFile") {
  setMethod(HttpRequest::Method::Post);
}

DeleteUserBackupFileRequest::~DeleteUserBackupFileRequest() {}

long DeleteUserBackupFileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteUserBackupFileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteUserBackupFileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteUserBackupFileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteUserBackupFileRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteUserBackupFileRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteUserBackupFileRequest::getEngine() const {
  return engine_;
}

void DeleteUserBackupFileRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DeleteUserBackupFileRequest::getRegionId() const {
  return regionId_;
}

void DeleteUserBackupFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteUserBackupFileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteUserBackupFileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteUserBackupFileRequest::getBackupId() const {
  return backupId_;
}

void DeleteUserBackupFileRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long DeleteUserBackupFileRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteUserBackupFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteUserBackupFileRequest::getOpsServiceVersion() const {
  return opsServiceVersion_;
}

void DeleteUserBackupFileRequest::setOpsServiceVersion(const std::string &opsServiceVersion) {
  opsServiceVersion_ = opsServiceVersion;
  setParameter(std::string("OpsServiceVersion"), opsServiceVersion);
}

