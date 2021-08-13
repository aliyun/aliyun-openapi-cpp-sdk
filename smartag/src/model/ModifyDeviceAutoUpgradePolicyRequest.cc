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

#include <alibabacloud/smartag/model/ModifyDeviceAutoUpgradePolicyRequest.h>

using AlibabaCloud::Smartag::Model::ModifyDeviceAutoUpgradePolicyRequest;

ModifyDeviceAutoUpgradePolicyRequest::ModifyDeviceAutoUpgradePolicyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyDeviceAutoUpgradePolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDeviceAutoUpgradePolicyRequest::~ModifyDeviceAutoUpgradePolicyRequest() {}

long ModifyDeviceAutoUpgradePolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getCronExpression() const {
  return cronExpression_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getTimeZone() const {
  return timeZone_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setParameter(std::string("TimeZone"), timeZone);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getUpgradeType() const {
  return upgradeType_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setUpgradeType(const std::string &upgradeType) {
  upgradeType_ = upgradeType;
  setParameter(std::string("UpgradeType"), upgradeType);
}

int ModifyDeviceAutoUpgradePolicyRequest::getDuration() const {
  return duration_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getSerialNumber() const {
  return serialNumber_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDeviceAutoUpgradePolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getVersionType() const {
  return versionType_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setVersionType(const std::string &versionType) {
  versionType_ = versionType;
  setParameter(std::string("VersionType"), versionType);
}

std::string ModifyDeviceAutoUpgradePolicyRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifyDeviceAutoUpgradePolicyRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

