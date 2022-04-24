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

#include <alibabacloud/polardb/model/RevokeAccountPrivilegeRequest.h>

using AlibabaCloud::Polardb::Model::RevokeAccountPrivilegeRequest;

RevokeAccountPrivilegeRequest::RevokeAccountPrivilegeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RevokeAccountPrivilege") {
  setMethod(HttpRequest::Method::Post);
}

RevokeAccountPrivilegeRequest::~RevokeAccountPrivilegeRequest() {}

long RevokeAccountPrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeAccountPrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeAccountPrivilegeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RevokeAccountPrivilegeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RevokeAccountPrivilegeRequest::getAccountName() const {
  return accountName_;
}

void RevokeAccountPrivilegeRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string RevokeAccountPrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeAccountPrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeAccountPrivilegeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RevokeAccountPrivilegeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RevokeAccountPrivilegeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeAccountPrivilegeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RevokeAccountPrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeAccountPrivilegeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeAccountPrivilegeRequest::getDBName() const {
  return dBName_;
}

void RevokeAccountPrivilegeRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

