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

#include <alibabacloud/adb/model/DeleteAccountRequest.h>

using AlibabaCloud::Adb::Model::DeleteAccountRequest;

DeleteAccountRequest::DeleteAccountRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DeleteAccount") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccountRequest::~DeleteAccountRequest() {}

long DeleteAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAccountRequest::getAccountType() const {
  return accountType_;
}

void DeleteAccountRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string DeleteAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteAccountRequest::getAccountName() const {
  return accountName_;
}

void DeleteAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DeleteAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteAccountRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteAccountRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteAccountRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteAccountRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteAccountRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

