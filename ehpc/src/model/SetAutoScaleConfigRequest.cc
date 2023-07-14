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

#include <alibabacloud/ehpc/model/SetAutoScaleConfigRequest.h>

using AlibabaCloud::EHPC::Model::SetAutoScaleConfigRequest;

SetAutoScaleConfigRequest::SetAutoScaleConfigRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "SetAutoScaleConfig") {
  setMethod(HttpRequest::Method::Get);
}

SetAutoScaleConfigRequest::~SetAutoScaleConfigRequest() {}

std::string SetAutoScaleConfigRequest::getImageId() const {
  return imageId_;
}

void SetAutoScaleConfigRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string SetAutoScaleConfigRequest::getDnsConfig() const {
  return dnsConfig_;
}

void SetAutoScaleConfigRequest::setDnsConfig(const std::string &dnsConfig) {
  dnsConfig_ = dnsConfig;
  setParameter(std::string("DnsConfig"), dnsConfig);
}

float SetAutoScaleConfigRequest::getSpotPriceLimit() const {
  return spotPriceLimit_;
}

void SetAutoScaleConfigRequest::setSpotPriceLimit(float spotPriceLimit) {
  spotPriceLimit_ = spotPriceLimit;
  setParameter(std::string("SpotPriceLimit"), std::to_string(spotPriceLimit));
}

std::string SetAutoScaleConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetAutoScaleConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetAutoScaleConfigRequest::getExcludeNodes() const {
  return excludeNodes_;
}

void SetAutoScaleConfigRequest::setExcludeNodes(const std::string &excludeNodes) {
  excludeNodes_ = excludeNodes;
  setParameter(std::string("ExcludeNodes"), excludeNodes);
}

int SetAutoScaleConfigRequest::getExtraNodesGrowRatio() const {
  return extraNodesGrowRatio_;
}

void SetAutoScaleConfigRequest::setExtraNodesGrowRatio(int extraNodesGrowRatio) {
  extraNodesGrowRatio_ = extraNodesGrowRatio;
  setParameter(std::string("ExtraNodesGrowRatio"), std::to_string(extraNodesGrowRatio));
}

int SetAutoScaleConfigRequest::getShrinkIdleTimes() const {
  return shrinkIdleTimes_;
}

void SetAutoScaleConfigRequest::setShrinkIdleTimes(int shrinkIdleTimes) {
  shrinkIdleTimes_ = shrinkIdleTimes;
  setParameter(std::string("ShrinkIdleTimes"), std::to_string(shrinkIdleTimes));
}

