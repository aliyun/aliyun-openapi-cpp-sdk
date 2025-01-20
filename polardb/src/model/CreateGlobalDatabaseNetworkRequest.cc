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

#include <alibabacloud/polardb/model/CreateGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::CreateGlobalDatabaseNetworkRequest;

CreateGlobalDatabaseNetworkRequest::CreateGlobalDatabaseNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateGlobalDatabaseNetwork") {
  setMethod(HttpRequest::Method::Post);
}

CreateGlobalDatabaseNetworkRequest::~CreateGlobalDatabaseNetworkRequest() {}

long CreateGlobalDatabaseNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateGlobalDatabaseNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateGlobalDatabaseNetworkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateGlobalDatabaseNetworkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateGlobalDatabaseNetworkRequest::getAccountName() const {
  return accountName_;
}

void CreateGlobalDatabaseNetworkRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateGlobalDatabaseNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateGlobalDatabaseNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateGlobalDatabaseNetworkRequest::getGDNDescription() const {
  return gDNDescription_;
}

void CreateGlobalDatabaseNetworkRequest::setGDNDescription(const std::string &gDNDescription) {
  gDNDescription_ = gDNDescription;
  setParameter(std::string("GDNDescription"), gDNDescription);
}

std::string CreateGlobalDatabaseNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateGlobalDatabaseNetworkRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateGlobalDatabaseNetworkRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateGlobalDatabaseNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool CreateGlobalDatabaseNetworkRequest::getEnableGlobalDomainName() const {
  return enableGlobalDomainName_;
}

void CreateGlobalDatabaseNetworkRequest::setEnableGlobalDomainName(bool enableGlobalDomainName) {
  enableGlobalDomainName_ = enableGlobalDomainName;
  setParameter(std::string("EnableGlobalDomainName"), enableGlobalDomainName ? "true" : "false");
}

long CreateGlobalDatabaseNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void CreateGlobalDatabaseNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateGlobalDatabaseNetworkRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateGlobalDatabaseNetworkRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateGlobalDatabaseNetworkRequest::getDBName() const {
  return dBName_;
}

void CreateGlobalDatabaseNetworkRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

