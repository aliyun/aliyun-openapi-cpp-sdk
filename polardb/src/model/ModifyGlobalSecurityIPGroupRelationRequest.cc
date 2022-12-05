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

#include <alibabacloud/polardb/model/ModifyGlobalSecurityIPGroupRelationRequest.h>

using AlibabaCloud::Polardb::Model::ModifyGlobalSecurityIPGroupRelationRequest;

ModifyGlobalSecurityIPGroupRelationRequest::ModifyGlobalSecurityIPGroupRelationRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyGlobalSecurityIPGroupRelation") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGlobalSecurityIPGroupRelationRequest::~ModifyGlobalSecurityIPGroupRelationRequest() {}

long ModifyGlobalSecurityIPGroupRelationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getGlobalSecurityGroupId() const {
  return globalSecurityGroupId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setGlobalSecurityGroupId(const std::string &globalSecurityGroupId) {
  globalSecurityGroupId_ = globalSecurityGroupId;
  setParameter(std::string("GlobalSecurityGroupId"), globalSecurityGroupId);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getRegionId() const {
  return regionId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyGlobalSecurityIPGroupRelationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyGlobalSecurityIPGroupRelationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyGlobalSecurityIPGroupRelationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

