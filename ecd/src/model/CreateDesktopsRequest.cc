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

#include <alibabacloud/ecd/model/CreateDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::CreateDesktopsRequest;

CreateDesktopsRequest::CreateDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateDesktops") {
  setMethod(HttpRequest::Method::Post);
}

CreateDesktopsRequest::~CreateDesktopsRequest() {}

std::string CreateDesktopsRequest::getVolumeEncryptionKey() const {
  return volumeEncryptionKey_;
}

void CreateDesktopsRequest::setVolumeEncryptionKey(const std::string &volumeEncryptionKey) {
  volumeEncryptionKey_ = volumeEncryptionKey;
  setParameter(std::string("VolumeEncryptionKey"), volumeEncryptionKey);
}

std::string CreateDesktopsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void CreateDesktopsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string CreateDesktopsRequest::getImageId() const {
  return imageId_;
}

void CreateDesktopsRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateDesktopsRequest::getBundleId() const {
  return bundleId_;
}

void CreateDesktopsRequest::setBundleId(const std::string &bundleId) {
  bundleId_ = bundleId;
  setParameter(std::string("BundleId"), bundleId);
}

std::string CreateDesktopsRequest::getUserAssignMode() const {
  return userAssignMode_;
}

void CreateDesktopsRequest::setUserAssignMode(const std::string &userAssignMode) {
  userAssignMode_ = userAssignMode;
  setParameter(std::string("UserAssignMode"), userAssignMode);
}

std::string CreateDesktopsRequest::getHostname() const {
  return hostname_;
}

void CreateDesktopsRequest::setHostname(const std::string &hostname) {
  hostname_ = hostname;
  setParameter(std::string("Hostname"), hostname);
}

std::vector<CreateDesktopsRequest::DesktopTimers> CreateDesktopsRequest::getDesktopTimers() const {
  return desktopTimers_;
}

void CreateDesktopsRequest::setDesktopTimers(const std::vector<CreateDesktopsRequest::DesktopTimers> &desktopTimers) {
  desktopTimers_ = desktopTimers;
  for(int dep1 = 0; dep1 != desktopTimers.size(); dep1++) {
  auto desktopTimersObj = desktopTimers.at(dep1);
  std::string desktopTimersObjStr = std::string("DesktopTimers") + "." + std::to_string(dep1 + 1);
    setParameter(desktopTimersObjStr + ".CronExpression", desktopTimersObj.cronExpression);
    setParameter(desktopTimersObjStr + ".TimerType", desktopTimersObj.timerType);
    setParameter(desktopTimersObjStr + ".AllowClientSetting", desktopTimersObj.allowClientSetting ? "true" : "false");
    setParameter(desktopTimersObjStr + ".ResetType", desktopTimersObj.resetType);
    setParameter(desktopTimersObjStr + ".Enforce", desktopTimersObj.enforce ? "true" : "false");
    setParameter(desktopTimersObjStr + ".Interval", std::to_string(desktopTimersObj.interval));
    setParameter(desktopTimersObjStr + ".OperationType", desktopTimersObj.operationType);
  }
}

std::string CreateDesktopsRequest::getRegionId() const {
  return regionId_;
}

void CreateDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateDesktopsRequest::getDesktopNameSuffix() const {
  return desktopNameSuffix_;
}

void CreateDesktopsRequest::setDesktopNameSuffix(bool desktopNameSuffix) {
  desktopNameSuffix_ = desktopNameSuffix;
  setParameter(std::string("DesktopNameSuffix"), desktopNameSuffix ? "true" : "false");
}

std::string CreateDesktopsRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateDesktopsRequest::setSystemDiskSize(const std::string &systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), systemDiskSize);
}

std::string CreateDesktopsRequest::getDirectoryId() const {
  return directoryId_;
}

void CreateDesktopsRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> CreateDesktopsRequest::getEndUserId() const {
  return endUserId_;
}

void CreateDesktopsRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

std::string CreateDesktopsRequest::getDesktopMemberIp() const {
  return desktopMemberIp_;
}

void CreateDesktopsRequest::setDesktopMemberIp(const std::string &desktopMemberIp) {
  desktopMemberIp_ = desktopMemberIp;
  setParameter(std::string("DesktopMemberIp"), desktopMemberIp);
}

std::vector<CreateDesktopsRequest::Tag> CreateDesktopsRequest::getTag() const {
  return tag_;
}

