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

#include <alibabacloud/polardb/model/CheckAccountNameZonalRequest.h>

using AlibabaCloud::Polardb::Model::CheckAccountNameZonalRequest;

CheckAccountNameZonalRequest::CheckAccountNameZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CheckAccountNameZonal") {
  setMethod(HttpRequest::Method::Post);
}

CheckAccountNameZonalRequest::~CheckAccountNameZonalRequest() {}

long CheckAccountNameZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckAccountNameZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckAccountNameZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckAccountNameZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckAccountNameZonalRequest::getAccountName() const {
  return accountName_;
}

void CheckAccountNameZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CheckAccountNameZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckAccountNameZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckAccountNameZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CheckAccountNameZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CheckAccountNameZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckAccountNameZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckAccountNameZonalRequest::getOwnerId() const {
  return ownerId_;
}

void CheckAccountNameZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

