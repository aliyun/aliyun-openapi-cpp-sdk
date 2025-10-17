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

#include <alibabacloud/polardb/model/GenerateUpgradeReportForSyncCloneRequest.h>

using AlibabaCloud::Polardb::Model::GenerateUpgradeReportForSyncCloneRequest;

GenerateUpgradeReportForSyncCloneRequest::GenerateUpgradeReportForSyncCloneRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "GenerateUpgradeReportForSyncClone") {
  setMethod(HttpRequest::Method::Post);
}

GenerateUpgradeReportForSyncCloneRequest::~GenerateUpgradeReportForSyncCloneRequest() {}

long GenerateUpgradeReportForSyncCloneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GenerateUpgradeReportForSyncCloneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GenerateUpgradeReportForSyncCloneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GenerateUpgradeReportForSyncCloneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getCreationCategory() const {
  return creationCategory_;
}

void GenerateUpgradeReportForSyncCloneRequest::setCreationCategory(const std::string &creationCategory) {
  creationCategory_ = creationCategory;
  setParameter(std::string("CreationCategory"), creationCategory);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getSourceDBClusterId() const {
  return sourceDBClusterId_;
}

void GenerateUpgradeReportForSyncCloneRequest::setSourceDBClusterId(const std::string &sourceDBClusterId) {
  sourceDBClusterId_ = sourceDBClusterId;
  setParameter(std::string("SourceDBClusterId"), sourceDBClusterId);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getRegionId() const {
  return regionId_;
}

void GenerateUpgradeReportForSyncCloneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getReserve() const {
  return reserve_;
}

void GenerateUpgradeReportForSyncCloneRequest::setReserve(const std::string &reserve) {
  reserve_ = reserve;
  setParameter(std::string("Reserve"), reserve);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getCreationOption() const {
  return creationOption_;
}

void GenerateUpgradeReportForSyncCloneRequest::setCreationOption(const std::string &creationOption) {
  creationOption_ = creationOption;
  setParameter(std::string("CreationOption"), creationOption);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GenerateUpgradeReportForSyncCloneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GenerateUpgradeReportForSyncCloneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GenerateUpgradeReportForSyncCloneRequest::getOwnerId() const {
  return ownerId_;
}

void GenerateUpgradeReportForSyncCloneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GenerateUpgradeReportForSyncCloneRequest::getDBName() const {
  return dBName_;
}

void GenerateUpgradeReportForSyncCloneRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getDBType() const {
  return dBType_;
}

void GenerateUpgradeReportForSyncCloneRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string GenerateUpgradeReportForSyncCloneRequest::getDBVersion() const {
  return dBVersion_;
}

void GenerateUpgradeReportForSyncCloneRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

