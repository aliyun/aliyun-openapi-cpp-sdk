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

#include <alibabacloud/rds/model/CreateRCNodePoolRequest.h>

using AlibabaCloud::Rds::Model::CreateRCNodePoolRequest;

CreateRCNodePoolRequest::CreateRCNodePoolRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateRCNodePool") {
  setMethod(HttpRequest::Method::Post);
}

CreateRCNodePoolRequest::~CreateRCNodePoolRequest() {}

std::string CreateRCNodePoolRequest::getSecurityEnhancementStrategy() const {
  return securityEnhancementStrategy_;
}

void CreateRCNodePoolRequest::setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy) {
  securityEnhancementStrategy_ = securityEnhancementStrategy;
  setParameter(std::string("SecurityEnhancementStrategy"), securityEnhancementStrategy);
}

std::string CreateRCNodePoolRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateRCNodePoolRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string CreateRCNodePoolRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateRCNodePoolRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateRCNodePoolRequest::getPassword() const {
  return password_;
}

void CreateRCNodePoolRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateRCNodePoolRequest::getHostName() const {
  return hostName_;
}

void CreateRCNodePoolRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

CreateRCNodePoolRequest::SystemDisk CreateRCNodePoolRequest::getSystemDisk() const {
  return systemDisk_;
}

void CreateRCNodePoolRequest::setSystemDisk(const CreateRCNodePoolRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".Size", std::to_string(systemDisk.size));
  setParameter(std::string("SystemDisk") + ".PerformanceLevel", systemDisk.performanceLevel);
  setParameter(std::string("SystemDisk") + ".Category", systemDisk.category);
}

std::vector<CreateRCNodePoolRequest::Tag> CreateRCNodePoolRequest::getTag() const {
  return tag_;
}

void CreateRCNodePoolRequest::setTag(const std::vector<CreateRCNodePoolRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int CreateRCNodePoolRequest::getPeriod() const {
  return period_;
}

void CreateRCNodePoolRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool CreateRCNodePoolRequest::getDryRun() const {
  return dryRun_;
}

void CreateRCNodePoolRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateRCNodePoolRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateRCNodePoolRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateRCNodePoolRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void CreateRCNodePoolRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string CreateRCNodePoolRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateRCNodePoolRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string CreateRCNodePoolRequest::getInstanceName() const {
  return instanceName_;
}

void CreateRCNodePoolRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool CreateRCNodePoolRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateRCNodePoolRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string CreateRCNodePoolRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateRCNodePoolRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateRCNodePoolRequest::getCreateMode() const {
  return createMode_;
}

void CreateRCNodePoolRequest::setCreateMode(const std::string &createMode) {
  createMode_ = createMode;
  setParameter(std::string("CreateMode"), createMode);
}

std::string CreateRCNodePoolRequest::getZoneId() const {
  return zoneId_;
}

void CreateRCNodePoolRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateRCNodePoolRequest::getNodePoolName() const {
  return nodePoolName_;
}

void CreateRCNodePoolRequest::setNodePoolName(const std::string &nodePoolName) {
  nodePoolName_ = nodePoolName;
  setParameter(std::string("NodePoolName"), nodePoolName);
}

std::string CreateRCNodePoolRequest::getImageId() const {
  return imageId_;
}

void CreateRCNodePoolRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateRCNodePoolRequest::getClientToken() const {
  return clientToken_;
}

void CreateRCNodePoolRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRCNodePoolRequest::getIoOptimized() const {
  return ioOptimized_;
}

void CreateRCNodePoolRequest::setIoOptimized(const std::string &ioOptimized) {
  ioOptimized_ = ioOptimized;
  setParameter(std::string("IoOptimized"), ioOptimized);
}

int CreateRCNodePoolRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateRCNodePoolRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateRCNodePoolRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateRCNodePoolRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateRCNodePoolRequest::getDescription() const {
  return description_;
}

void CreateRCNodePoolRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRCNodePoolRequest::getSupportCase() const {
  return supportCase_;
}

void CreateRCNodePoolRequest::setSupportCase(const std::string &supportCase) {
  supportCase_ = supportCase;
  setParameter(std::string("SupportCase"), supportCase);
}

std::string CreateRCNodePoolRequest::getUserData() const {
  return userData_;
}

void CreateRCNodePoolRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateRCNodePoolRequest::getRegionId() const {
  return regionId_;
}

void CreateRCNodePoolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRCNodePoolRequest::getInstanceType() const {
  return instanceType_;
}

void CreateRCNodePoolRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateRCNodePoolRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateRCNodePoolRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateRCNodePoolRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateRCNodePoolRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

int CreateRCNodePoolRequest::getAmount() const {
  return amount_;
}

void CreateRCNodePoolRequest::setAmount(int amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

bool CreateRCNodePoolRequest::getAutoPay() const {
  return autoPay_;
}

void CreateRCNodePoolRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateRCNodePoolRequest::getClusterId() const {
  return clusterId_;
}

void CreateRCNodePoolRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<CreateRCNodePoolRequest::DataDisk> CreateRCNodePoolRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateRCNodePoolRequest::setDataDisk(const std::vector<CreateRCNodePoolRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Encrypted", dataDisk[dep1].encrypted);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Size", std::to_string(dataDisk[dep1].size));
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".PerformanceLevel", dataDisk[dep1].performanceLevel);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Category", dataDisk[dep1].category);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".DeleteWithInstance", dataDisk[dep1].deleteWithInstance ? "true" : "false");
  }
}

