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

#include <alibabacloud/polardb/model/RevokeAccountPrivilegeZonalRequest.h>

using AlibabaCloud::Polardb::Model::RevokeAccountPrivilegeZonalRequest;

RevokeAccountPrivilegeZonalRequest::RevokeAccountPrivilegeZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RevokeAccountPrivilegeZonal") {
  setMethod(HttpRequest::Method::Post);
}

RevokeAccountPrivilegeZonalRequest::~RevokeAccountPrivilegeZonalRequest() {}

long RevokeAccountPrivilegeZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeAccountPrivilegeZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeAccountPrivilegeZonalRequest::getClientToken() const {
  return clientToken_;
}

void RevokeAccountPrivilegeZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RevokeAccountPrivilegeZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RevokeAccountPrivilegeZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RevokeAccountPrivilegeZonalRequest::getAccountName() const {
  return accountName_;
}

void RevokeAccountPrivilegeZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string RevokeAccountPrivilegeZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeAccountPrivilegeZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeAccountPrivilegeZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RevokeAccountPrivilegeZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RevokeAccountPrivilegeZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeAccountPrivilegeZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RevokeAccountPrivilegeZonalRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeAccountPrivilegeZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeAccountPrivilegeZonalRequest::getDBName() const {
  return dBName_;
}

void RevokeAccountPrivilegeZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

