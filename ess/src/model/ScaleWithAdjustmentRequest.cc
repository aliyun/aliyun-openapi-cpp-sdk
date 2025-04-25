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

#include <alibabacloud/ess/model/ScaleWithAdjustmentRequest.h>

using AlibabaCloud::Ess::Model::ScaleWithAdjustmentRequest;

ScaleWithAdjustmentRequest::ScaleWithAdjustmentRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ScaleWithAdjustment") {
  setMethod(HttpRequest::Method::Post);
}

ScaleWithAdjustmentRequest::~ScaleWithAdjustmentRequest() {}

std::string ScaleWithAdjustmentRequest::getClientToken() const {
  return clientToken_;
}

void ScaleWithAdjustmentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ScaleWithAdjustmentRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void ScaleWithAdjustmentRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

ScaleWithAdjustmentRequest::LifecycleHookContext ScaleWithAdjustmentRequest::getLifecycleHookContext() const {
  return lifecycleHookContext_;
}

void ScaleWithAdjustmentRequest::setLifecycleHookContext(const ScaleWithAdjustmentRequest::LifecycleHookContext &lifecycleHookContext) {
  lifecycleHookContext_ = lifecycleHookContext;
  setParameter(std::string("LifecycleHookContext") + ".DisableLifecycleHook", lifecycleHookContext.disableLifecycleHook ? "true" : "false");
  for(int dep1 = 0; dep1 != lifecycleHookContext.ignoredLifecycleHookIds.size(); dep1++) {
    setParameter(std::string("LifecycleHookContext") + ".IgnoredLifecycleHookIds." + std::to_string(dep1 + 1), lifecycleHookContext.ignoredLifecycleHookIds[dep1]);
  }
}

std::string ScaleWithAdjustmentRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ScaleWithAdjustmentRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<std::string> ScaleWithAdjustmentRequest::getInstanceType() const {
  return instanceType_;
}

void ScaleWithAdjustmentRequest::setInstanceType(const std::vector<std::string> &instanceType) {
  instanceType_ = instanceType;
}

bool ScaleWithAdjustmentRequest::getSyncActivity() const {
  return syncActivity_;
}

void ScaleWithAdjustmentRequest::setSyncActivity(bool syncActivity) {
  syncActivity_ = syncActivity;
  setParameter(std::string("SyncActivity"), syncActivity ? "true" : "false");
}

std::vector<ScaleWithAdjustmentRequest::Allocation> ScaleWithAdjustmentRequest::getAllocation() const {
  return allocation_;
}

void ScaleWithAdjustmentRequest::setAllocation(const std::vector<ScaleWithAdjustmentRequest::Allocation> &allocation) {
  allocation_ = allocation;
  for(int dep1 = 0; dep1 != allocation.size(); dep1++) {
  auto allocationObj = allocation.at(dep1);
  std::string allocationObjStr = std::string("Allocation") + "." + std::to_string(dep1 + 1);
    setParameter(allocationObjStr + ".Count", std::to_string(allocationObj.count));
  }
}

int ScaleWithAdjustmentRequest::getAdjustmentValue() const {
  return adjustmentValue_;
}

void ScaleWithAdjustmentRequest::setAdjustmentValue(int adjustmentValue) {
  adjustmentValue_ = adjustmentValue;
  setParameter(std::string("AdjustmentValue"), std::to_string(adjustmentValue));
}

std::string ScaleWithAdjustmentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ScaleWithAdjustmentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ScaleWithAdjustmentRequest::getActivityMetadata() const {
  return activityMetadata_;
}

void ScaleWithAdjustmentRequest::setActivityMetadata(const std::string &activityMetadata) {
  activityMetadata_ = activityMetadata;
  setParameter(std::string("ActivityMetadata"), activityMetadata);
}

std::string ScaleWithAdjustmentRequest::getAdjustmentType() const {
  return adjustmentType_;
}

void ScaleWithAdjustmentRequest::setAdjustmentType(const std::string &adjustmentType) {
  adjustmentType_ = adjustmentType;
  setParameter(std::string("AdjustmentType"), adjustmentType);
}

bool ScaleWithAdjustmentRequest::getParallelTask() const {
  return parallelTask_;
}

void ScaleWithAdjustmentRequest::setParallelTask(bool parallelTask) {
  parallelTask_ = parallelTask;
  setParameter(std::string("ParallelTask"), parallelTask ? "true" : "false");
}

ScaleWithAdjustmentRequest::Overrides ScaleWithAdjustmentRequest::getOverrides() const {
  return overrides_;
}

void ScaleWithAdjustmentRequest::setOverrides(const ScaleWithAdjustmentRequest::Overrides &overrides) {
  overrides_ = overrides;
  setParameter(std::string("Overrides") + ".Memory", std::to_string(overrides.memory));
  for(int dep1 = 0; dep1 != overrides.containerOverride.size(); dep1++) {
    setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".Memory", std::to_string(overrides.containerOverride[dep1].memory));
    for(int dep2 = 0; dep2 != overrides.containerOverride[dep1].arg.size(); dep2++) {
      setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".Arg." + std::to_string(dep2 + 1), overrides.containerOverride[dep1].arg[dep2]);
    }
    for(int dep2 = 0; dep2 != overrides.containerOverride[dep1].environmentVar.size(); dep2++) {
      setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".EnvironmentVar." + std::to_string(dep2 + 1) + ".Value", overrides.containerOverride[dep1].environmentVar[dep2].value);
      setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".EnvironmentVar." + std::to_string(dep2 + 1) + ".Key", overrides.containerOverride[dep1].environmentVar[dep2].key);
    }
    setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".Name", overrides.containerOverride[dep1].name);
    setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".Cpu", std::to_string(overrides.containerOverride[dep1].cpu));
    for(int dep2 = 0; dep2 != overrides.containerOverride[dep1].command.size(); dep2++) {
      setParameter(std::string("Overrides") + ".ContainerOverride." + std::to_string(dep1 + 1) + ".Command." + std::to_string(dep2 + 1), overrides.containerOverride[dep1].command[dep2]);
    }
  }
  setParameter(std::string("Overrides") + ".Cpu", std::to_string(overrides.cpu));
  for(int dep1 = 0; dep1 != overrides.customLimitPriorities.size(); dep1++) {
    setParameter(std::string("Overrides") + ".CustomLimitPriorities." + std::to_string(dep1 + 1) + ".VSwitchId", overrides.customLimitPriorities[dep1].vSwitchId);
    setParameter(std::string("Overrides") + ".CustomLimitPriorities." + std::to_string(dep1 + 1) + ".InstanceType", overrides.customLimitPriorities[dep1].instanceType);
  }
}

long ScaleWithAdjustmentRequest::getOwnerId() const {
  return ownerId_;
}

void ScaleWithAdjustmentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ScaleWithAdjustmentRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void ScaleWithAdjustmentRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::vector<std::string> ScaleWithAdjustmentRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ScaleWithAdjustmentRequest::setVSwitchId(const std::vector<std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
}

int ScaleWithAdjustmentRequest::getMinAdjustmentMagnitude() const {
  return minAdjustmentMagnitude_;
}

void ScaleWithAdjustmentRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude) {
  minAdjustmentMagnitude_ = minAdjustmentMagnitude;
  setParameter(std::string("MinAdjustmentMagnitude"), std::to_string(minAdjustmentMagnitude));
}

