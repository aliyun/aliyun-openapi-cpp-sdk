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

#include <alibabacloud/rds/model/ModifyAccountMaskingPrivilegeRequest.h>

using AlibabaCloud::Rds::Model::ModifyAccountMaskingPrivilegeRequest;

ModifyAccountMaskingPrivilegeRequest::ModifyAccountMaskingPrivilegeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyAccountMaskingPrivilege") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountMaskingPrivilegeRequest::~ModifyAccountMaskingPrivilegeRequest() {}

std::string ModifyAccountMaskingPrivilegeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyAccountMaskingPrivilegeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long ModifyAccountMaskingPrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountMaskingPrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountMaskingPrivilegeRequest::getPrivilege() const {
  return privilege_;
}

void ModifyAccountMaskingPrivilegeRequest::setPrivilege(const std::string &privilege) {
  privilege_ = privilege;
  setParameter(std::string("Privilege"), privilege);
}

std::string ModifyAccountMaskingPrivilegeRequest::getRegionId() const {
  return regionId_;
}

void ModifyAccountMaskingPrivilegeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAccountMaskingPrivilegeRequest::getExpireTime() const {
  return expireTime_;
}

void ModifyAccountMaskingPrivilegeRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), expireTime);
}

std::string ModifyAccountMaskingPrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountMaskingPrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountMaskingPrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountMaskingPrivilegeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyAccountMaskingPrivilegeRequest::getDBName() const {
  return dBName_;
}

void ModifyAccountMaskingPrivilegeRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string ModifyAccountMaskingPrivilegeRequest::getUserName() const {
  return userName_;
}

void ModifyAccountMaskingPrivilegeRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

