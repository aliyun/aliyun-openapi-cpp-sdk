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

#include <alibabacloud/dataworks-public/model/CreateQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateQualityRuleRequest;

CreateQualityRuleRequest::CreateQualityRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateQualityRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateQualityRuleRequest::~CreateQualityRuleRequest() {}

std::string CreateQualityRuleRequest::getTaskSetting() const {
  return taskSetting_;
}

void CreateQualityRuleRequest::setTaskSetting(const std::string &taskSetting) {
  taskSetting_ = taskSetting;
  setBodyParameter(std::string("TaskSetting"), taskSetting);
}

std::string CreateQualityRuleRequest::getTrend() const {
  return trend_;
}

void CreateQualityRuleRequest::setTrend(const std::string &trend) {
  trend_ = trend;
  setBodyParameter(std::string("Trend"), trend);
}

int CreateQualityRuleRequest::getBlockType() const {
  return blockType_;
}

void CreateQualityRuleRequest::setBlockType(int blockType) {
  blockType_ = blockType;
  setBodyParameter(std::string("BlockType"), std::to_string(blockType));
}

std::string CreateQualityRuleRequest::getPropertyType() const {
  return propertyType_;
}

void CreateQualityRuleRequest::setPropertyType(const std::string &propertyType) {
  propertyType_ = propertyType;
  setBodyParameter(std::string("PropertyType"), propertyType);
}

long CreateQualityRuleRequest::getEntityId() const {
  return entityId_;
}

void CreateQualityRuleRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

std::string CreateQualityRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateQualityRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

int CreateQualityRuleRequest::getChecker() const {
  return checker_;
}

void CreateQualityRuleRequest::setChecker(int checker) {
  checker_ = checker;
  setBodyParameter(std::string("Checker"), std::to_string(checker));
}

std::string CreateQualityRuleRequest::get_Operator() const {
  return _operator_;
}

void CreateQualityRuleRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setBodyParameter(std::string("Operator"), _operator);
}

std::string CreateQualityRuleRequest::getProperty() const {
  return property_;
}

void CreateQualityRuleRequest::setProperty(const std::string &property) {
  property_ = property;
  setBodyParameter(std::string("Property"), property);
}

std::string CreateQualityRuleRequest::getWarningThreshold() const {
  return warningThreshold_;
}

void CreateQualityRuleRequest::setWarningThreshold(const std::string &warningThreshold) {
  warningThreshold_ = warningThreshold;
  setBodyParameter(std::string("WarningThreshold"), warningThreshold);
}

long CreateQualityRuleRequest::getProjectId() const {
  return projectId_;
}

void CreateQualityRuleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateQualityRuleRequest::getMethodName() const {
  return methodName_;
}

void CreateQualityRuleRequest::setMethodName(const std::string &methodName) {
  methodName_ = methodName;
  setBodyParameter(std::string("MethodName"), methodName);
}

std::string CreateQualityRuleRequest::getProjectName() const {
  return projectName_;
}

void CreateQualityRuleRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

int CreateQualityRuleRequest::getRuleType() const {
  return ruleType_;
}

void CreateQualityRuleRequest::setRuleType(int ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), std::to_string(ruleType));
}

int CreateQualityRuleRequest::getTemplateId() const {
  return templateId_;
}

void CreateQualityRuleRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string CreateQualityRuleRequest::getExpectValue() const {
  return expectValue_;
}

void CreateQualityRuleRequest::setExpectValue(const std::string &expectValue) {
  expectValue_ = expectValue;
  setBodyParameter(std::string("ExpectValue"), expectValue);
}

std::string CreateQualityRuleRequest::getWhereCondition() const {
  return whereCondition_;
}

void CreateQualityRuleRequest::setWhereCondition(const std::string &whereCondition) {
  whereCondition_ = whereCondition;
  setBodyParameter(std::string("WhereCondition"), whereCondition);
}

std::string CreateQualityRuleRequest::getCriticalThreshold() const {
  return criticalThreshold_;
}

void CreateQualityRuleRequest::setCriticalThreshold(const std::string &criticalThreshold) {
  criticalThreshold_ = criticalThreshold;
  setBodyParameter(std::string("CriticalThreshold"), criticalThreshold);
}

std::string CreateQualityRuleRequest::getComment() const {
  return comment_;
}

void CreateQualityRuleRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

int CreateQualityRuleRequest::getPredictType() const {
  return predictType_;
}

void CreateQualityRuleRequest::setPredictType(int predictType) {
  predictType_ = predictType;
  setBodyParameter(std::string("PredictType"), std::to_string(predictType));
}

