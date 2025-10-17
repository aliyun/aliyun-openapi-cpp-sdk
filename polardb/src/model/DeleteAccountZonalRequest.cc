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

#include <alibabacloud/polardb/model/DeleteAccountZonalRequest.h>

using AlibabaCloud::Polardb::Model::DeleteAccountZonalRequest;

DeleteAccountZonalRequest::DeleteAccountZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteAccountZonal") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccountZonalRequest::~DeleteAccountZonalRequest() {}

long DeleteAccountZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAccountZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAccountZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteAccountZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteAccountZonalRequest::getAccountName() const {
  return accountName_;
}

void DeleteAccountZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DeleteAccountZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAccountZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteAccountZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteAccountZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteAccountZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteAccountZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteAccountZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAccountZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

