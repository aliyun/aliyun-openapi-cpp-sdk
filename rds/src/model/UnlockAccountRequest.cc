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

#include <alibabacloud/rds/model/UnlockAccountRequest.h>

using AlibabaCloud::Rds::Model::UnlockAccountRequest;

UnlockAccountRequest::UnlockAccountRequest()
    : RpcServiceRequest("rds", "2014-08-15", "UnlockAccount") {
  setMethod(HttpRequest::Method::Post);
}

UnlockAccountRequest::~UnlockAccountRequest() {}

long UnlockAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnlockAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnlockAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnlockAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnlockAccountRequest::getAccountName() const {
  return accountName_;
}

void UnlockAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string UnlockAccountRequest::getRegionId() const {
  return regionId_;
}

void UnlockAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnlockAccountRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UnlockAccountRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UnlockAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnlockAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long UnlockAccountRequest::getOwnerId() const {
  return ownerId_;
}

void UnlockAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

