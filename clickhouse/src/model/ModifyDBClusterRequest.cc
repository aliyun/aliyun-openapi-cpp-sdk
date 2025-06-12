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

#include <alibabacloud/clickhouse/model/ModifyDBClusterRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyDBClusterRequest;

ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

long ModifyDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterRequest::getDbNodeStorageType() const {
  return dbNodeStorageType_;
}

void ModifyDBClusterRequest::setDbNodeStorageType(const std::string &dbNodeStorageType) {
  dbNodeStorageType_ = dbNodeStorageType;
  setParameter(std::string("DbNodeStorageType"), dbNodeStorageType);
}

std::string ModifyDBClusterRequest::getDisableWriteWindows() const {
  return disableWriteWindows_;
}

void ModifyDBClusterRequest::setDisableWriteWindows(const std::string &disableWriteWindows) {
  disableWriteWindows_ = disableWriteWindows;
  setParameter(std::string("DisableWriteWindows"), disableWriteWindows);
}

std::string ModifyDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterRequest::getDBClusterClass() const {
  return dBClusterClass_;
}

void ModifyDBClusterRequest::setDBClusterClass(const std::string &dBClusterClass) {
  dBClusterClass_ = dBClusterClass;
  setParameter(std::string("DBClusterClass"), dBClusterClass);
}

long ModifyDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterRequest::getDBNodeGroupCount() const {
  return dBNodeGroupCount_;
}

void ModifyDBClusterRequest::setDBNodeGroupCount(const std::string &dBNodeGroupCount) {
  dBNodeGroupCount_ = dBNodeGroupCount;
  setParameter(std::string("DBNodeGroupCount"), dBNodeGroupCount);
}

std::string ModifyDBClusterRequest::getDBNodeStorage() const {
  return dBNodeStorage_;
}

void ModifyDBClusterRequest::setDBNodeStorage(const std::string &dBNodeStorage) {
  dBNodeStorage_ = dBNodeStorage;
  setParameter(std::string("DBNodeStorage"), dBNodeStorage);
}

