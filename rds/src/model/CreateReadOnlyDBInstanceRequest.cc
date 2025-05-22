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

#include <alibabacloud/rds/model/CreateReadOnlyDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateReadOnlyDBInstanceRequest;

CreateReadOnlyDBInstanceRequest::CreateReadOnlyDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateReadOnlyDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateReadOnlyDBInstanceRequest::~CreateReadOnlyDBInstanceRequest() {}

long CreateReadOnlyDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateReadOnlyDBInstanceRequest::getDBInstanceStorage() const {
  return dBInstanceStorage_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage) {
  dBInstanceStorage_ = dBInstanceStorage;
  setParameter(std::string("DBInstanceStorage"), std::to_string(dBInstanceStorage));
}

bool CreateReadOnlyDBInstanceRequest::getAutoCreateProxy() const {
  return autoCreateProxy_;
}

void CreateReadOnlyDBInstanceRequest::setAutoCreateProxy(bool autoCreateProxy) {
  autoCreateProxy_ = autoCreateProxy;
  setParameter(std::string("AutoCreateProxy"), autoCreateProxy ? "true" : "false");
}

std::string CreateReadOnlyDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateReadOnlyDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

bool CreateReadOnlyDBInstanceRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void CreateReadOnlyDBInstanceRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string CreateReadOnlyDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateReadOnlyDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateReadOnlyDBInstanceRequest::getTargetDedicatedHostIdForMaster() const {
  return targetDedicatedHostIdForMaster_;
}

void CreateReadOnlyDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string &targetDedicatedHostIdForMaster) {
  targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
  setParameter(std::string("TargetDedicatedHostIdForMaster"), targetDedicatedHostIdForMaster);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string CreateReadOnlyDBInstanceRequest::getGdnInstanceName() const {
  return gdnInstanceName_;
}

void CreateReadOnlyDBInstanceRequest::setGdnInstanceName(const std::string &gdnInstanceName) {
  gdnInstanceName_ = gdnInstanceName;
  setParameter(std::string("GdnInstanceName"), gdnInstanceName);
}

std::string CreateReadOnlyDBInstanceRequest::getTddlBizType() const {
  return tddlBizType_;
}

void CreateReadOnlyDBInstanceRequest::setTddlBizType(const std::string &tddlBizType) {
  tddlBizType_ = tddlBizType;
  setParameter(std::string("TddlBizType"), tddlBizType);
}

std::string CreateReadOnlyDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateReadOnlyDBInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

long CreateReadOnlyDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string CreateReadOnlyDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateReadOnlyDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateReadOnlyDBInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateReadOnlyDBInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateReadOnlyDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateReadOnlyDBInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateReadOnlyDBInstanceRequest::getPort() const {
  return port_;
}

void CreateReadOnlyDBInstanceRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string CreateReadOnlyDBInstanceRequest::getPromotionCode() const {
  return promotionCode_;
}

void CreateReadOnlyDBInstanceRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string CreateReadOnlyDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateReadOnlyDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateReadOnlyDBInstanceRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void CreateReadOnlyDBInstanceRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

std::string CreateReadOnlyDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateReadOnlyDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateReadOnlyDBInstanceRequest::getInstructionSetArch() const {
  return instructionSetArch_;
}

void CreateReadOnlyDBInstanceRequest::setInstructionSetArch(const std::string &instructionSetArch) {
  instructionSetArch_ = instructionSetArch;
  setParameter(std::string("InstructionSetArch"), instructionSetArch);
}

bool CreateReadOnlyDBInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateReadOnlyDBInstanceRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string CreateReadOnlyDBInstanceRequest::getIoAccelerationEnabled() const {
  return ioAccelerationEnabled_;
}

void CreateReadOnlyDBInstanceRequest::setIoAccelerationEnabled(const std::string &ioAccelerationEnabled) {
  ioAccelerationEnabled_ = ioAccelerationEnabled;
  setParameter(std::string("IoAccelerationEnabled"), ioAccelerationEnabled);
}

std::string CreateReadOnlyDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateReadOnlyDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateReadOnlyDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateReadOnlyDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateReadOnlyDBInstanceRequest::getTddlRegionConfig() const {
  return tddlRegionConfig_;
}

void CreateReadOnlyDBInstanceRequest::setTddlRegionConfig(const std::string &tddlRegionConfig) {
  tddlRegionConfig_ = tddlRegionConfig;
  setParameter(std::string("TddlRegionConfig"), tddlRegionConfig);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateReadOnlyDBInstanceRequest::getDBInstanceStorageType() const {
  return dBInstanceStorageType_;
}

void CreateReadOnlyDBInstanceRequest::setDBInstanceStorageType(const std::string &dBInstanceStorageType) {
  dBInstanceStorageType_ = dBInstanceStorageType;
  setParameter(std::string("DBInstanceStorageType"), dBInstanceStorageType);
}

std::string CreateReadOnlyDBInstanceRequest::getDedicatedHostGroupId() const {
  return dedicatedHostGroupId_;
}

void CreateReadOnlyDBInstanceRequest::setDedicatedHostGroupId(const std::string &dedicatedHostGroupId) {
  dedicatedHostGroupId_ = dedicatedHostGroupId;
  setParameter(std::string("DedicatedHostGroupId"), dedicatedHostGroupId);
}

bool CreateReadOnlyDBInstanceRequest::getAutoPay() const {
  return autoPay_;
}

void CreateReadOnlyDBInstanceRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateReadOnlyDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateReadOnlyDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateReadOnlyDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateReadOnlyDBInstanceRequest::getUsedTime() const {
  return usedTime_;
}

void CreateReadOnlyDBInstanceRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

bool CreateReadOnlyDBInstanceRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void CreateReadOnlyDBInstanceRequest::setBurstingEnabled(bool burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled ? "true" : "false");
}

std::string CreateReadOnlyDBInstanceRequest::getVPCId() const {
  return vPCId_;
}

void CreateReadOnlyDBInstanceRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

std::string CreateReadOnlyDBInstanceRequest::getCategory() const {
  return category_;
}

void CreateReadOnlyDBInstanceRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string CreateReadOnlyDBInstanceRequest::getPayType() const {
  return payType_;
}

void CreateReadOnlyDBInstanceRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string CreateReadOnlyDBInstanceRequest::getBpeEnabled() const {
  return bpeEnabled_;
}

void CreateReadOnlyDBInstanceRequest::setBpeEnabled(const std::string &bpeEnabled) {
  bpeEnabled_ = bpeEnabled;
  setParameter(std::string("BpeEnabled"), bpeEnabled);
}

