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

#include <alibabacloud/dataworks-public/model/UpdateQualityRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateQualityRuleRequest;

UpdateQualityRuleRequest::UpdateQualityRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateQualityRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateQualityRuleRequest::~UpdateQualityRuleRequest() {}

std::string UpdateQualityRuleRequest::getTaskSetting() const {
  return taskSetting_;
}

void UpdateQualityRuleRequest::setTaskSetting(const std::string &taskSetting) {
  taskSetting_ = taskSetting;
  setBodyParameter(std::string("TaskSetting"), taskSetting);
}

std::string UpdateQualityRuleRequest::getTrend() const {
  return trend_;
}

void UpdateQualityRuleRequest::setTrend(const std::string &trend) {
  trend_ = trend;
  setBodyParameter(std::string("Trend"), trend);
}

int UpdateQualityRuleRequest::getBlockType() const {
  return blockType_;
}

void UpdateQualityRuleRequest::setBlockType(int blockType) {
  blockType_ = blockType;
  setBodyParameter(std::string("BlockType"), std::to_string(blockType));
}

std::string UpdateQualityRuleRequest::getPropertyType() const {
  return propertyType_;
}

void UpdateQualityRuleRequest::setPropertyType(const std::string &propertyType) {
  propertyType_ = propertyType;
  setBodyParameter(std::string("PropertyType"), propertyType);
}

long UpdateQualityRuleRequest::getEntityId() const {
  return entityId_;
}

void UpdateQualityRuleRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

std::string UpdateQualityRuleRequest::getRuleName() const {
  return ruleName_;
}

void UpdateQualityRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

int UpdateQualityRuleRequest::getChecker() const {
  return checker_;
}

void UpdateQualityRuleRequest::setChecker(int checker) {
  checker_ = checker;
  setBodyParameter(std::string("Checker"), std::to_string(checker));
}

std::string UpdateQualityRuleRequest::get_Operator() const {
  return _operator_;
}

void UpdateQualityRuleRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setBodyParameter(std::string("Operator"), _operator);
}

std::string UpdateQualityRuleRequest::getProperty() const {
  return property_;
}

void UpdateQualityRuleRequest::setProperty(const std::string &property) {
  property_ = property;
  setBodyParameter(std::string("Property"), property);
}

long UpdateQualityRuleRequest::getId() const {
  return id_;
}

void UpdateQualityRuleRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateQualityRuleRequest::getWarningThreshold() const {
  return warningThreshold_;
}

void UpdateQualityRuleRequest::setWarningThreshold(const std::string &warningThreshold) {
  warningThreshold_ = warningThreshold;
  setBodyParameter(std::string("WarningThreshold"), warningThreshold);
}

long UpdateQualityRuleRequest::getProjectId() const {
  return projectId_;
}

void UpdateQualityRuleRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string UpdateQualityRuleRequest::getMethodName() const {
  return methodName_;
}

void UpdateQualityRuleRequest::setMethodName(const std::string &methodName) {
  methodName_ = methodName;
  setBodyParameter(std::string("MethodName"), methodName);
}

std::string UpdateQualityRuleRequest::getProjectName() const {
  return projectName_;
}

void UpdateQualityRuleRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

int UpdateQualityRuleRequest::getRuleType() const {
  return ruleType_;
}

void UpdateQualityRuleRequest::setRuleType(int ruleType) {
  ruleType_ = ruleType;
  setBodyParameter(std::string("RuleType"), std::to_string(ruleType));
}

int UpdateQualityRuleRequest::getTemplateId() const {
  return templateId_;
}

void UpdateQualityRuleRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string UpdateQualityRuleRequest::getExpectValue() const {
  return expectValue_;
}

void UpdateQualityRuleRequest::setExpectValue(const std::string &expectValue) {
  expectValue_ = expectValue;
  setBodyParameter(std::string("ExpectValue"), expectValue);
}

std::string UpdateQualityRuleRequest::getWhereCondition() const {
  return whereCondition_;
}

void UpdateQualityRuleRequest::setWhereCondition(const std::string &whereCondition) {
  whereCondition_ = whereCondition;
  setBodyParameter(std::string("WhereCondition"), whereCondition);
}

std::string UpdateQualityRuleRequest::getCriticalThreshold() const {
  return criticalThreshold_;
}

void UpdateQualityRuleRequest::setCriticalThreshold(const std::string &criticalThreshold) {
  criticalThreshold_ = criticalThreshold;
  setBodyParameter(std::string("CriticalThreshold"), criticalThreshold);
}

bool UpdateQualityRuleRequest::getOpenSwitch() const {
  return openSwitch_;
}

void UpdateQualityRuleRequest::setOpenSwitch(bool openSwitch) {
  openSwitch_ = openSwitch;
  setBodyParameter(std::string("OpenSwitch"), openSwitch ? "true" : "false");
}

std::string UpdateQualityRuleRequest::getComment() const {
  return comment_;
}

void UpdateQualityRuleRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

int UpdateQualityRuleRequest::getPredictType() const {
  return predictType_;
}

void UpdateQualityRuleRequest::setPredictType(int predictType) {
  predictType_ = predictType;
  setBodyParameter(std::string("PredictType"), std::to_string(predictType));
}

