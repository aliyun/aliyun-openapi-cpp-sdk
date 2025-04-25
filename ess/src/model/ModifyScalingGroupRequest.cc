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

#include <alibabacloud/ess/model/ModifyScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::ModifyScalingGroupRequest;

ModifyScalingGroupRequest::ModifyScalingGroupRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ModifyScalingGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScalingGroupRequest::~ModifyScalingGroupRequest() {}

long ModifyScalingGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyScalingGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyScalingGroupRequest::getAzBalance() const {
  return azBalance_;
}

void ModifyScalingGroupRequest::setAzBalance(bool azBalance) {
  azBalance_ = azBalance;
  setParameter(std::string("AzBalance"), azBalance ? "true" : "false");
}

std::vector<std::string> ModifyScalingGroupRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ModifyScalingGroupRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

int ModifyScalingGroupRequest::getMaxInstanceLifetime() const {
  return maxInstanceLifetime_;
}

void ModifyScalingGroupRequest::setMaxInstanceLifetime(int maxInstanceLifetime) {
  maxInstanceLifetime_ = maxInstanceLifetime;
  setParameter(std::string("MaxInstanceLifetime"), std::to_string(maxInstanceLifetime));
}

std::string ModifyScalingGroupRequest::getActiveScalingConfigurationId() const {
  return activeScalingConfigurationId_;
}

void ModifyScalingGroupRequest::setActiveScalingConfigurationId(const std::string &activeScalingConfigurationId) {
  activeScalingConfigurationId_ = activeScalingConfigurationId;
  setParameter(std::string("ActiveScalingConfigurationId"), activeScalingConfigurationId);
}

bool ModifyScalingGroupRequest::getSpotInstanceRemedy() const {
  return spotInstanceRemedy_;
}

void ModifyScalingGroupRequest::setSpotInstanceRemedy(bool spotInstanceRemedy) {
  spotInstanceRemedy_ = spotInstanceRemedy;
  setParameter(std::string("SpotInstanceRemedy"), spotInstanceRemedy ? "true" : "false");
}

bool ModifyScalingGroupRequest::getScaleOutAmountCheck() const {
  return scaleOutAmountCheck_;
}

void ModifyScalingGroupRequest::setScaleOutAmountCheck(bool scaleOutAmountCheck) {
  scaleOutAmountCheck_ = scaleOutAmountCheck;
  setParameter(std::string("ScaleOutAmountCheck"), scaleOutAmountCheck ? "true" : "false");
}

std::string ModifyScalingGroupRequest::getCustomPolicyARN() const {
  return customPolicyARN_;
}

void ModifyScalingGroupRequest::setCustomPolicyARN(const std::string &customPolicyARN) {
  customPolicyARN_ = customPolicyARN;
  setParameter(std::string("CustomPolicyARN"), customPolicyARN);
}

int ModifyScalingGroupRequest::getStopInstanceTimeout() const {
  return stopInstanceTimeout_;
}

void ModifyScalingGroupRequest::setStopInstanceTimeout(int stopInstanceTimeout) {
  stopInstanceTimeout_ = stopInstanceTimeout;
  setParameter(std::string("StopInstanceTimeout"), std::to_string(stopInstanceTimeout));
}

int ModifyScalingGroupRequest::getDefaultCooldown() const {
  return defaultCooldown_;
}

void ModifyScalingGroupRequest::setDefaultCooldown(int defaultCooldown) {
  defaultCooldown_ = defaultCooldown;
  setParameter(std::string("DefaultCooldown"), std::to_string(defaultCooldown));
}

std::vector<std::string> ModifyScalingGroupRequest::getHealthCheckTypes() const {
  return healthCheckTypes_;
}

void ModifyScalingGroupRequest::setHealthCheckTypes(const std::vector<std::string> &healthCheckTypes) {
  healthCheckTypes_ = healthCheckTypes;
}

std::string ModifyScalingGroupRequest::getMultiAZPolicy() const {
  return multiAZPolicy_;
}

void ModifyScalingGroupRequest::setMultiAZPolicy(const std::string &multiAZPolicy) {
  multiAZPolicy_ = multiAZPolicy;
  setParameter(std::string("MultiAZPolicy"), multiAZPolicy);
}

std::string ModifyScalingGroupRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void ModifyScalingGroupRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

