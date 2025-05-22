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

#include <alibabacloud/rds/model/LockAccountRequest.h>

using AlibabaCloud::Rds::Model::LockAccountRequest;

LockAccountRequest::LockAccountRequest()
    : RpcServiceRequest("rds", "2014-08-15", "LockAccount") {
  setMethod(HttpRequest::Method::Post);
}

LockAccountRequest::~LockAccountRequest() {}

long LockAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void LockAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string LockAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void LockAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string LockAccountRequest::getAccountName() const {
  return accountName_;
}

void LockAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string LockAccountRequest::getRegionId() const {
  return regionId_;
}

void LockAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string LockAccountRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void LockAccountRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string LockAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void LockAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long LockAccountRequest::getOwnerId() const {
  return ownerId_;
}

void LockAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

