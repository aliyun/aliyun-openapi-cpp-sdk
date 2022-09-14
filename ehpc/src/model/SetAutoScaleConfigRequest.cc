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
    : RpcServiceRequest("ehpc", "2017-07-14", "SetAutoScaleConfig") {
  setMethod(HttpRequest::Method::Get);
}

SetAutoScaleConfigRequest::~SetAutoScaleConfigRequest() {}

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

int SetAutoScaleConfigRequest::getMaxNodesInCluster() const {
  return maxNodesInCluster_;
}

void SetAutoScaleConfigRequest::setMaxNodesInCluster(int maxNodesInCluster) {
  maxNodesInCluster_ = maxNodesInCluster;
  setParameter(std::string("MaxNodesInCluster"), std::to_string(maxNodesInCluster));
}

int SetAutoScaleConfigRequest::getShrinkIntervalInMinutes() const {
  return shrinkIntervalInMinutes_;
}

void SetAutoScaleConfigRequest::setShrinkIntervalInMinutes(int shrinkIntervalInMinutes) {
  shrinkIntervalInMinutes_ = shrinkIntervalInMinutes;
  setParameter(std::string("ShrinkIntervalInMinutes"), std::to_string(shrinkIntervalInMinutes));
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

