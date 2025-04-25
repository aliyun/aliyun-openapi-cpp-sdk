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

#include <alibabacloud/ess/model/CreateScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::CreateScalingRuleRequest;

CreateScalingRuleRequest::CreateScalingRuleRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateScalingRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateScalingRuleRequest::~CreateScalingRuleRequest() {}

std::string CreateScalingRuleRequest::getMetricType() const {
  return metricType_;
}

void CreateScalingRuleRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

std::vector<CreateScalingRuleRequest::AlarmDimension> CreateScalingRuleRequest::getAlarmDimension() const {
  return alarmDimension_;
}

void CreateScalingRuleRequest::setAlarmDimension(const std::vector<CreateScalingRuleRequest::AlarmDimension> &alarmDimension) {
  alarmDimension_ = alarmDimension;
  for(int dep1 = 0; dep1 != alarmDimension.size(); dep1++) {
  auto alarmDimensionObj = alarmDimension.at(dep1);
  std::string alarmDimensionObjStr = std::string("AlarmDimension") + "." + std::to_string(dep1 + 1);
    setParameter(alarmDimensionObjStr + ".DimensionValue", alarmDimensionObj.dimensionValue);
    setParameter(alarmDimensionObjStr + ".DimensionKey", alarmDimensionObj.dimensionKey);
  }
}

std::vector<CreateScalingRuleRequest::StepAdjustment> CreateScalingRuleRequest::getStepAdjustment() const {
  return stepAdjustment_;
}

void CreateScalingRuleRequest::setStepAdjustment(const std::vector<CreateScalingRuleRequest::StepAdjustment> &stepAdjustment) {
  stepAdjustment_ = stepAdjustment;
  for(int dep1 = 0; dep1 != stepAdjustment.size(); dep1++) {
  auto stepAdjustmentObj = stepAdjustment.at(dep1);
  std::string stepAdjustmentObjStr = std::string("StepAdjustment") + "." + std::to_string(dep1 + 1);
    setParameter(stepAdjustmentObjStr + ".MetricIntervalUpperBound", std::to_string(stepAdjustmentObj.metricIntervalUpperBound));
    setParameter(stepAdjustmentObjStr + ".MetricIntervalLowerBound", std::to_string(stepAdjustmentObj.metricIntervalLowerBound));
    setParameter(stepAdjustmentObjStr + ".ScalingAdjustment", std::to_string(stepAdjustmentObj.scalingAdjustment));
  }
}

std::string CreateScalingRuleRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void CreateScalingRuleRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

bool CreateScalingRuleRequest::getDisableScaleIn() const {
  return disableScaleIn_;
}

void CreateScalingRuleRequest::setDisableScaleIn(bool disableScaleIn) {
  disableScaleIn_ = disableScaleIn;
  setParameter(std::string("DisableScaleIn"), disableScaleIn ? "true" : "false");
}

int CreateScalingRuleRequest::getInitialMaxSize() const {
  return initialMaxSize_;
}

void CreateScalingRuleRequest::setInitialMaxSize(int initialMaxSize) {
  initialMaxSize_ = initialMaxSize;
  setParameter(std::string("InitialMaxSize"), std::to_string(initialMaxSize));
}

std::string CreateScalingRuleRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateScalingRuleRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateScalingRuleRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void CreateScalingRuleRequest::setScalingRuleName(const std::string &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
  setParameter(std::string("ScalingRuleName"), scalingRuleName);
}

std::string CreateScalingRuleRequest::getHybridMonitorNamespace() const {
  return hybridMonitorNamespace_;
}

void CreateScalingRuleRequest::setHybridMonitorNamespace(const std::string &hybridMonitorNamespace) {
  hybridMonitorNamespace_ = hybridMonitorNamespace;
  setParameter(std::string("HybridMonitorNamespace"), hybridMonitorNamespace);
}

std::string CreateScalingRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateScalingRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateScalingRuleRequest::getCooldown() const {
  return cooldown_;
}

void CreateScalingRuleRequest::setCooldown(int cooldown) {
  cooldown_ = cooldown;
  setParameter(std::string("Cooldown"), std::to_string(cooldown));
}

std::string CreateScalingRuleRequest::getPredictiveValueBehavior() const {
  return predictiveValueBehavior_;
}

void CreateScalingRuleRequest::setPredictiveValueBehavior(const std::string &predictiveValueBehavior) {
  predictiveValueBehavior_ = predictiveValueBehavior;
  setParameter(std::string("PredictiveValueBehavior"), predictiveValueBehavior);
}

