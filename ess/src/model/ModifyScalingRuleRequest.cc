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

#include <alibabacloud/ess/model/ModifyScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::ModifyScalingRuleRequest;

ModifyScalingRuleRequest::ModifyScalingRuleRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ModifyScalingRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScalingRuleRequest::~ModifyScalingRuleRequest() {}

std::string ModifyScalingRuleRequest::getMetricType() const {
  return metricType_;
}

void ModifyScalingRuleRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

long ModifyScalingRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyScalingRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<ModifyScalingRuleRequest::AlarmDimension> ModifyScalingRuleRequest::getAlarmDimension() const {
  return alarmDimension_;
}

void ModifyScalingRuleRequest::setAlarmDimension(const std::vector<ModifyScalingRuleRequest::AlarmDimension> &alarmDimension) {
  alarmDimension_ = alarmDimension;
  for(int dep1 = 0; dep1 != alarmDimension.size(); dep1++) {
  auto alarmDimensionObj = alarmDimension.at(dep1);
  std::string alarmDimensionObjStr = std::string("AlarmDimension") + "." + std::to_string(dep1 + 1);
    setParameter(alarmDimensionObjStr + ".DimensionValue", alarmDimensionObj.dimensionValue);
    setParameter(alarmDimensionObjStr + ".DimensionKey", alarmDimensionObj.dimensionKey);
  }
}

std::vector<ModifyScalingRuleRequest::StepAdjustment> ModifyScalingRuleRequest::getStepAdjustment() const {
  return stepAdjustment_;
}

void ModifyScalingRuleRequest::setStepAdjustment(const std::vector<ModifyScalingRuleRequest::StepAdjustment> &stepAdjustment) {
  stepAdjustment_ = stepAdjustment;
  for(int dep1 = 0; dep1 != stepAdjustment.size(); dep1++) {
  auto stepAdjustmentObj = stepAdjustment.at(dep1);
  std::string stepAdjustmentObjStr = std::string("StepAdjustment") + "." + std::to_string(dep1 + 1);
    setParameter(stepAdjustmentObjStr + ".MetricIntervalUpperBound", std::to_string(stepAdjustmentObj.metricIntervalUpperBound));
    setParameter(stepAdjustmentObjStr + ".MetricIntervalLowerBound", std::to_string(stepAdjustmentObj.metricIntervalLowerBound));
    setParameter(stepAdjustmentObjStr + ".ScalingAdjustment", std::to_string(stepAdjustmentObj.scalingAdjustment));
  }
}

bool ModifyScalingRuleRequest::getDisableScaleIn() const {
  return disableScaleIn_;
}

void ModifyScalingRuleRequest::setDisableScaleIn(bool disableScaleIn) {
  disableScaleIn_ = disableScaleIn;
  setParameter(std::string("DisableScaleIn"), disableScaleIn ? "true" : "false");
}

std::string ModifyScalingRuleRequest::getScalingRuleId() const {
  return scalingRuleId_;
}

void ModifyScalingRuleRequest::setScalingRuleId(const std::string &scalingRuleId) {
  scalingRuleId_ = scalingRuleId;
  setParameter(std::string("ScalingRuleId"), scalingRuleId);
}

int ModifyScalingRuleRequest::getInitialMaxSize() const {
  return initialMaxSize_;
}

void ModifyScalingRuleRequest::setInitialMaxSize(int initialMaxSize) {
  initialMaxSize_ = initialMaxSize;
  setParameter(std::string("InitialMaxSize"), std::to_string(initialMaxSize));
}

std::string ModifyScalingRuleRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyScalingRuleRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyScalingRuleRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void ModifyScalingRuleRequest::setScalingRuleName(const std::string &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
  setParameter(std::string("ScalingRuleName"), scalingRuleName);
}

std::string ModifyScalingRuleRequest::getHybridMonitorNamespace() const {
  return hybridMonitorNamespace_;
}

void ModifyScalingRuleRequest::setHybridMonitorNamespace(const std::string &hybridMonitorNamespace) {
  hybridMonitorNamespace_ = hybridMonitorNamespace;
  setParameter(std::string("HybridMonitorNamespace"), hybridMonitorNamespace);
}

int ModifyScalingRuleRequest::getCooldown() const {
  return cooldown_;
}

void ModifyScalingRuleRequest::setCooldown(int cooldown) {
  cooldown_ = cooldown;
  setParameter(std::string("Cooldown"), std::to_string(cooldown));
}

std::string ModifyScalingRuleRequest::getPredictiveValueBehavior() const {
  return predictiveValueBehavior_;
}

void ModifyScalingRuleRequest::setPredictiveValueBehavior(const std::string &predictiveValueBehavior) {
  predictiveValueBehavior_ = predictiveValueBehavior;
  setParameter(std::string("PredictiveValueBehavior"), predictiveValueBehavior);
}

int ModifyScalingRuleRequest::getScaleInEvaluationCount() const {
  return scaleInEvaluationCount_;
}

void ModifyScalingRuleRequest::setScaleInEvaluationCount(int scaleInEvaluationCount) {
  scaleInEvaluationCount_ = scaleInEvaluationCount;
  setParameter(std::string("ScaleInEvaluationCount"), std::to_string(scaleInEvaluationCount));
}

