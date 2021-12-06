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

#include <alibabacloud/ecs/model/ModifyAutoProvisioningGroupRequest.h>

using AlibabaCloud::Ecs::Model::ModifyAutoProvisioningGroupRequest;

ModifyAutoProvisioningGroupRequest::ModifyAutoProvisioningGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyAutoProvisioningGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoProvisioningGroupRequest::~ModifyAutoProvisioningGroupRequest() {}

long ModifyAutoProvisioningGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAutoProvisioningGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ModifyAutoProvisioningGroupRequest::getTerminateInstancesWithExpiration() const {
  return terminateInstancesWithExpiration_;
}

void ModifyAutoProvisioningGroupRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) {
  terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
  setParameter(std::string("TerminateInstancesWithExpiration"), terminateInstancesWithExpiration ? "true" : "false");
}

std::string ModifyAutoProvisioningGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifyAutoProvisioningGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAutoProvisioningGroupRequest::getDefaultTargetCapacityType() const {
  return defaultTargetCapacityType_;
}

void ModifyAutoProvisioningGroupRequest::setDefaultTargetCapacityType(const std::string &defaultTargetCapacityType) {
  defaultTargetCapacityType_ = defaultTargetCapacityType;
  setParameter(std::string("DefaultTargetCapacityType"), defaultTargetCapacityType);
}

std::string ModifyAutoProvisioningGroupRequest::getExcessCapacityTerminationPolicy() const {
  return excessCapacityTerminationPolicy_;
}

void ModifyAutoProvisioningGroupRequest::setExcessCapacityTerminationPolicy(const std::string &excessCapacityTerminationPolicy) {
  excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
  setParameter(std::string("ExcessCapacityTerminationPolicy"), excessCapacityTerminationPolicy);
}

std::vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> ModifyAutoProvisioningGroupRequest::getLaunchTemplateConfig() const {
  return launchTemplateConfig_;
}

void ModifyAutoProvisioningGroupRequest::setLaunchTemplateConfig(const std::vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> &launchTemplateConfig) {
  launchTemplateConfig_ = launchTemplateConfig;
  for(int dep1 = 0; dep1 != launchTemplateConfig.size(); dep1++) {
  auto launchTemplateConfigObj = launchTemplateConfig.at(dep1);
  std::string launchTemplateConfigObjStr = std::string("LaunchTemplateConfig") + "." + std::to_string(dep1 + 1);
    setParameter(launchTemplateConfigObjStr + ".VSwitchId", launchTemplateConfigObj.vSwitchId);
    setParameter(launchTemplateConfigObjStr + ".MaxPrice", std::to_string(launchTemplateConfigObj.maxPrice));
    setParameter(launchTemplateConfigObjStr + ".Priority", std::to_string(launchTemplateConfigObj.priority));
    setParameter(launchTemplateConfigObjStr + ".InstanceType", launchTemplateConfigObj.instanceType);
    setParameter(launchTemplateConfigObjStr + ".WeightedCapacity", std::to_string(launchTemplateConfigObj.weightedCapacity));
  }
}

std::string ModifyAutoProvisioningGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAutoProvisioningGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAutoProvisioningGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAutoProvisioningGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAutoProvisioningGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAutoProvisioningGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAutoProvisioningGroupRequest::getAutoProvisioningGroupId() const {
  return autoProvisioningGroupId_;
}

void ModifyAutoProvisioningGroupRequest::setAutoProvisioningGroupId(const std::string &autoProvisioningGroupId) {
  autoProvisioningGroupId_ = autoProvisioningGroupId;
  setParameter(std::string("AutoProvisioningGroupId"), autoProvisioningGroupId);
}

std::string ModifyAutoProvisioningGroupRequest::getPayAsYouGoTargetCapacity() const {
  return payAsYouGoTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setPayAsYouGoTargetCapacity(const std::string &payAsYouGoTargetCapacity) {
  payAsYouGoTargetCapacity_ = payAsYouGoTargetCapacity;
  setParameter(std::string("PayAsYouGoTargetCapacity"), payAsYouGoTargetCapacity);
}

std::string ModifyAutoProvisioningGroupRequest::getTotalTargetCapacity() const {
  return totalTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setTotalTargetCapacity(const std::string &totalTargetCapacity) {
  totalTargetCapacity_ = totalTargetCapacity;
  setParameter(std::string("TotalTargetCapacity"), totalTargetCapacity);
}

std::string ModifyAutoProvisioningGroupRequest::getSpotTargetCapacity() const {
  return spotTargetCapacity_;
}

void ModifyAutoProvisioningGroupRequest::setSpotTargetCapacity(const std::string &spotTargetCapacity) {
  spotTargetCapacity_ = spotTargetCapacity;
  setParameter(std::string("SpotTargetCapacity"), spotTargetCapacity);
}

float ModifyAutoProvisioningGroupRequest::getMaxSpotPrice() const {
  return maxSpotPrice_;
}

void ModifyAutoProvisioningGroupRequest::setMaxSpotPrice(float maxSpotPrice) {
  maxSpotPrice_ = maxSpotPrice;
  setParameter(std::string("MaxSpotPrice"), std::to_string(maxSpotPrice));
}

std::string ModifyAutoProvisioningGroupRequest::getAutoProvisioningGroupName() const {
  return autoProvisioningGroupName_;
}

void ModifyAutoProvisioningGroupRequest::setAutoProvisioningGroupName(const std::string &autoProvisioningGroupName) {
  autoProvisioningGroupName_ = autoProvisioningGroupName;
  setParameter(std::string("AutoProvisioningGroupName"), autoProvisioningGroupName);
}