int SetAutoScaleConfigRequest::getGrowTimeoutInMinutes() const {
  return growTimeoutInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowTimeoutInMinutes(int growTimeoutInMinutes) {
  growTimeoutInMinutes_ = growTimeoutInMinutes;
  setParameter(std::string("GrowTimeoutInMinutes"), std::to_string(growTimeoutInMinutes));
}

std::string SetAutoScaleConfigRequest::getClusterId() const {
  return clusterId_;
}

void SetAutoScaleConfigRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool SetAutoScaleConfigRequest::getEnableAutoGrow() const {
  return enableAutoGrow_;
}

void SetAutoScaleConfigRequest::setEnableAutoGrow(bool enableAutoGrow) {
  enableAutoGrow_ = enableAutoGrow;
  setParameter(std::string("EnableAutoGrow"), enableAutoGrow ? "true" : "false");
}

bool SetAutoScaleConfigRequest::getEnableAutoShrink() const {
  return enableAutoShrink_;
}

void SetAutoScaleConfigRequest::setEnableAutoShrink(bool enableAutoShrink) {
  enableAutoShrink_ = enableAutoShrink;
  setParameter(std::string("EnableAutoShrink"), enableAutoShrink ? "true" : "false");
}

std::string SetAutoScaleConfigRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void SetAutoScaleConfigRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

int SetAutoScaleConfigRequest::getMaxNodesInCluster() const {
  return maxNodesInCluster_;
}

void SetAutoScaleConfigRequest::setMaxNodesInCluster(int maxNodesInCluster) {
  maxNodesInCluster_ = maxNodesInCluster;
  setParameter(std::string("MaxNodesInCluster"), std::to_string(maxNodesInCluster));
}

bool SetAutoScaleConfigRequest::getComputeEnableHt() const {
  return computeEnableHt_;
}

void SetAutoScaleConfigRequest::setComputeEnableHt(bool computeEnableHt) {
  computeEnableHt_ = computeEnableHt;
  setParameter(std::string("ComputeEnableHt"), computeEnableHt ? "true" : "false");
}

int SetAutoScaleConfigRequest::getShrinkIntervalInMinutes() const {
  return shrinkIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setShrinkIntervalInMinutes(int shrinkIntervalInMinutes) {
  shrinkIntervalInMinutes_ = shrinkIntervalInMinutes;
  setParameter(std::string("ShrinkIntervalInMinutes"), std::to_string(shrinkIntervalInMinutes));
}

std::vector<SetAutoScaleConfigRequest::Queues> SetAutoScaleConfigRequest::getQueues() const {
  return queues_;
}

void SetAutoScaleConfigRequest::setQueues(const std::vector<SetAutoScaleConfigRequest::Queues> &queues) {
  queues_ = queues;
  for(int dep1 = 0; dep1 != queues.size(); dep1++) {
  auto queuesObj = queues.at(dep1);
  std::string queuesObjStr = std::string("Queues") + "." + std::to_string(dep1 + 1);
    setParameter(queuesObjStr + ".QueueName", queuesObj.queueName);
    setParameter(queuesObjStr + ".SystemDiskLevel", queuesObj.systemDiskLevel);
    setParameter(queuesObjStr + ".SortedByInventory", queuesObj.sortedByInventory ? "true" : "false");
    for(int dep2 = 0; dep2 != queuesObj.instanceTypes.size(); dep2++) {
    auto instanceTypesObj = queuesObj.instanceTypes.at(dep2);
    std::string instanceTypesObjStr = queuesObjStr + ".InstanceTypes" + "." + std::to_string(dep2 + 1);
      setParameter(instanceTypesObjStr + ".VSwitchId", instanceTypesObj.vSwitchId);
      setParameter(instanceTypesObjStr + ".SpotStrategy", instanceTypesObj.spotStrategy);
      setParameter(instanceTypesObjStr + ".SpotInterruptionBehavior", instanceTypesObj.spotInterruptionBehavior);
      setParameter(instanceTypesObjStr + ".ZoneId", instanceTypesObj.zoneId);
      setParameter(instanceTypesObjStr + ".InstanceType", instanceTypesObj.instanceType);
      setParameter(instanceTypesObjStr + ".SpotPriceLimit", std::to_string(instanceTypesObj.spotPriceLimit));
      setParameter(instanceTypesObjStr + ".SpotDuration", std::to_string(instanceTypesObj.spotDuration));
    }
    setParameter(queuesObjStr + ".EnableAutoGrow", queuesObj.enableAutoGrow ? "true" : "false");
    setParameter(queuesObjStr + ".HostNameSuffix", queuesObj.hostNameSuffix);
    setParameter(queuesObjStr + ".SpotPriceLimit", std::to_string(queuesObj.spotPriceLimit));
    setParameter(queuesObjStr + ".EnableAutoShrink", queuesObj.enableAutoShrink ? "true" : "false");
    setParameter(queuesObjStr + ".SpotStrategy", queuesObj.spotStrategy);
    for(int dep2 = 0; dep2 != queuesObj.dataDisks.size(); dep2++) {
    auto dataDisksObj = queuesObj.dataDisks.at(dep2);
    std::string dataDisksObjStr = queuesObjStr + ".DataDisks" + "." + std::to_string(dep2 + 1);
      setParameter(dataDisksObjStr + ".DataDiskDeleteWithInstance", dataDisksObj.dataDiskDeleteWithInstance ? "true" : "false");
      setParameter(dataDisksObjStr + ".DataDiskEncrypted", dataDisksObj.dataDiskEncrypted ? "true" : "false");
      setParameter(dataDisksObjStr + ".DataDiskKMSKeyId", dataDisksObj.dataDiskKMSKeyId);
      setParameter(dataDisksObjStr + ".DataDiskSize", std::to_string(dataDisksObj.dataDiskSize));
      setParameter(dataDisksObjStr + ".DataDiskCategory", dataDisksObj.dataDiskCategory);
      setParameter(dataDisksObjStr + ".DataDiskPerformanceLevel", dataDisksObj.dataDiskPerformanceLevel);
    }
    setParameter(queuesObjStr + ".MinNodesInQueue", std::to_string(queuesObj.minNodesInQueue));
    setParameter(queuesObjStr + ".MaxNodesPerCycle", std::to_string(queuesObj.maxNodesPerCycle));
    setParameter(queuesObjStr + ".SystemDiskCategory", queuesObj.systemDiskCategory);
    setParameter(queuesObjStr + ".MaxNodesInQueue", std::to_string(queuesObj.maxNodesInQueue));
    setParameter(queuesObjStr + ".SystemDiskSize", std::to_string(queuesObj.systemDiskSize));
    setParameter(queuesObjStr + ".QueueImageId", queuesObj.queueImageId);
    setParameter(queuesObjStr + ".InstanceType", queuesObj.instanceType);
    setParameter(queuesObjStr + ".HostNamePrefix", queuesObj.hostNamePrefix);
    setParameter(queuesObjStr + ".MinNodesPerCycle", std::to_string(queuesObj.minNodesPerCycle));
  }
}

int SetAutoScaleConfigRequest::getGrowIntervalInMinutes() const {
  return growIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setGrowIntervalInMinutes(int growIntervalInMinutes) {
  growIntervalInMinutes_ = growIntervalInMinutes;
  setParameter(std::string("GrowIntervalInMinutes"), std::to_string(growIntervalInMinutes));
}

int SetAutoScaleConfigRequest::getGrowRatio() const {
  return growRatio_;
}

void SetAutoScaleConfigRequest::setGrowRatio(int growRatio) {
  growRatio_ = growRatio;
  setParameter(std::string("GrowRatio"), std::to_string(growRatio));
}

