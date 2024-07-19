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

#include <alibabacloud/r-kvstore/model/ModifyDBInstanceAutoUpgradeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyDBInstanceAutoUpgradeRequest;

ModifyDBInstanceAutoUpgradeRequest::ModifyDBInstanceAutoUpgradeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyDBInstanceAutoUpgrade") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceAutoUpgradeRequest::~ModifyDBInstanceAutoUpgradeRequest() {}

long ModifyDBInstanceAutoUpgradeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceAutoUpgradeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceAutoUpgradeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceAutoUpgradeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceAutoUpgradeRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDBInstanceAutoUpgradeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDBInstanceAutoUpgradeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceAutoUpgradeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceAutoUpgradeRequest::getValue() const {
  return value_;
}

void ModifyDBInstanceAutoUpgradeRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string ModifyDBInstanceAutoUpgradeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceAutoUpgradeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceAutoUpgradeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceAutoUpgradeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstanceAutoUpgradeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceAutoUpgradeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

