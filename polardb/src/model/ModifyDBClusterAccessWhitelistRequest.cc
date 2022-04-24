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

#include <alibabacloud/polardb/model/ModifyDBClusterAccessWhitelistRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterAccessWhitelistRequest;

ModifyDBClusterAccessWhitelistRequest::ModifyDBClusterAccessWhitelistRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterAccessWhitelist") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterAccessWhitelistRequest::~ModifyDBClusterAccessWhitelistRequest() {}

long ModifyDBClusterAccessWhitelistRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterAccessWhitelistRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterAccessWhitelistRequest::getSecurityIps() const {
  return securityIps_;
}

void ModifyDBClusterAccessWhitelistRequest::setSecurityIps(const std::string &securityIps) {
  securityIps_ = securityIps;
  setParameter(std::string("SecurityIps"), securityIps);
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterIPArrayAttribute() const {
  return dBClusterIPArrayAttribute_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterIPArrayAttribute(const std::string &dBClusterIPArrayAttribute) {
  dBClusterIPArrayAttribute_ = dBClusterIPArrayAttribute;
  setParameter(std::string("DBClusterIPArrayAttribute"), dBClusterIPArrayAttribute);
}

std::string ModifyDBClusterAccessWhitelistRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterAccessWhitelistRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterAccessWhitelistRequest::getModifyMode() const {
  return modifyMode_;
}

void ModifyDBClusterAccessWhitelistRequest::setModifyMode(const std::string &modifyMode) {
  modifyMode_ = modifyMode;
  setParameter(std::string("ModifyMode"), modifyMode);
}

std::string ModifyDBClusterAccessWhitelistRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterAccessWhitelistRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterAccessWhitelistRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterAccessWhitelistRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterAccessWhitelistRequest::getWhiteListType() const {
  return whiteListType_;
}

void ModifyDBClusterAccessWhitelistRequest::setWhiteListType(const std::string &whiteListType) {
  whiteListType_ = whiteListType;
  setParameter(std::string("WhiteListType"), whiteListType);
}

long ModifyDBClusterAccessWhitelistRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterAccessWhitelistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterAccessWhitelistRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void ModifyDBClusterAccessWhitelistRequest::setSecurityGroupIds(const std::string &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
  setParameter(std::string("SecurityGroupIds"), securityGroupIds);
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterIPArrayName() const {
  return dBClusterIPArrayName_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterIPArrayName(const std::string &dBClusterIPArrayName) {
  dBClusterIPArrayName_ = dBClusterIPArrayName;
  setParameter(std::string("DBClusterIPArrayName"), dBClusterIPArrayName);
}

