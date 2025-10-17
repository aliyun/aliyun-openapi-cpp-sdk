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

#include <alibabacloud/polardb/model/ContinueDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::ContinueDBClusterMigrationRequest;

ContinueDBClusterMigrationRequest::ContinueDBClusterMigrationRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ContinueDBClusterMigration") {
  setMethod(HttpRequest::Method::Post);
}

ContinueDBClusterMigrationRequest::~ContinueDBClusterMigrationRequest() {}

long ContinueDBClusterMigrationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ContinueDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ContinueDBClusterMigrationRequest::getForceSwitch() const {
  return forceSwitch_;
}

void ContinueDBClusterMigrationRequest::setForceSwitch(const std::string &forceSwitch) {
  forceSwitch_ = forceSwitch;
  setParameter(std::string("ForceSwitch"), forceSwitch);
}

std::string ContinueDBClusterMigrationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ContinueDBClusterMigrationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ContinueDBClusterMigrationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ContinueDBClusterMigrationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ContinueDBClusterMigrationRequest::getSecurityToken() const {
  return securityToken_;
}

void ContinueDBClusterMigrationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ContinueDBClusterMigrationRequest::getRegionId() const {
  return regionId_;
}

void ContinueDBClusterMigrationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ContinueDBClusterMigrationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ContinueDBClusterMigrationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ContinueDBClusterMigrationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ContinueDBClusterMigrationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ContinueDBClusterMigrationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ContinueDBClusterMigrationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ContinueDBClusterMigrationRequest::getOwnerId() const {
  return ownerId_;
}

void ContinueDBClusterMigrationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

