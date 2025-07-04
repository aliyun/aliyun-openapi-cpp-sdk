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

#include <alibabacloud/rds/model/ImportUserBackupFileRequest.h>

using AlibabaCloud::Rds::Model::ImportUserBackupFileRequest;

ImportUserBackupFileRequest::ImportUserBackupFileRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ImportUserBackupFile") {
  setMethod(HttpRequest::Method::Post);
}

ImportUserBackupFileRequest::~ImportUserBackupFileRequest() {}

long ImportUserBackupFileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportUserBackupFileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportUserBackupFileRequest::getSourceInfo() const {
  return sourceInfo_;
}

void ImportUserBackupFileRequest::setSourceInfo(const std::string &sourceInfo) {
  sourceInfo_ = sourceInfo;
  setParameter(std::string("SourceInfo"), sourceInfo);
}

std::string ImportUserBackupFileRequest::getEngineVersion() const {
  return engineVersion_;
}

void ImportUserBackupFileRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string ImportUserBackupFileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ImportUserBackupFileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ImportUserBackupFileRequest::getMode() const {
  return mode_;
}

void ImportUserBackupFileRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ImportUserBackupFileRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ImportUserBackupFileRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ImportUserBackupFileRequest::getRegionId() const {
  return regionId_;
}

void ImportUserBackupFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ImportUserBackupFileRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ImportUserBackupFileRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int ImportUserBackupFileRequest::getRetention() const {
  return retention_;
}

void ImportUserBackupFileRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string ImportUserBackupFileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportUserBackupFileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportUserBackupFileRequest::getBackupFile() const {
  return backupFile_;
}

void ImportUserBackupFileRequest::setBackupFile(const std::string &backupFile) {
  backupFile_ = backupFile;
  setParameter(std::string("BackupFile"), backupFile);
}

std::string ImportUserBackupFileRequest::getBucketRegion() const {
  return bucketRegion_;
}

void ImportUserBackupFileRequest::setBucketRegion(const std::string &bucketRegion) {
  bucketRegion_ = bucketRegion;
  setParameter(std::string("BucketRegion"), bucketRegion);
}

long ImportUserBackupFileRequest::getOwnerId() const {
  return ownerId_;
}

void ImportUserBackupFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ImportUserBackupFileRequest::getMasterInfo() const {
  return masterInfo_;
}

void ImportUserBackupFileRequest::setMasterInfo(const std::string &masterInfo) {
  masterInfo_ = masterInfo;
  setParameter(std::string("MasterInfo"), masterInfo);
}

bool ImportUserBackupFileRequest::getBuildReplication() const {
  return buildReplication_;
}

void ImportUserBackupFileRequest::setBuildReplication(bool buildReplication) {
  buildReplication_ = buildReplication;
  setParameter(std::string("BuildReplication"), buildReplication ? "true" : "false");
}

int ImportUserBackupFileRequest::getRestoreSize() const {
  return restoreSize_;
}

void ImportUserBackupFileRequest::setRestoreSize(int restoreSize) {
  restoreSize_ = restoreSize;
  setParameter(std::string("RestoreSize"), std::to_string(restoreSize));
}

std::string ImportUserBackupFileRequest::getZoneId() const {
  return zoneId_;
}

void ImportUserBackupFileRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ImportUserBackupFileRequest::getComment() const {
  return comment_;
}

void ImportUserBackupFileRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

