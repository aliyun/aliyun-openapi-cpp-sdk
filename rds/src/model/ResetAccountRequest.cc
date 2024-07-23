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

#include <alibabacloud/rds/model/ResetAccountRequest.h>

using AlibabaCloud::Rds::Model::ResetAccountRequest;

ResetAccountRequest::ResetAccountRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ResetAccount") {
  setMethod(HttpRequest::Method::Post);
}

ResetAccountRequest::~ResetAccountRequest() {}

long ResetAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResetAccountRequest::getAccountName() const {
  return accountName_;
}

void ResetAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ResetAccountRequest::getRegionId() const {
  return regionId_;
}

void ResetAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetAccountRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ResetAccountRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ResetAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetAccountRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetAccountRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetAccountRequest::getOwnerId() const {
  return ownerId_;
}

void ResetAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResetAccountRequest::getAccountPassword() const {
  return accountPassword_;
}

void ResetAccountRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