void CreateDesktopsRequest::setTag(const std::vector<CreateDesktopsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<CreateDesktopsRequest::BundleModels> CreateDesktopsRequest::getBundleModels() const {
  return bundleModels_;
}

void CreateDesktopsRequest::setBundleModels(const std::vector<CreateDesktopsRequest::BundleModels> &bundleModels) {
  bundleModels_ = bundleModels;
  for(int dep1 = 0; dep1 != bundleModels.size(); dep1++) {
  auto bundleModelsObj = bundleModels.at(dep1);
  std::string bundleModelsObjStr = std::string("BundleModels") + "." + std::to_string(dep1 + 1);
    setParameter(bundleModelsObjStr + ".VolumeEncryptionEnabled", bundleModelsObj.volumeEncryptionEnabled ? "true" : "false");
    setParameter(bundleModelsObjStr + ".VolumeEncryptionKey", bundleModelsObj.volumeEncryptionKey);
    setParameter(bundleModelsObjStr + ".Amount", std::to_string(bundleModelsObj.amount));
    setParameter(bundleModelsObjStr + ".DesktopName", bundleModelsObj.desktopName);
    setParameter(bundleModelsObjStr + ".Hostname", bundleModelsObj.hostname);
    setParameter(bundleModelsObjStr + ".BundleId", bundleModelsObj.bundleId);
  }
}

bool CreateDesktopsRequest::getVolumeEncryptionEnabled() const {
  return volumeEncryptionEnabled_;
}

void CreateDesktopsRequest::setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) {
  volumeEncryptionEnabled_ = volumeEncryptionEnabled;
  setParameter(std::string("VolumeEncryptionEnabled"), volumeEncryptionEnabled ? "true" : "false");
}

std::string CreateDesktopsRequest::getDesktopName() const {
  return desktopName_;
}

void CreateDesktopsRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

int CreateDesktopsRequest::getAmount() const {
  return amount_;
}

void CreateDesktopsRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

int CreateDesktopsRequest::getPeriod() const {
  return period_;
}

void CreateDesktopsRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateDesktopsRequest::getAutoPay() const {
  return autoPay_;
}

void CreateDesktopsRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::vector<CreateDesktopsRequest::UserCommands> CreateDesktopsRequest::getUserCommands() const {
  return userCommands_;
}

void CreateDesktopsRequest::setUserCommands(const std::vector<CreateDesktopsRequest::UserCommands> &userCommands) {
  userCommands_ = userCommands;
  for(int dep1 = 0; dep1 != userCommands.size(); dep1++) {
  auto userCommandsObj = userCommands.at(dep1);
  std::string userCommandsObjStr = std::string("UserCommands") + "." + std::to_string(dep1 + 1);
    setParameter(userCommandsObjStr + ".ContentEncoding", userCommandsObj.contentEncoding);
    setParameter(userCommandsObjStr + ".Content", userCommandsObj.content);
    setParameter(userCommandsObjStr + ".ContentType", userCommandsObj.contentType);
  }
}

std::string CreateDesktopsRequest::getGroupId() const {
  return groupId_;
}

void CreateDesktopsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateDesktopsRequest::getEcsInstanceType() const {
  return ecsInstanceType_;
}

void CreateDesktopsRequest::setEcsInstanceType(const std::string &ecsInstanceType) {
  ecsInstanceType_ = ecsInstanceType;
  setParameter(std::string("EcsInstanceType"), ecsInstanceType);
}

std::string CreateDesktopsRequest::getPromotionId() const {
  return promotionId_;
}

void CreateDesktopsRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string CreateDesktopsRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateDesktopsRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

bool CreateDesktopsRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateDesktopsRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateDesktopsRequest::getDataDiskSize() const {
  return dataDiskSize_;
}

void CreateDesktopsRequest::setDataDiskSize(const std::string &dataDiskSize) {
  dataDiskSize_ = dataDiskSize;
  setParameter(std::string("DataDiskSize"), dataDiskSize);
}

std::string CreateDesktopsRequest::getVpcId() const {
  return vpcId_;
}

void CreateDesktopsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateDesktopsRequest::getChargeType() const {
  return chargeType_;
}

void CreateDesktopsRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string CreateDesktopsRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void CreateDesktopsRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

std::string CreateDesktopsRequest::getUserName() const {
  return userName_;
}

void CreateDesktopsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

