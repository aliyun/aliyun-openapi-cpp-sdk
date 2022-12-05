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

#include <alibabacloud/polardb/model/ModifyDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterMigrationRequest;

ModifyDBClusterMigrationRequest::ModifyDBClusterMigrationRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterMigration") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterMigrationRequest::~ModifyDBClusterMigrationRequest() {}

long ModifyDBClusterMigrationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterMigrationRequest::getConnectionStrings() const {
  return connectionStrings_;
}

void ModifyDBClusterMigrationRequest::setConnectionStrings(const std::string &connectionStrings) {
  connectionStrings_ = connectionStrings;
  setParameter(std::string("ConnectionStrings"), connectionStrings);
}

std::string ModifyDBClusterMigrationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterMigrationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterMigrationRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDBClusterMigrationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDBClusterMigrationRequest::getNewMasterInstanceId() const {
  return newMasterInstanceId_;
}

void ModifyDBClusterMigrationRequest::setNewMasterInstanceId(const std::string &newMasterInstanceId) {
  newMasterInstanceId_ = newMasterInstanceId;
  setParameter(std::string("NewMasterInstanceId"), newMasterInstanceId);
}

std::string ModifyDBClusterMigrationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterMigrationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterMigrationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterMigrationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterMigrationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterMigrationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterMigrationRequest::getSourceRDSDBInstanceId() const {
  return sourceRDSDBInstanceId_;
}

void ModifyDBClusterMigrationRequest::setSourceRDSDBInstanceId(const std::string &sourceRDSDBInstanceId) {
  sourceRDSDBInstanceId_ = sourceRDSDBInstanceId;
  setParameter(std::string("SourceRDSDBInstanceId"), sourceRDSDBInstanceId);
}

std::string ModifyDBClusterMigrationRequest::getSwapConnectionString() const {
  return swapConnectionString_;
}

void ModifyDBClusterMigrationRequest::setSwapConnectionString(const std::string &swapConnectionString) {
  swapConnectionString_ = swapConnectionString;
  setParameter(std::string("SwapConnectionString"), swapConnectionString);
}

long ModifyDBClusterMigrationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterMigrationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

