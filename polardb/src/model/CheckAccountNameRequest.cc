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

#include <alibabacloud/polardb/model/CheckAccountNameRequest.h>

using AlibabaCloud::Polardb::Model::CheckAccountNameRequest;

CheckAccountNameRequest::CheckAccountNameRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CheckAccountName") {
  setMethod(HttpRequest::Method::Post);
}

CheckAccountNameRequest::~CheckAccountNameRequest() {}

long CheckAccountNameRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckAccountNameRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckAccountNameRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckAccountNameRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckAccountNameRequest::getAccountName() const {
  return accountName_;
}

void CheckAccountNameRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CheckAccountNameRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckAccountNameRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckAccountNameRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CheckAccountNameRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CheckAccountNameRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckAccountNameRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckAccountNameRequest::getOwnerId() const {
  return ownerId_;
}

void CheckAccountNameRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

