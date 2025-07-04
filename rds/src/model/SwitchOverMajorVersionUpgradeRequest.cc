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

#include <alibabacloud/rds/model/SwitchOverMajorVersionUpgradeRequest.h>

using AlibabaCloud::Rds::Model::SwitchOverMajorVersionUpgradeRequest;

SwitchOverMajorVersionUpgradeRequest::SwitchOverMajorVersionUpgradeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SwitchOverMajorVersionUpgrade") {
  setMethod(HttpRequest::Method::Post);
}

SwitchOverMajorVersionUpgradeRequest::~SwitchOverMajorVersionUpgradeRequest() {}

std::string SwitchOverMajorVersionUpgradeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void SwitchOverMajorVersionUpgradeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long SwitchOverMajorVersionUpgradeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchOverMajorVersionUpgradeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchOverMajorVersionUpgradeRequest::getClientToken() const {
  return clientToken_;
}

void SwitchOverMajorVersionUpgradeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SwitchOverMajorVersionUpgradeRequest::getType() const {
  return type_;
}

void SwitchOverMajorVersionUpgradeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string SwitchOverMajorVersionUpgradeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchOverMajorVersionUpgradeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchOverMajorVersionUpgradeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SwitchOverMajorVersionUpgradeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SwitchOverMajorVersionUpgradeRequest::getRegionId() const {
  return regionId_;
}

void SwitchOverMajorVersionUpgradeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchOverMajorVersionUpgradeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchOverMajorVersionUpgradeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchOverMajorVersionUpgradeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchOverMajorVersionUpgradeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchOverMajorVersionUpgradeRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchOverMajorVersionUpgradeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int SwitchOverMajorVersionUpgradeRequest::getSwitchoverTimeout() const {
  return switchoverTimeout_;
}

void SwitchOverMajorVersionUpgradeRequest::setSwitchoverTimeout(int switchoverTimeout) {
  switchoverTimeout_ = switchoverTimeout;
  setParameter(std::string("SwitchoverTimeout"), std::to_string(switchoverTimeout));
}