int CreateScalingRuleRequest::getScaleInEvaluationCount() const {
  return scaleInEvaluationCount_;
}

void CreateScalingRuleRequest::setScaleInEvaluationCount(int scaleInEvaluationCount) {
  scaleInEvaluationCount_ = scaleInEvaluationCount;
  setParameter(std::string("ScaleInEvaluationCount"), std::to_string(scaleInEvaluationCount));
}

std::string CreateScalingRuleRequest::getScalingRuleType() const {
  return scalingRuleType_;
}

void CreateScalingRuleRequest::setScalingRuleType(const std::string &scalingRuleType) {
  scalingRuleType_ = scalingRuleType;
  setParameter(std::string("ScalingRuleType"), scalingRuleType);
}

std::string CreateScalingRuleRequest::getMetricName() const {
  return metricName_;
}

void CreateScalingRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::string CreateScalingRuleRequest::getPredictiveScalingMode() const {
  return predictiveScalingMode_;
}

void CreateScalingRuleRequest::setPredictiveScalingMode(const std::string &predictiveScalingMode) {
  predictiveScalingMode_ = predictiveScalingMode;
  setParameter(std::string("PredictiveScalingMode"), predictiveScalingMode);
}

std::string CreateScalingRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateScalingRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateScalingRuleRequest::getAdjustmentValue() const {
  return adjustmentValue_;
}

void CreateScalingRuleRequest::setAdjustmentValue(int adjustmentValue) {
  adjustmentValue_ = adjustmentValue;
  setParameter(std::string("AdjustmentValue"), std::to_string(adjustmentValue));
}

int CreateScalingRuleRequest::getEstimatedInstanceWarmup() const {
  return estimatedInstanceWarmup_;
}

void CreateScalingRuleRequest::setEstimatedInstanceWarmup(int estimatedInstanceWarmup) {
  estimatedInstanceWarmup_ = estimatedInstanceWarmup;
  setParameter(std::string("EstimatedInstanceWarmup"), std::to_string(estimatedInstanceWarmup));
}

std::string CreateScalingRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateScalingRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateScalingRuleRequest::getPredictiveTaskBufferTime() const {
  return predictiveTaskBufferTime_;
}

void CreateScalingRuleRequest::setPredictiveTaskBufferTime(int predictiveTaskBufferTime) {
  predictiveTaskBufferTime_ = predictiveTaskBufferTime;
  setParameter(std::string("PredictiveTaskBufferTime"), std::to_string(predictiveTaskBufferTime));
}

std::string CreateScalingRuleRequest::getAdjustmentType() const {
  return adjustmentType_;
}

void CreateScalingRuleRequest::setAdjustmentType(const std::string &adjustmentType) {
  adjustmentType_ = adjustmentType;
  setParameter(std::string("AdjustmentType"), adjustmentType);
}

long CreateScalingRuleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateScalingRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateScalingRuleRequest::getPredictiveValueBuffer() const {
  return predictiveValueBuffer_;
}

void CreateScalingRuleRequest::setPredictiveValueBuffer(int predictiveValueBuffer) {
  predictiveValueBuffer_ = predictiveValueBuffer;
  setParameter(std::string("PredictiveValueBuffer"), std::to_string(predictiveValueBuffer));
}

std::vector<CreateScalingRuleRequest::HybridMetrics> CreateScalingRuleRequest::getHybridMetrics() const {
  return hybridMetrics_;
}

void CreateScalingRuleRequest::setHybridMetrics(const std::vector<CreateScalingRuleRequest::HybridMetrics> &hybridMetrics) {
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

int CreateScalingRuleRequest::getScaleOutEvaluationCount() const {
  return scaleOutEvaluationCount_;
}

void CreateScalingRuleRequest::setScaleOutEvaluationCount(int scaleOutEvaluationCount) {
  scaleOutEvaluationCount_ = scaleOutEvaluationCount;
  setParameter(std::string("ScaleOutEvaluationCount"), std::to_string(scaleOutEvaluationCount));
}

int CreateScalingRuleRequest::getMinAdjustmentMagnitude() const {
  return minAdjustmentMagnitude_;
}

void CreateScalingRuleRequest::setMinAdjustmentMagnitude(int minAdjustmentMagnitude) {
  minAdjustmentMagnitude_ = minAdjustmentMagnitude;
  setParameter(std::string("MinAdjustmentMagnitude"), std::to_string(minAdjustmentMagnitude));
}

float CreateScalingRuleRequest::getTargetValue() const {
  return targetValue_;
}

void CreateScalingRuleRequest::setTargetValue(float targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), std::to_string(targetValue));
}

