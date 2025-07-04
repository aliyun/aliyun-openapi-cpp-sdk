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

#include <alibabacloud/rds/model/RunRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::RunRCInstancesRequest;

RunRCInstancesRequest::RunRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RunRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

RunRCInstancesRequest::~RunRCInstancesRequest() {}

std::string RunRCInstancesRequest::getCreateExtraParam() const {
  return createExtraParam_;
}

void RunRCInstancesRequest::setCreateExtraParam(const std::string &createExtraParam) {
  createExtraParam_ = createExtraParam;
  setParameter(std::string("CreateExtraParam"), createExtraParam);
}

std::string RunRCInstancesRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void RunRCInstancesRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string RunRCInstancesRequest::getKeyPairName() const {
  return keyPairName_;
}

void RunRCInstancesRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

bool RunRCInstancesRequest::getDeletionProtection() const {
  return deletionProtection_;
}

void RunRCInstancesRequest::setDeletionProtection(bool deletionProtection) {
  deletionProtection_ = deletionProtection;
  setParameter(std::string("DeletionProtection"), deletionProtection ? "true" : "false");
}

std::string RunRCInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void RunRCInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string RunRCInstancesRequest::getPassword() const {
  return password_;
}

void RunRCInstancesRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string RunRCInstancesRequest::getHostName() const {
  return hostName_;
}

void RunRCInstancesRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

RunRCInstancesRequest::SystemDisk RunRCInstancesRequest::getSystemDisk() const {
  return systemDisk_;
}

void RunRCInstancesRequest::setSystemDisk(const RunRCInstancesRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".Size", std::to_string(systemDisk.size));
  setParameter(std::string("SystemDisk") + ".PerformanceLevel", systemDisk.performanceLevel);
  setParameter(std::string("SystemDisk") + ".Category", systemDisk.category);
}

std::vector<RunRCInstancesRequest::Tag> RunRCInstancesRequest::getTag() const {
  return tag_;
}

void RunRCInstancesRequest::setTag(const std::vector<RunRCInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int RunRCInstancesRequest::getPeriod() const {
  return period_;
}

void RunRCInstancesRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RunRCInstancesRequest::getDryRun() const {
  return dryRun_;
}

void RunRCInstancesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

RunRCInstancesRequest::CreateAckEdgeParam RunRCInstancesRequest::getCreateAckEdgeParam() const {
  return createAckEdgeParam_;
}

void RunRCInstancesRequest::setCreateAckEdgeParam(const RunRCInstancesRequest::CreateAckEdgeParam &createAckEdgeParam) {
  createAckEdgeParam_ = createAckEdgeParam;
  setParameter(std::string("CreateAckEdgeParam") + ".ClusterId", createAckEdgeParam.clusterId);
  setParameter(std::string("CreateAckEdgeParam") + ".NodePoolId", createAckEdgeParam.nodePoolId);
}

std::string RunRCInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void RunRCInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string RunRCInstancesRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void RunRCInstancesRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string RunRCInstancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RunRCInstancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string RunRCInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void RunRCInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool RunRCInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void RunRCInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string RunRCInstancesRequest::getPromotionCode() const {
  return promotionCode_;
}

void RunRCInstancesRequest::setPromotionCode(const std::string &promotionCode) {
  promotionCode_ = promotionCode;
  setParameter(std::string("PromotionCode"), promotionCode);
}

std::string RunRCInstancesRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void RunRCInstancesRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string RunRCInstancesRequest::getCreateMode() const {
  return createMode_;
}

void RunRCInstancesRequest::setCreateMode(const std::string &createMode) {
  createMode_ = createMode;
  setParameter(std::string("CreateMode"), createMode);
}

std::string RunRCInstancesRequest::getZoneId() const {
  return zoneId_;
}

void RunRCInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string RunRCInstancesRequest::getImageId() const {
  return imageId_;
}

void RunRCInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string RunRCInstancesRequest::getClientToken() const {
  return clientToken_;
}

void RunRCInstancesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RunRCInstancesRequest::getIoOptimized() const {
  return ioOptimized_;
}

void RunRCInstancesRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

int RunRCInstancesRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void RunRCInstancesRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string RunRCInstancesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RunRCInstancesRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string RunRCInstancesRequest::getDescription() const {
  return description_;
}

void RunRCInstancesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool RunRCInstancesRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void RunRCInstancesRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

bool RunRCInstancesRequest::getUserDataInBase64() const {
  return userDataInBase64_;
}

void RunRCInstancesRequest::setUserDataInBase64(bool userDataInBase64) {
  userDataInBase64_ = userDataInBase64;
  setParameter(std::string("UserDataInBase64"), userDataInBase64 ? "true" : "false");
}

std::string RunRCInstancesRequest::getSupportCase() const {
  return supportCase_;
}

void RunRCInstancesRequest::setSupportCase(const std::string &supportCase) {
  supportCase_ = supportCase;
  setParameter(std::string("SupportCase"), supportCase);
}

std::string RunRCInstancesRequest::getUserData() const {
  return userData_;
}

void RunRCInstancesRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string RunRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void RunRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunRCInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void RunRCInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string RunRCInstancesRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void RunRCInstancesRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string RunRCInstancesRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void RunRCInstancesRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

int RunRCInstancesRequest::getAmount() const {
  return amount_;
}

void RunRCInstancesRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool RunRCInstancesRequest::getAutoPay() const {
  return autoPay_;
}

void RunRCInstancesRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::vector<RunRCInstancesRequest::DataDisk> RunRCInstancesRequest::getDataDisk() const {
  return dataDisk_;
}

void RunRCInstancesRequest::setDataDisk(const std::vector<RunRCInstancesRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".SnapshotId", dataDisk[dep1].snapshotId);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Encrypted", dataDisk[dep1].encrypted);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Size", std::to_string(dataDisk[dep1].size));
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".PerformanceLevel", dataDisk[dep1].performanceLevel);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Category", dataDisk[dep1].category);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Device", dataDisk[dep1].device);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".DeleteWithInstance", dataDisk[dep1].deleteWithInstance ? "true" : "false");
  }
}

