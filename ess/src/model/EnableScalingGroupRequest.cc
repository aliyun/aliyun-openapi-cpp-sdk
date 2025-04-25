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

#include <alibabacloud/ess/model/EnableScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::EnableScalingGroupRequest;

EnableScalingGroupRequest::EnableScalingGroupRequest()
    : RpcServiceRequest("ess", "2014-08-28", "EnableScalingGroup") {
  setMethod(HttpRequest::Method::Post);
}

EnableScalingGroupRequest::~EnableScalingGroupRequest() {}

long EnableScalingGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableScalingGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableScalingGroupRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void EnableScalingGroupRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string EnableScalingGroupRequest::getActiveScalingConfigurationId() const {
  return activeScalingConfigurationId_;
}

void EnableScalingGroupRequest::setActiveScalingConfigurationId(const std::string &activeScalingConfigurationId) {
  activeScalingConfigurationId_ = activeScalingConfigurationId;
  setParameter(std::string("ActiveScalingConfigurationId"), activeScalingConfigurationId);
}

std::string EnableScalingGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EnableScalingGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string EnableScalingGroupRequest::getRegionId() const {
  return regionId_;
}

void EnableScalingGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableScalingGroupRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void EnableScalingGroupRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

std::string EnableScalingGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableScalingGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::vector<EnableScalingGroupRequest::LaunchTemplateOverride> EnableScalingGroupRequest::getLaunchTemplateOverride() const {
  return launchTemplateOverride_;
}

void EnableScalingGroupRequest::setLaunchTemplateOverride(const std::vector<EnableScalingGroupRequest::LaunchTemplateOverride> &launchTemplateOverride) {
  launchTemplateOverride_ = launchTemplateOverride;
  for(int dep1 = 0; dep1 != launchTemplateOverride.size(); dep1++) {
  auto launchTemplateOverrideObj = launchTemplateOverride.at(dep1);
  std::string launchTemplateOverrideObjStr = std::string("LaunchTemplateOverride") + "." + std::to_string(dep1 + 1);
    setParameter(launchTemplateOverrideObjStr + ".WeightedCapacity", std::to_string(launchTemplateOverrideObj.weightedCapacity));
    setParameter(launchTemplateOverrideObjStr + ".InstanceType", launchTemplateOverrideObj.instanceType);
  }
}

std::string EnableScalingGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableScalingGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableScalingGroupRequest::getOwnerId() const {
  return ownerId_;
}

void EnableScalingGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableScalingGroupRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void EnableScalingGroupRequest::setLaunchTemplateVersion(const std::string &launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
  setParameter(std::string("LaunchTemplateVersion"), launchTemplateVersion);
}

std::vector<std::string> EnableScalingGroupRequest::getInstanceId() const {
  return instanceId_;
}

void EnableScalingGroupRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::vector<int> EnableScalingGroupRequest::getLoadBalancerWeight() const {
  return loadBalancerWeight_;
}

void EnableScalingGroupRequest::setLoadBalancerWeight(const std::vector<int> &loadBalancerWeight) {
  loadBalancerWeight_ = loadBalancerWeight;
}