std::string ModifyScalingRuleRequest::getMetricName() const {
  return metricName_;
}

void ModifyScalingRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string ModifyScalingRuleRequest::getPredictiveScalingMode() const {
  return predictiveScalingMode_;
}

void ModifyScalingRuleRequest::setPredictiveScalingMode(const std::string &predictiveScalingMode) {
  predictiveScalingMode_ = predictiveScalingMode;
  setParameter(std::string("PredictiveScalingMode"), predictiveScalingMode);
}

std::string ModifyScalingRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyScalingRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyScalingRuleRequest::getAdjustmentValue() const {
  return adjustmentValue_;
}

void ModifyScalingRuleRequest::setAdjustmentValue(int adjustmentValue) {
  adjustmentValue_ = adjustmentValue;
  setParameter(std::string("AdjustmentValue"), std::to_string(adjustmentValue));
}

int ModifyScalingRuleRequest::getEstimatedInstanceWarmup() const {
  return estimatedInstanceWarmup_;
}

void ModifyScalingRuleRequest::setEstimatedInstanceWarmup(int estimatedInstanceWarmup) {
  estimatedInstanceWarmup_ = estimatedInstanceWarmup;
  setParameter(std::string("EstimatedInstanceWarmup"), std::to_string(estimatedInstanceWarmup));
}

std::string ModifyScalingRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyScalingRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyScalingRuleRequest::getPredictiveTaskBufferTime() const {
  return predictiveTaskBufferTime_;
}

void ModifyScalingRuleRequest::setPredictiveTaskBufferTime(int predictiveTaskBufferTime) {
  predictiveTaskBufferTime_ = predictiveTaskBufferTime;
  setParameter(std::string("PredictiveTaskBufferTime"), std::to_string(predictiveTaskBufferTime));
}

std::string ModifyScalingRuleRequest::getAdjustmentType() const {
  return adjustmentType_;
}

void ModifyScalingRuleRequest::setAdjustmentType(const std::string &adjustmentType) {
  adjustmentType_ = adjustmentType;
  setParameter(std::string("AdjustmentType"), adjustmentType);
}

long ModifyScalingRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyScalingRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyScalingRuleRequest::getPredictiveValueBuffer() const {
  return predictiveValueBuffer_;
}

void ModifyScalingRuleRequest::setPredictiveValueBuffer(int predictiveValueBuffer) {
  predictiveValueBuffer_ = predictiveValueBuffer;
  setParameter(std::string("PredictiveValueBuffer"), std::to_string(predictiveValueBuffer));
}

std::vector<ModifyScalingRuleRequest::HybridMetrics> ModifyScalingRuleRequest::getHybridMetrics() const {
  return hybridMetrics_;
}

void ModifyScalingRuleRequest::setHybridMetrics(const std::vector<ModifyScalingRuleRequest::HybridMetrics> &hybridMetrics) {
  hybridMetrics_ = hybridMetrics;
  for(int dep1 = 0; dep1 != hybridMetrics.size(); dep1++) {
  auto hybridMetricsObj = hybridMetrics.at(dep1);
  std::string hybridMetricsObjStr = std::string("HybridMetrics") + "." + std::to_string(dep1 + 1);
    setParameter(hybridMetricsObjStr + ".Statistic", hybridMetricsObj.statistic);
    setParameter(hybridMetricsObjStr + ".Expression", hybridMetricsObj.expression);
    setParameter(hybridMetricsObjStr + ".Id", hybridMetricsObj.id);
    setParameter(hybridMetricsObjStr + ".MetricName", hybridMetricsObj.metricName);
    for(int dep2 = 0; dep2 != hybridMetricsObj.dimensions.size(); dep2++) {
    auto dimensionsObj = hybridMetricsObj.dimensions.at(dep2);
    std::string dimensionsObjStr = hybridMetricsObjStr + ".Dimensions" + "." + std::to_string(dep2 + 1);
      setParameter(dimensionsObjStr + ".DimensionValue", dimensionsObj.dimensionValue);
      setParameter(dimensionsObjStr + ".DimensionKey", dimensionsObj.dimensionKey);
    }
  }
}

int ModifyScalingRuleRequest::getScaleOutEvaluationCount() const {
  return scaleOutEvaluationCount_;
}

void ModifyScalingRuleRequest::setScaleOutEvaluationCount(int scaleOutEvaluationCount) {
  scaleOutEvaluationCount_ = scaleOutEvaluationCount;
  setParameter(std::string("ScaleOutEvaluationCount"), std::to_string(scaleOutEvaluationCount));
}

int ModifyScalingRuleRequest::getMinAdjustmentMagnitude() const {
  return minAdjustmentMagnitude_;
}

void ModifyScalingRuleRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude) {
  minAdjustmentMagnitude_ = minAdjustmentMagnitude;
  setParameter(std::string("MinAdjustmentMagnitude"), std::to_string(minAdjustmentMagnitude));
}

float ModifyScalingRuleRequest::getTargetValue() const {
  return targetValue_;
}

void ModifyScalingRuleRequest::setTargetValue(float targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), std::to_string(targetValue));
}

