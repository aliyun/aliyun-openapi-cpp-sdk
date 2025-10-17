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

#include <alibabacloud/polardb/model/AbortDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::AbortDBClusterMigrationRequest;

AbortDBClusterMigrationRequest::AbortDBClusterMigrationRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "AbortDBClusterMigration") {
  setMethod(HttpRequest::Method::Post);
}

AbortDBClusterMigrationRequest::~AbortDBClusterMigrationRequest() {}

long AbortDBClusterMigrationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AbortDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AbortDBClusterMigrationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AbortDBClusterMigrationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AbortDBClusterMigrationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AbortDBClusterMigrationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AbortDBClusterMigrationRequest::getSecurityToken() const {
  return securityToken_;
}

void AbortDBClusterMigrationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AbortDBClusterMigrationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AbortDBClusterMigrationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AbortDBClusterMigrationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void AbortDBClusterMigrationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string AbortDBClusterMigrationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AbortDBClusterMigrationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AbortDBClusterMigrationRequest::getOwnerId() const {
  return ownerId_;
}

void AbortDBClusterMigrationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

