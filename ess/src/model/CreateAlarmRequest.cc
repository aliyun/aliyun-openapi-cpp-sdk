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

#include <alibabacloud/ess/model/CreateAlarmRequest.h>

using AlibabaCloud::Ess::Model::CreateAlarmRequest;

CreateAlarmRequest::CreateAlarmRequest()
    : RpcServiceRequest("ess", "2014-08-28", "CreateAlarm") {
  setMethod(HttpRequest::Method::Post);
}

CreateAlarmRequest::~CreateAlarmRequest() {}

std::string CreateAlarmRequest::getMetricType() const {
  return metricType_;
}

void CreateAlarmRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

std::string CreateAlarmRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void CreateAlarmRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string CreateAlarmRequest::getDescription() const {
  return description_;
}

void CreateAlarmRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAlarmRequest::getExpressionsLogicOperator() const {
  return expressionsLogicOperator_;
}

void CreateAlarmRequest::setExpressionsLogicOperator(const std::string &expressionsLogicOperator) {
  expressionsLogicOperator_ = expressionsLogicOperator;
  setParameter(std::string("ExpressionsLogicOperator"), expressionsLogicOperator);
}

std::vector<std::string> CreateAlarmRequest::getAlarmAction() const {
  return alarmAction_;
}

void CreateAlarmRequest::setAlarmAction(const std::vector<std::string> &alarmAction) {
  alarmAction_ = alarmAction;
}

float CreateAlarmRequest::getThreshold() const {
  return threshold_;
}

void CreateAlarmRequest::setThreshold(float threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string CreateAlarmRequest::getEffective() const {
  return effective_;
}

void CreateAlarmRequest::setEffective(const std::string &effective) {
  effective_ = effective;
  setParameter(std::string("Effective"), effective);
}

std::string CreateAlarmRequest::getRegionId() const {
  return regionId_;
}

void CreateAlarmRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateAlarmRequest::getEvaluationCount() const {
  return evaluationCount_;
}

void CreateAlarmRequest::setEvaluationCount(int evaluationCount) {
  evaluationCount_ = evaluationCount;
  setParameter(std::string("EvaluationCount"), std::to_string(evaluationCount));
}

std::string CreateAlarmRequest::getMetricName() const {
  return metricName_;
}

void CreateAlarmRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

std::vector<CreateAlarmRequest::Dimension> CreateAlarmRequest::getDimension() const {
  return dimension_;
}

void CreateAlarmRequest::setDimension(const std::vector<CreateAlarmRequest::Dimension> &dimension) {
  dimension_ = dimension;
  for(int dep1 = 0; dep1 != dimension.size(); dep1++) {
  auto dimensionObj = dimension.at(dep1);
  std::string dimensionObjStr = std::string("Dimension") + "." + std::to_string(dep1 + 1);
    setParameter(dimensionObjStr + ".DimensionValue", dimensionObj.dimensionValue);
    setParameter(dimensionObjStr + ".DimensionKey", dimensionObj.dimensionKey);
  }
}

int CreateAlarmRequest::getPeriod() const {
  return period_;
}

void CreateAlarmRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::vector<CreateAlarmRequest::Expression> CreateAlarmRequest::getExpression() const {
  return expression_;
}

void CreateAlarmRequest::setExpression(const std::vector<CreateAlarmRequest::Expression> &expression) {
  expression_ = expression;
  for(int dep1 = 0; dep1 != expression.size(); dep1++) {
  auto expressionObj = expression.at(dep1);
  std::string expressionObjStr = std::string("Expression") + "." + std::to_string(dep1 + 1);
    setParameter(expressionObjStr + ".Period", std::to_string(expressionObj.period));
    setParameter(expressionObjStr + ".Threshold", std::to_string(expressionObj.threshold));
    setParameter(expressionObjStr + ".MetricName", expressionObj.metricName);
    setParameter(expressionObjStr + ".ComparisonOperator", expressionObj.comparisonOperator);
    setParameter(expressionObjStr + ".Statistics", expressionObj.statistics);
  }
}

std::string CreateAlarmRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAlarmRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateAlarmRequest::getGroupId() const {
  return groupId_;
}

void CreateAlarmRequest::setGroupId(int groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

long CreateAlarmRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAlarmRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAlarmRequest::getName() const {
  return name_;
}

void CreateAlarmRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateAlarmRequest::getComparisonOperator() const {
  return comparisonOperator_;
}

void CreateAlarmRequest::setComparisonOperator(const std::string &comparisonOperator) {
  comparisonOperator_ = comparisonOperator;
  setParameter(std::string("ComparisonOperator"), comparisonOperator);
}

std::string CreateAlarmRequest::getStatistics() const {
  return statistics_;
}

void CreateAlarmRequest::setStatistics(const std::string &statistics) {
  statistics_ = statistics;
  setParameter(std::string("Statistics"), statistics);
}

