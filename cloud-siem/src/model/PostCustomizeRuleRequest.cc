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

#include <alibabacloud/cloud-siem/model/PostCustomizeRuleRequest.h>

using AlibabaCloud::Cloud_siem::Model::PostCustomizeRuleRequest;

PostCustomizeRuleRequest::PostCustomizeRuleRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "PostCustomizeRule") {
  setMethod(HttpRequest::Method::Post);
}

PostCustomizeRuleRequest::~PostCustomizeRuleRequest() {}

long PostCustomizeRuleRequest::getRoleFor() const {
  return roleFor_;
}

void PostCustomizeRuleRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string PostCustomizeRuleRequest::getAttCk() const {
  return attCk_;
}

void PostCustomizeRuleRequest::setAttCk(const std::string &attCk) {
  attCk_ = attCk;
  setBodyParameter(std::string("AttCk"), attCk);
}

std::string PostCustomizeRuleRequest::getRuleDesc() const {
  return ruleDesc_;
}

void PostCustomizeRuleRequest::setRuleDesc(const std::string &ruleDesc) {
  ruleDesc_ = ruleDesc;
  setBodyParameter(std::string("RuleDesc"), ruleDesc);
}

std::string PostCustomizeRuleRequest::getRuleName() const {
  return ruleName_;
}

void PostCustomizeRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

std::string PostCustomizeRuleRequest::getAlertTypeMds() const {
  return alertTypeMds_;
}

void PostCustomizeRuleRequest::setAlertTypeMds(const std::string &alertTypeMds) {
  alertTypeMds_ = alertTypeMds;
  setBodyParameter(std::string("AlertTypeMds"), alertTypeMds);
}

std::string PostCustomizeRuleRequest::getRuleThreshold() const {
  return ruleThreshold_;
}

void PostCustomizeRuleRequest::setRuleThreshold(const std::string &ruleThreshold) {
  ruleThreshold_ = ruleThreshold;
  setBodyParameter(std::string("RuleThreshold"), ruleThreshold);
}

std::string PostCustomizeRuleRequest::getLogSourceMds() const {
  return logSourceMds_;
}

void PostCustomizeRuleRequest::setLogSourceMds(const std::string &logSourceMds) {
  logSourceMds_ = logSourceMds;
  setBodyParameter(std::string("LogSourceMds"), logSourceMds);
}

std::string PostCustomizeRuleRequest::getLogType() const {
  return logType_;
}

void PostCustomizeRuleRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setBodyParameter(std::string("LogType"), logType);
}

std::string PostCustomizeRuleRequest::getRegionId() const {
  return regionId_;
}

void PostCustomizeRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string PostCustomizeRuleRequest::getLogTypeMds() const {
  return logTypeMds_;
}

void PostCustomizeRuleRequest::setLogTypeMds(const std::string &logTypeMds) {
  logTypeMds_ = logTypeMds;
  setBodyParameter(std::string("LogTypeMds"), logTypeMds);
}

int PostCustomizeRuleRequest::getRoleType() const {
  return roleType_;
}

void PostCustomizeRuleRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long PostCustomizeRuleRequest::getId() const {
  return id_;
}

void PostCustomizeRuleRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

int PostCustomizeRuleRequest::getEventTransferSwitch() const {
  return eventTransferSwitch_;
}

void PostCustomizeRuleRequest::setEventTransferSwitch(int eventTransferSwitch) {
  eventTransferSwitch_ = eventTransferSwitch;
  setBodyParameter(std::string("EventTransferSwitch"), std::to_string(eventTransferSwitch));
}

std::string PostCustomizeRuleRequest::getQueryCycle() const {
  return queryCycle_;
}

void PostCustomizeRuleRequest::setQueryCycle(const std::string &queryCycle) {
  queryCycle_ = queryCycle;
  setBodyParameter(std::string("QueryCycle"), queryCycle);
}

std::string PostCustomizeRuleRequest::getLogSource() const {
  return logSource_;
}

void PostCustomizeRuleRequest::setLogSource(const std::string &logSource) {
  logSource_ = logSource;
  setBodyParameter(std::string("LogSource"), logSource);
}

std::string PostCustomizeRuleRequest::getAlertType() const {
  return alertType_;
}

void PostCustomizeRuleRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setBodyParameter(std::string("AlertType"), alertType);
}

std::string PostCustomizeRuleRequest::getEventTransferType() const {
  return eventTransferType_;
}

void PostCustomizeRuleRequest::setEventTransferType(const std::string &eventTransferType) {
  eventTransferType_ = eventTransferType;
  setBodyParameter(std::string("EventTransferType"), eventTransferType);
}

std::string PostCustomizeRuleRequest::getRuleCondition() const {
  return ruleCondition_;
}

void PostCustomizeRuleRequest::setRuleCondition(const std::string &ruleCondition) {
  ruleCondition_ = ruleCondition;
  setBodyParameter(std::string("RuleCondition"), ruleCondition);
}

std::string PostCustomizeRuleRequest::getEventTransferExt() const {
  return eventTransferExt_;
}

void PostCustomizeRuleRequest::setEventTransferExt(const std::string &eventTransferExt) {
  eventTransferExt_ = eventTransferExt;
  setBodyParameter(std::string("EventTransferExt"), eventTransferExt);
}

std::string PostCustomizeRuleRequest::getThreatLevel() const {
  return threatLevel_;
}

void PostCustomizeRuleRequest::setThreatLevel(const std::string &threatLevel) {
  threatLevel_ = threatLevel;
  setBodyParameter(std::string("ThreatLevel"), threatLevel);
}

std::string PostCustomizeRuleRequest::getRuleGroup() const {
  return ruleGroup_;
}

void PostCustomizeRuleRequest::setRuleGroup(const std::string &ruleGroup) {
  ruleGroup_ = ruleGroup;
  setBodyParameter(std::string("RuleGroup"), ruleGroup);
}

