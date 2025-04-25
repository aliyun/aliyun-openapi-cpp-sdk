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

#include <alibabacloud/ess/model/CreateScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingGroupRequest;

CreateScalingGroupRequest::CreateScalingGroupRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateScalingGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateScalingGroupRequest::~CreateScalingGroupRequest() {}

bool CreateScalingGroupRequest::getAzBalance() const {
  return azBalance_;
}

void CreateScalingGroupRequest::setAzBalance(bool azBalance) {
  azBalance_ = azBalance;
  setParameter(std::string("AzBalance"), azBalance ? "true" : "false");
}

std::vector<std::string> CreateScalingGroupRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void CreateScalingGroupRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

int CreateScalingGroupRequest::getMaxInstanceLifetime() const {
  return maxInstanceLifetime_;
}

void CreateScalingGroupRequest::setMaxInstanceLifetime(int maxInstanceLifetime) {
  maxInstanceLifetime_ = maxInstanceLifetime;
  setParameter(std::string("MaxInstanceLifetime"), std::to_string(maxInstanceLifetime));
}

bool CreateScalingGroupRequest::getSpotInstanceRemedy() const {
  return spotInstanceRemedy_;
}

void CreateScalingGroupRequest::setSpotInstanceRemedy(bool spotInstanceRemedy) {
  spotInstanceRemedy_ = spotInstanceRemedy;
  setParameter(std::string("SpotInstanceRemedy"), spotInstanceRemedy ? "true" : "false");
}

bool CreateScalingGroupRequest::getScaleOutAmountCheck() const {
  return scaleOutAmountCheck_;
}

void CreateScalingGroupRequest::setScaleOutAmountCheck(bool scaleOutAmountCheck) {
  scaleOutAmountCheck_ = scaleOutAmountCheck;
  setParameter(std::string("ScaleOutAmountCheck"), scaleOutAmountCheck ? "true" : "false");
}

std::string CreateScalingGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateScalingGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateScalingGroupRequest::getGroupType() const {
  return groupType_;
}

void CreateScalingGroupRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

bool CreateScalingGroupRequest::getSyncAlarmRuleToCms() const {
  return syncAlarmRuleToCms_;
}

void CreateScalingGroupRequest::setSyncAlarmRuleToCms(bool syncAlarmRuleToCms) {
  syncAlarmRuleToCms_ = syncAlarmRuleToCms;
  setParameter(std::string("SyncAlarmRuleToCms"), syncAlarmRuleToCms ? "true" : "false");
}

std::string CreateScalingGroupRequest::getCustomPolicyARN() const {
  return customPolicyARN_;
}

void CreateScalingGroupRequest::setCustomPolicyARN(const std::string &customPolicyARN) {
  customPolicyARN_ = customPolicyARN;
  setParameter(std::string("CustomPolicyARN"), customPolicyARN);
}

std::vector<CreateScalingGroupRequest::Tag> CreateScalingGroupRequest::getTag() const {
  return tag_;
}