int ModifyScalingGroupRequest::getDesiredCapacity() const {
  return desiredCapacity_;
}

void ModifyScalingGroupRequest::setDesiredCapacity(int desiredCapacity) {
  desiredCapacity_ = desiredCapacity;
  setParameter(std::string("DesiredCapacity"), std::to_string(desiredCapacity));
}

std::vector<ModifyScalingGroupRequest::LaunchTemplateOverride> ModifyScalingGroupRequest::getLaunchTemplateOverride() const {
  return launchTemplateOverride_;
}

void ModifyScalingGroupRequest::setLaunchTemplateOverride(const std::vector<ModifyScalingGroupRequest::LaunchTemplateOverride> &launchTemplateOverride) {
  launchTemplateOverride_ = launchTemplateOverride;
  for(int dep1 = 0; dep1 != launchTemplateOverride.size(); dep1++) {
  auto launchTemplateOverrideObj = launchTemplateOverride.at(dep1);
  std::string launchTemplateOverrideObjStr = std::string("LaunchTemplateOverride") + "." + std::to_string(dep1 + 1);
    setParameter(launchTemplateOverrideObjStr + ".WeightedCapacity", std::to_string(launchTemplateOverrideObj.weightedCapacity));
    setParameter(launchTemplateOverrideObjStr + ".InstanceType", launchTemplateOverrideObj.instanceType);
    setParameter(launchTemplateOverrideObjStr + ".SpotPriceLimit", std::to_string(launchTemplateOverrideObj.spotPriceLimit));
  }
}

bool ModifyScalingGroupRequest::getCompensateWithOnDemand() const {
  return compensateWithOnDemand_;
}

void ModifyScalingGroupRequest::setCompensateWithOnDemand(bool compensateWithOnDemand) {
  compensateWithOnDemand_ = compensateWithOnDemand;
  setParameter(std::string("CompensateWithOnDemand"), compensateWithOnDemand ? "true" : "false");
}

ModifyScalingGroupRequest::CapacityOptions ModifyScalingGroupRequest::getCapacityOptions() const {
  return capacityOptions_;
}

void ModifyScalingGroupRequest::setCapacityOptions(const ModifyScalingGroupRequest::CapacityOptions &capacityOptions) {
  capacityOptions_ = capacityOptions;
  setParameter(std::string("CapacityOptions") + ".CompensateWithOnDemand", capacityOptions.compensateWithOnDemand ? "true" : "false");
  setParameter(std::string("CapacityOptions") + ".PriceComparisonMode", capacityOptions.priceComparisonMode);
  setParameter(std::string("CapacityOptions") + ".OnDemandBaseCapacity", std::to_string(capacityOptions.onDemandBaseCapacity));
  setParameter(std::string("CapacityOptions") + ".SpotAutoReplaceOnDemand", capacityOptions.spotAutoReplaceOnDemand ? "true" : "false");
  setParameter(std::string("CapacityOptions") + ".OnDemandPercentageAboveBaseCapacity", std::to_string(capacityOptions.onDemandPercentageAboveBaseCapacity));
}

int ModifyScalingGroupRequest::getMinSize() const {
  return minSize_;
}

void ModifyScalingGroupRequest::setMinSize(int minSize) {
  minSize_ = minSize;
  setParameter(std::string("MinSize"), std::to_string(minSize));
}

long ModifyScalingGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyScalingGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyScalingGroupRequest::getMaxSize() const {
  return maxSize_;
}

void ModifyScalingGroupRequest::setMaxSize(int maxSize) {
  maxSize_ = maxSize;
  setParameter(std::string("MaxSize"), std::to_string(maxSize));
}

std::string ModifyScalingGroupRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void ModifyScalingGroupRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

int ModifyScalingGroupRequest::getOnDemandBaseCapacity() const {
  return onDemandBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandBaseCapacity(int onDemandBaseCapacity) {
  onDemandBaseCapacity_ = onDemandBaseCapacity;
  setParameter(std::string("OnDemandBaseCapacity"), std::to_string(onDemandBaseCapacity));
}

std::string ModifyScalingGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyScalingGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ModifyScalingGroupRequest::getOnDemandPercentageAboveBaseCapacity() const {
  return onDemandPercentageAboveBaseCapacity_;
}

void ModifyScalingGroupRequest::setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity) {
  onDemandPercentageAboveBaseCapacity_ = onDemandPercentageAboveBaseCapacity;
  setParameter(std::string("OnDemandPercentageAboveBaseCapacity"), std::to_string(onDemandPercentageAboveBaseCapacity));
}

