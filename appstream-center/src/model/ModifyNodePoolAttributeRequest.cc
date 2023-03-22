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

#include <alibabacloud/appstream-center/model/ModifyNodePoolAttributeRequest.h>

using AlibabaCloud::Appstream_center::Model::ModifyNodePoolAttributeRequest;

ModifyNodePoolAttributeRequest::ModifyNodePoolAttributeRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ModifyNodePoolAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNodePoolAttributeRequest::~ModifyNodePoolAttributeRequest() {}

std::string ModifyNodePoolAttributeRequest::getBizRegionId() const {
  return bizRegionId_;
}

void ModifyNodePoolAttributeRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setBodyParameter(std::string("BizRegionId"), bizRegionId);
}

std::string ModifyNodePoolAttributeRequest::getProductType() const {
  return productType_;
}

void ModifyNodePoolAttributeRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string ModifyNodePoolAttributeRequest::getPoolId() const {
  return poolId_;
}

void ModifyNodePoolAttributeRequest::setPoolId(const std::string &poolId) {
  poolId_ = poolId;
  setBodyParameter(std::string("PoolId"), poolId);
}

ModifyNodePoolAttributeRequest::NodePoolStrategy ModifyNodePoolAttributeRequest::getNodePoolStrategy() const {
  return nodePoolStrategy_;
}

void ModifyNodePoolAttributeRequest::setNodePoolStrategy(const ModifyNodePoolAttributeRequest::NodePoolStrategy &nodePoolStrategy) {
  nodePoolStrategy_ = nodePoolStrategy;
  for(int dep1 = 0; dep1 != nodePoolStrategy.recurrenceSchedules.size(); dep1++) {
    for(int dep2 = 0; dep2 != nodePoolStrategy.recurrenceSchedules[dep1].recurrenceValues.size(); dep2++) {
      setBodyParameter(std::string("NodePoolStrategy") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".RecurrenceValues." + std::to_string(dep2 + 1), std::to_string(nodePoolStrategy.recurrenceSchedules[dep1].recurrenceValues[dep2]));
    }
    setBodyParameter(std::string("NodePoolStrategy") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".RecurrenceType", nodePoolStrategy.recurrenceSchedules[dep1].recurrenceType);
    for(int dep2 = 0; dep2 != nodePoolStrategy.recurrenceSchedules[dep1].timerPeriods.size(); dep2++) {
      setBodyParameter(std::string("NodePoolStrategy") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".Amount", std::to_string(nodePoolStrategy.recurrenceSchedules[dep1].timerPeriods[dep2].amount));
      setBodyParameter(std::string("NodePoolStrategy") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".EndTime", nodePoolStrategy.recurrenceSchedules[dep1].timerPeriods[dep2].endTime);
      setBodyParameter(std::string("NodePoolStrategy") + ".RecurrenceSchedules." + std::to_string(dep1 + 1) + ".TimerPeriods." + std::to_string(dep2 + 1) + ".StartTime", nodePoolStrategy.recurrenceSchedules[dep1].timerPeriods[dep2].startTime);
    }
  }
  setBodyParameter(std::string("NodePoolStrategy") + ".ScalingStep", std::to_string(nodePoolStrategy.scalingStep));
  setBodyParameter(std::string("NodePoolStrategy") + ".StrategyDisableDate", nodePoolStrategy.strategyDisableDate);
  setBodyParameter(std::string("NodePoolStrategy") + ".ScalingDownAfterIdleMinutes", std::to_string(nodePoolStrategy.scalingDownAfterIdleMinutes));
  setBodyParameter(std::string("NodePoolStrategy") + ".StrategyType", nodePoolStrategy.strategyType);
  setBodyParameter(std::string("NodePoolStrategy") + ".MaxScalingAmount", std::to_string(nodePoolStrategy.maxScalingAmount));
  setBodyParameter(std::string("NodePoolStrategy") + ".WarmUp", nodePoolStrategy.warmUp ? "true" : "false");
  setBodyParameter(std::string("NodePoolStrategy") + ".ScalingUsageThreshold", nodePoolStrategy.scalingUsageThreshold);
  setBodyParameter(std::string("NodePoolStrategy") + ".StrategyEnableDate", nodePoolStrategy.strategyEnableDate);
}

int ModifyNodePoolAttributeRequest::getNodeCapacity() const {
  return nodeCapacity_;
}

void ModifyNodePoolAttributeRequest::setNodeCapacity(int nodeCapacity) {
  nodeCapacity_ = nodeCapacity;
  setBodyParameter(std::string("NodeCapacity"), std::to_string(nodeCapacity));
}

