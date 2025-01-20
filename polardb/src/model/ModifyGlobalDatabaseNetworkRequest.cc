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

#include <alibabacloud/polardb/model/ModifyGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::ModifyGlobalDatabaseNetworkRequest;

ModifyGlobalDatabaseNetworkRequest::ModifyGlobalDatabaseNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyGlobalDatabaseNetwork") {
  setMethod(HttpRequest::Method::Post);
}

ModifyGlobalDatabaseNetworkRequest::~ModifyGlobalDatabaseNetworkRequest() {}

long ModifyGlobalDatabaseNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyGlobalDatabaseNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyGlobalDatabaseNetworkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyGlobalDatabaseNetworkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyGlobalDatabaseNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyGlobalDatabaseNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyGlobalDatabaseNetworkRequest::getGDNId() const {
  return gDNId_;
}

void ModifyGlobalDatabaseNetworkRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string ModifyGlobalDatabaseNetworkRequest::getGDNDescription() const {
  return gDNDescription_;
}

void ModifyGlobalDatabaseNetworkRequest::setGDNDescription(const std::string &gDNDescription) {
  gDNDescription_ = gDNDescription;
  setParameter(std::string("GDNDescription"), gDNDescription);
}

std::string ModifyGlobalDatabaseNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyGlobalDatabaseNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool ModifyGlobalDatabaseNetworkRequest::getEnableGlobalDomainName() const {
  return enableGlobalDomainName_;
}

void ModifyGlobalDatabaseNetworkRequest::setEnableGlobalDomainName(bool enableGlobalDomainName) {
  enableGlobalDomainName_ = enableGlobalDomainName;
  setParameter(std::string("EnableGlobalDomainName"), enableGlobalDomainName ? "true" : "false");
}

long ModifyGlobalDatabaseNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyGlobalDatabaseNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