std::string ModifyScalingGroupRequest::getSpotAllocationStrategy() const {
  return spotAllocationStrategy_;
}

void ModifyScalingGroupRequest::setSpotAllocationStrategy(const std::string &spotAllocationStrategy) {
  spotAllocationStrategy_ = spotAllocationStrategy;
  setParameter(std::string("SpotAllocationStrategy"), spotAllocationStrategy);
}

bool ModifyScalingGroupRequest::getDisableDesiredCapacity() const {
  return disableDesiredCapacity_;
}

void ModifyScalingGroupRequest::setDisableDesiredCapacity(bool disableDesiredCapacity) {
  disableDesiredCapacity_ = disableDesiredCapacity;
  setParameter(std::string("DisableDesiredCapacity"), disableDesiredCapacity ? "true" : "false");
}

std::string ModifyScalingGroupRequest::getRemovalPolicy1() const {
  return removalPolicy1_;
}

void ModifyScalingGroupRequest::setRemovalPolicy1(const std::string &removalPolicy1) {
  removalPolicy1_ = removalPolicy1;
  setParameter(std::string("RemovalPolicy.1"), removalPolicy1);
}

std::string ModifyScalingGroupRequest::getRemovalPolicy2() const {
  return removalPolicy2_;
}

void ModifyScalingGroupRequest::setRemovalPolicy2(const std::string &removalPolicy2) {
  removalPolicy2_ = removalPolicy2;
  setParameter(std::string("RemovalPolicy.2"), removalPolicy2);
}

std::string ModifyScalingGroupRequest::getRemovalPolicy3() const {
  return removalPolicy3_;
}

void ModifyScalingGroupRequest::setRemovalPolicy3(const std::string &removalPolicy3) {
  removalPolicy3_ = removalPolicy3;
  setParameter(std::string("RemovalPolicy.3"), removalPolicy3);
}

std::string ModifyScalingGroupRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void ModifyScalingGroupRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string ModifyScalingGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyScalingGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyScalingGroupRequest::getScalingGroupName() const {
  return scalingGroupName_;
}

void ModifyScalingGroupRequest::setScalingGroupName(const std::string &scalingGroupName) {
  scalingGroupName_ = scalingGroupName;
  setParameter(std::string("ScalingGroupName"), scalingGroupName);
}

std::string ModifyScalingGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyScalingGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyScalingGroupRequest::getSpotInstancePools() const {
  return spotInstancePools_;
}

void ModifyScalingGroupRequest::setSpotInstancePools(int spotInstancePools) {
  spotInstancePools_ = spotInstancePools;
  setParameter(std::string("SpotInstancePools"), std::to_string(spotInstancePools));
}

bool ModifyScalingGroupRequest::getGroupDeletionProtection() const {
  return groupDeletionProtection_;
}

void ModifyScalingGroupRequest::setGroupDeletionProtection(bool groupDeletionProtection) {
  groupDeletionProtection_ = groupDeletionProtection;
  setParameter(std::string("GroupDeletionProtection"), groupDeletionProtection ? "true" : "false");
}

std::string ModifyScalingGroupRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void ModifyScalingGroupRequest::setLaunchTemplateVersion(const std::string &launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
  setParameter(std::string("LaunchTemplateVersion"), launchTemplateVersion);
}

std::string ModifyScalingGroupRequest::getScalingPolicy() const {
  return scalingPolicy_;
}

void ModifyScalingGroupRequest::setScalingPolicy(const std::string &scalingPolicy) {
  scalingPolicy_ = scalingPolicy;
  setParameter(std::string("ScalingPolicy"), scalingPolicy);
}

std::string ModifyScalingGroupRequest::getAllocationStrategy() const {
  return allocationStrategy_;
}

void ModifyScalingGroupRequest::setAllocationStrategy(const std::string &allocationStrategy) {
  allocationStrategy_ = allocationStrategy;
  setParameter(std::string("AllocationStrategy"), allocationStrategy);
}