void CreateScalingGroupRequest::setTag(const std::vector<CreateScalingGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Propagate", tagObj.propagate ? "true" : "false");
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int CreateScalingGroupRequest::getStopInstanceTimeout() const {
  return stopInstanceTimeout_;
}

void CreateScalingGroupRequest::setStopInstanceTimeout(int stopInstanceTimeout) {
  stopInstanceTimeout_ = stopInstanceTimeout;
  setParameter(std::string("StopInstanceTimeout"), std::to_string(stopInstanceTimeout));
}

int CreateScalingGroupRequest::getDefaultCooldown() const {
  return defaultCooldown_;
}

void CreateScalingGroupRequest::setDefaultCooldown(int defaultCooldown) {
  defaultCooldown_ = defaultCooldown;
  setParameter(std::string("DefaultCooldown"), std::to_string(defaultCooldown));
}

std::vector<std::string> CreateScalingGroupRequest::getHealthCheckTypes() const {
  return healthCheckTypes_;
}

void CreateScalingGroupRequest::setHealthCheckTypes(const std::vector<std::string> &healthCheckTypes) {
  healthCheckTypes_ = healthCheckTypes;
}

std::string CreateScalingGroupRequest::getContainerGroupId() const {
  return containerGroupId_;
}

void CreateScalingGroupRequest::setContainerGroupId(const std::string &containerGroupId) {
  containerGroupId_ = containerGroupId;
  setParameter(std::string("ContainerGroupId"), containerGroupId);
}

std::string CreateScalingGroupRequest::getMultiAZPolicy() const {
  return multiAZPolicy_;
}

void CreateScalingGroupRequest::setMultiAZPolicy(const std::string &multiAZPolicy) {
  multiAZPolicy_ = multiAZPolicy;
  setParameter(std::string("MultiAZPolicy"), multiAZPolicy);
}

std::string CreateScalingGroupRequest::getDBInstanceIds() const {
  return dBInstanceIds_;
}

void CreateScalingGroupRequest::setDBInstanceIds(const std::string &dBInstanceIds) {
  dBInstanceIds_ = dBInstanceIds;
  setParameter(std::string("DBInstanceIds"), dBInstanceIds);
}

std::string CreateScalingGroupRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void CreateScalingGroupRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

int CreateScalingGroupRequest::getDesiredCapacity() const {
  return desiredCapacity_;
}

void CreateScalingGroupRequest::setDesiredCapacity(int desiredCapacity) {
  desiredCapacity_ = desiredCapacity;
  setParameter(std::string("DesiredCapacity"), std::to_string(desiredCapacity));
}

std::vector<CreateScalingGroupRequest::ServerGroup> CreateScalingGroupRequest::getServerGroup() const {
  return serverGroup_;
}

void CreateScalingGroupRequest::setServerGroup(const std::vector<CreateScalingGroupRequest::ServerGroup> &serverGroup) {
  serverGroup_ = serverGroup;
  for(int dep1 = 0; dep1 != serverGroup.size(); dep1++) {
  auto serverGroupObj = serverGroup.at(dep1);
  std::string serverGroupObjStr = std::string("ServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(serverGroupObjStr + ".ServerGroupId", serverGroupObj.serverGroupId);
    setParameter(serverGroupObjStr + ".Port", std::to_string(serverGroupObj.port));
    setParameter(serverGroupObjStr + ".Weight", std::to_string(serverGroupObj.weight));
    setParameter(serverGroupObjStr + ".Type", serverGroupObj.type);
  }
}

std::vector<CreateScalingGroupRequest::LaunchTemplateOverride> CreateScalingGroupRequest::getLaunchTemplateOverride() const {
  return launchTemplateOverride_;
}

void CreateScalingGroupRequest::setLaunchTemplateOverride(const std::vector<CreateScalingGroupRequest::LaunchTemplateOverride> &launchTemplateOverride) {
  launchTemplateOverride_ = launchTemplateOverride;
  for(int dep1 = 0; dep1 != launchTemplateOverride.size(); dep1++) {
  auto launchTemplateOverrideObj = launchTemplateOverride.at(dep1);
  std::string launchTemplateOverrideObjStr = std::string("LaunchTemplateOverride") + "." + std::to_string(dep1 + 1);
    setParameter(launchTemplateOverrideObjStr + ".WeightedCapacity", std::to_string(launchTemplateOverrideObj.weightedCapacity));
    setParameter(launchTemplateOverrideObjStr + ".InstanceType", launchTemplateOverrideObj.instanceType);
    setParameter(launchTemplateOverrideObjStr + ".SpotPriceLimit", std::to_string(launchTemplateOverrideObj.spotPriceLimit));
  }
}

bool CreateScalingGroupRequest::getCompensateWithOnDemand() const {
  return compensateWithOnDemand_;
}

void CreateScalingGroupRequest::setCompensateWithOnDemand(bool compensateWithOnDemand) {
  compensateWithOnDemand_ = compensateWithOnDemand;
  setParameter(std::string("CompensateWithOnDemand"), compensateWithOnDemand ? "true" : "false");
}

CreateScalingGroupRequest::CapacityOptions CreateScalingGroupRequest::getCapacityOptions() const {
  return capacityOptions_;
}

void CreateScalingGroupRequest::setCapacityOptions(const CreateScalingGroupRequest::CapacityOptions &capacityOptions) {
  capacityOptions_ = capacityOptions;
  setParameter(std::string("CapacityOptions") + ".CompensateWithOnDemand", capacityOptions.compensateWithOnDemand ? "true" : "false");
  setParameter(std::string("CapacityOptions") + ".PriceComparisonMode", capacityOptions.priceComparisonMode);
  setParameter(std::string("CapacityOptions") + ".OnDemandBaseCapacity", std::to_string(capacityOptions.onDemandBaseCapacity));
  setParameter(std::string("CapacityOptions") + ".SpotAutoReplaceOnDemand", capacityOptions.spotAutoReplaceOnDemand ? "true" : "false");
  setParameter(std::string("CapacityOptions") + ".OnDemandPercentageAboveBaseCapacity", std::to_string(capacityOptions.onDemandPercentageAboveBaseCapacity));
}

int CreateScalingGroupRequest::getMinSize() const {
  return minSize_;
}

void CreateScalingGroupRequest::setMinSize(int minSize) {
  minSize_ = minSize;
  setParameter(std::string("MinSize"), std::to_string(minSize));
}

long CreateScalingGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateScalingGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateScalingGroupRequest::AlbServerGroup> CreateScalingGroupRequest::getAlbServerGroup() const {
  return albServerGroup_;
}

void CreateScalingGroupRequest::setAlbServerGroup(const std::vector<CreateScalingGroupRequest::AlbServerGroup> &albServerGroup) {
  albServerGroup_ = albServerGroup;
  for(int dep1 = 0; dep1 != albServerGroup.size(); dep1++) {
  auto albServerGroupObj = albServerGroup.at(dep1);
  std::string albServerGroupObjStr = std::string("AlbServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(albServerGroupObjStr + ".AlbServerGroupId", albServerGroupObj.albServerGroupId);
    setParameter(albServerGroupObjStr + ".Port", std::to_string(albServerGroupObj.port));
    setParameter(albServerGroupObjStr + ".Weight", std::to_string(albServerGroupObj.weight));
  }
}

std::string CreateScalingGroupRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateScalingGroupRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateScalingGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateScalingGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateScalingGroupRequest::getMaxSize() const {
  return maxSize_;
}

void CreateScalingGroupRequest::setMaxSize(int maxSize) {
  maxSize_ = maxSize;
  setParameter(std::string("MaxSize"), std::to_string(maxSize));
}

std::vector<CreateScalingGroupRequest::LifecycleHook> CreateScalingGroupRequest::getLifecycleHook() const {
  return lifecycleHook_;
}

void CreateScalingGroupRequest::setLifecycleHook(const std::vector<CreateScalingGroupRequest::LifecycleHook> &lifecycleHook) {
  lifecycleHook_ = lifecycleHook;
  for(int dep1 = 0; dep1 != lifecycleHook.size(); dep1++) {
  auto lifecycleHookObj = lifecycleHook.at(dep1);
  std::string lifecycleHookObjStr = std::string("LifecycleHook") + "." + std::to_string(dep1 + 1);
    setParameter(lifecycleHookObjStr + ".DefaultResult", lifecycleHookObj.defaultResult);
    setParameter(lifecycleHookObjStr + ".LifecycleHookName", lifecycleHookObj.lifecycleHookName);
    setParameter(lifecycleHookObjStr + ".HeartbeatTimeout", std::to_string(lifecycleHookObj.heartbeatTimeout));
    setParameter(lifecycleHookObjStr + ".NotificationArn", lifecycleHookObj.notificationArn);
    setParameter(lifecycleHookObjStr + ".NotificationMetadata", lifecycleHookObj.notificationMetadata);
    setParameter(lifecycleHookObjStr + ".LifecycleTransition", lifecycleHookObj.lifecycleTransition);
  }
}

std::string CreateScalingGroupRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void CreateScalingGroupRequest::setLoadBalancerIds(const std::string &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  setParameter(std::string("LoadBalancerIds"), loadBalancerIds);
}

std::string CreateScalingGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateScalingGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateScalingGroupRequest::SystemTag> CreateScalingGroupRequest::getSystemTag() const {
  return systemTag_;
}

void CreateScalingGroupRequest::setSystemTag(const std::vector<CreateScalingGroupRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Spread", systemTagObj.spread ? "true" : "false");
  }
}

std::vector<CreateScalingGroupRequest::LoadBalancerConfig> CreateScalingGroupRequest::getLoadBalancerConfig() const {
  return loadBalancerConfig_;
}

void CreateScalingGroupRequest::setLoadBalancerConfig(const std::vector<CreateScalingGroupRequest::LoadBalancerConfig> &loadBalancerConfig) {
  loadBalancerConfig_ = loadBalancerConfig;
  for(int dep1 = 0; dep1 != loadBalancerConfig.size(); dep1++) {
  auto loadBalancerConfigObj = loadBalancerConfig.at(dep1);
  std::string loadBalancerConfigObjStr = std::string("LoadBalancerConfig") + "." + std::to_string(dep1 + 1);
    setParameter(loadBalancerConfigObjStr + ".LoadBalancerId", loadBalancerConfigObj.loadBalancerId);
    setParameter(loadBalancerConfigObjStr + ".Weight", std::to_string(loadBalancerConfigObj.weight));
  }
}

int CreateScalingGroupRequest::getOnDemandBaseCapacity() const {
  return onDemandBaseCapacity_;
}

void CreateScalingGroupRequest::setOnDemandBaseCapacity(int onDemandBaseCapacity) {
  onDemandBaseCapacity_ = onDemandBaseCapacity;
  setParameter(std::string("OnDemandBaseCapacity"), std::to_string(onDemandBaseCapacity));
}

std::string CreateScalingGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateScalingGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int CreateScalingGroupRequest::getOnDemandPercentageAboveBaseCapacity() const {
  return onDemandPercentageAboveBaseCapacity_;
}

void CreateScalingGroupRequest::setOnDemandPercentageAboveBaseCapacity(int onDemandPercentageAboveBaseCapacity) {
  onDemandPercentageAboveBaseCapacity_ = onDemandPercentageAboveBaseCapacity;
  setParameter(std::string("OnDemandPercentageAboveBaseCapacity"), std::to_string(onDemandPercentageAboveBaseCapacity));
}

std::string CreateScalingGroupRequest::getSpotAllocationStrategy() const {
  return spotAllocationStrategy_;
}

void CreateScalingGroupRequest::setSpotAllocationStrategy(const std::string &spotAllocationStrategy) {
  spotAllocationStrategy_ = spotAllocationStrategy;
  setParameter(std::string("SpotAllocationStrategy"), spotAllocationStrategy);
}

std::string CreateScalingGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateScalingGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateScalingGroupRequest::getRemovalPolicy1() const {
  return removalPolicy1_;
}

void CreateScalingGroupRequest::setRemovalPolicy1(const std::string &removalPolicy1) {
  removalPolicy1_ = removalPolicy1;
  setParameter(std::string("RemovalPolicy.1"), removalPolicy1);
}

std::string CreateScalingGroupRequest::getRemovalPolicy2() const {
  return removalPolicy2_;
}

void CreateScalingGroupRequest::setRemovalPolicy2(const std::string &removalPolicy2) {
  removalPolicy2_ = removalPolicy2;
  setParameter(std::string("RemovalPolicy.2"), removalPolicy2);
}

std::string CreateScalingGroupRequest::getRemovalPolicy3() const {
  return removalPolicy3_;
}

void CreateScalingGroupRequest::setRemovalPolicy3(const std::string &removalPolicy3) {
  removalPolicy3_ = removalPolicy3;
  setParameter(std::string("RemovalPolicy.3"), removalPolicy3);
}

std::string CreateScalingGroupRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void CreateScalingGroupRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string CreateScalingGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateScalingGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateScalingGroupRequest::getScalingGroupName() const {
  return scalingGroupName_;
}

void CreateScalingGroupRequest::setScalingGroupName(const std::string &scalingGroupName) {
  scalingGroupName_ = scalingGroupName;
  setParameter(std::string("ScalingGroupName"), scalingGroupName);
}

std::string CreateScalingGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateScalingGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateScalingGroupRequest::getSpotInstancePools() const {
  return spotInstancePools_;
}

void CreateScalingGroupRequest::setSpotInstancePools(int spotInstancePools) {
  spotInstancePools_ = spotInstancePools;
  setParameter(std::string("SpotInstancePools"), std::to_string(spotInstancePools));
}

std::vector<CreateScalingGroupRequest::DBInstance> CreateScalingGroupRequest::getDBInstance() const {
  return dBInstance_;
}

void CreateScalingGroupRequest::setDBInstance(const std::vector<CreateScalingGroupRequest::DBInstance> &dBInstance) {
  dBInstance_ = dBInstance;
  for(int dep1 = 0; dep1 != dBInstance.size(); dep1++) {
  auto dBInstanceObj = dBInstance.at(dep1);
  std::string dBInstanceObjStr = std::string("DBInstance") + "." + std::to_string(dep1 + 1);
    setParameter(dBInstanceObjStr + ".DBInstanceId", dBInstanceObj.dBInstanceId);
    setParameter(dBInstanceObjStr + ".Type", dBInstanceObj.type);
    setParameter(dBInstanceObjStr + ".AttachMode", dBInstanceObj.attachMode);
  }
}

bool CreateScalingGroupRequest::getGroupDeletionProtection() const {
  return groupDeletionProtection_;
}

void CreateScalingGroupRequest::setGroupDeletionProtection(bool groupDeletionProtection) {
  groupDeletionProtection_ = groupDeletionProtection;
  setParameter(std::string("GroupDeletionProtection"), groupDeletionProtection ? "true" : "false");
}

std::string CreateScalingGroupRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void CreateScalingGroupRequest::setLaunchTemplateVersion(const std::string &launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
  setParameter(std::string("LaunchTemplateVersion"), launchTemplateVersion);
}

std::string CreateScalingGroupRequest::getScalingPolicy() const {
  return scalingPolicy_;
}

void CreateScalingGroupRequest::setScalingPolicy(const std::string &scalingPolicy) {
  scalingPolicy_ = scalingPolicy;
  setParameter(std::string("ScalingPolicy"), scalingPolicy);
}

std::string CreateScalingGroupRequest::getAllocationStrategy() const {
  return allocationStrategy_;
}

void CreateScalingGroupRequest::setAllocationStrategy(const std::string &allocationStrategy) {
  allocationStrategy_ = allocationStrategy;
  setParameter(std::string("AllocationStrategy"), allocationStrategy);
}

std::vector<CreateScalingGroupRequest::VServerGroup> CreateScalingGroupRequest::getVServerGroup() const {
  return vServerGroup_;
}

void CreateScalingGroupRequest::setVServerGroup(const std::vector<CreateScalingGroupRequest::VServerGroup> &vServerGroup) {
  vServerGroup_ = vServerGroup;
  for(int dep1 = 0; dep1 != vServerGroup.size(); dep1++) {
  auto vServerGroupObj = vServerGroup.at(dep1);
  std::string vServerGroupObjStr = std::string("VServerGroup") + "." + std::to_string(dep1 + 1);
    setParameter(vServerGroupObjStr + ".LoadBalancerId", vServerGroupObj.loadBalancerId);
    for(int dep2 = 0; dep2 != vServerGroupObj.vServerGroupAttribute.size(); dep2++) {
    auto vServerGroupAttributeObj = vServerGroupObj.vServerGroupAttribute.at(dep2);
    std::string vServerGroupAttributeObjStr = vServerGroupObjStr + ".VServerGroupAttribute" + "." + std::to_string(dep2 + 1);
      setParameter(vServerGroupAttributeObjStr + ".VServerGroupId", vServerGroupAttributeObj.vServerGroupId);
      setParameter(vServerGroupAttributeObjStr + ".Port", std::to_string(vServerGroupAttributeObj.port));
      setParameter(vServerGroupAttributeObjStr + ".Weight", std::to_string(vServerGroupAttributeObj.weight));
    }
  }
}

