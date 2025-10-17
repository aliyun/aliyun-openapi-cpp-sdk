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

#include <alibabacloud/polardb/model/GrantAccountPrivilegeZonalRequest.h>

using AlibabaCloud::Polardb::Model::GrantAccountPrivilegeZonalRequest;

GrantAccountPrivilegeZonalRequest::GrantAccountPrivilegeZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "GrantAccountPrivilegeZonal") {
  setMethod(HttpRequest::Method::Post);
}

GrantAccountPrivilegeZonalRequest::~GrantAccountPrivilegeZonalRequest() {}

long GrantAccountPrivilegeZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GrantAccountPrivilegeZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GrantAccountPrivilegeZonalRequest::getClientToken() const {
  return clientToken_;
}

void GrantAccountPrivilegeZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GrantAccountPrivilegeZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GrantAccountPrivilegeZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GrantAccountPrivilegeZonalRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void GrantAccountPrivilegeZonalRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string GrantAccountPrivilegeZonalRequest::getAccountName() const {
  return accountName_;
}

void GrantAccountPrivilegeZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string GrantAccountPrivilegeZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GrantAccountPrivilegeZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GrantAccountPrivilegeZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GrantAccountPrivilegeZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GrantAccountPrivilegeZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GrantAccountPrivilegeZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GrantAccountPrivilegeZonalRequest::getOwnerId() const {
  return ownerId_;
}

void GrantAccountPrivilegeZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantAccountPrivilegeZonalRequest::getDBName() const {
  return dBName_;
}

void GrantAccountPrivilegeZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

