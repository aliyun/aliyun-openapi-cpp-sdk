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

#include <alibabacloud/adb/model/ResetAccountPasswordRequest.h>

using AlibabaCloud::Adb::Model::ResetAccountPasswordRequest;

ResetAccountPasswordRequest::ResetAccountPasswordRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ResetAccountPassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetAccountPasswordRequest::~ResetAccountPasswordRequest() {}

long ResetAccountPasswordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetAccountPasswordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetAccountPasswordRequest::getAccountType() const {
  return accountType_;
}

void ResetAccountPasswordRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string ResetAccountPasswordRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetAccountPasswordRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResetAccountPasswordRequest::getAccountName() const {
  return accountName_;
}

void ResetAccountPasswordRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ResetAccountPasswordRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetAccountPasswordRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetAccountPasswordRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ResetAccountPasswordRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ResetAccountPasswordRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetAccountPasswordRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetAccountPasswordRequest::getOwnerId() const {
  return ownerId_;
}

void ResetAccountPasswordRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResetAccountPasswordRequest::getAccountPassword() const {
  return accountPassword_;
}

void ResetAccountPasswordRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

