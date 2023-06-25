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

#include <alibabacloud/ddosbgp/model/ConfigSchedruleOnDemandRequest.h>

using AlibabaCloud::Ddosbgp::Model::ConfigSchedruleOnDemandRequest;

ConfigSchedruleOnDemandRequest::ConfigSchedruleOnDemandRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "ConfigSchedruleOnDemand") {
  setMethod(HttpRequest::Method::Post);
}

ConfigSchedruleOnDemandRequest::~ConfigSchedruleOnDemandRequest() {}

std::string ConfigSchedruleOnDemandRequest::getTimeZone() const {
  return timeZone_;
}

void ConfigSchedruleOnDemandRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setParameter(std::string("TimeZone"), timeZone);
}

std::string ConfigSchedruleOnDemandRequest::getRuleName() const {
  return ruleName_;
}

void ConfigSchedruleOnDemandRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ConfigSchedruleOnDemandRequest::getRuleConditionMbps() const {
  return ruleConditionMbps_;
}

void ConfigSchedruleOnDemandRequest::setRuleConditionMbps(const std::string &ruleConditionMbps) {
  ruleConditionMbps_ = ruleConditionMbps;
  setParameter(std::string("RuleConditionMbps"), ruleConditionMbps);
}

std::string ConfigSchedruleOnDemandRequest::getRuleAction() const {
  return ruleAction_;
}

void ConfigSchedruleOnDemandRequest::setRuleAction(const std::string &ruleAction) {
  ruleAction_ = ruleAction;
  setParameter(std::string("RuleAction"), ruleAction);
}

std::string ConfigSchedruleOnDemandRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigSchedruleOnDemandRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigSchedruleOnDemandRequest::getRegionId() const {
  return regionId_;
}

void ConfigSchedruleOnDemandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigSchedruleOnDemandRequest::getRuleUndoMode() const {
  return ruleUndoMode_;
}

void ConfigSchedruleOnDemandRequest::setRuleUndoMode(const std::string &ruleUndoMode) {
  ruleUndoMode_ = ruleUndoMode;
  setParameter(std::string("RuleUndoMode"), ruleUndoMode);
}

std::string ConfigSchedruleOnDemandRequest::getRuleUndoEndTime() const {
  return ruleUndoEndTime_;
}

void ConfigSchedruleOnDemandRequest::setRuleUndoEndTime(const std::string &ruleUndoEndTime) {
  ruleUndoEndTime_ = ruleUndoEndTime;
  setParameter(std::string("RuleUndoEndTime"), ruleUndoEndTime);
}

std::string ConfigSchedruleOnDemandRequest::getInstanceId() const {
  return instanceId_;
}

void ConfigSchedruleOnDemandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ConfigSchedruleOnDemandRequest::getRuleUndoBeginTime() const {
  return ruleUndoBeginTime_;
}

void ConfigSchedruleOnDemandRequest::setRuleUndoBeginTime(const std::string &ruleUndoBeginTime) {
  ruleUndoBeginTime_ = ruleUndoBeginTime;
  setParameter(std::string("RuleUndoBeginTime"), ruleUndoBeginTime);
}

std::string ConfigSchedruleOnDemandRequest::getRuleConditionCnt() const {
  return ruleConditionCnt_;
}

void ConfigSchedruleOnDemandRequest::setRuleConditionCnt(const std::string &ruleConditionCnt) {
  ruleConditionCnt_ = ruleConditionCnt;
  setParameter(std::string("RuleConditionCnt"), ruleConditionCnt);
}

std::string ConfigSchedruleOnDemandRequest::getRuleSwitch() const {
  return ruleSwitch_;
}

void ConfigSchedruleOnDemandRequest::setRuleSwitch(const std::string &ruleSwitch) {
  ruleSwitch_ = ruleSwitch;
  setParameter(std::string("RuleSwitch"), ruleSwitch);
}

std::string ConfigSchedruleOnDemandRequest::getRuleConditionKpps() const {
  return ruleConditionKpps_;
}

void ConfigSchedruleOnDemandRequest::setRuleConditionKpps(const std::string &ruleConditionKpps) {
  ruleConditionKpps_ = ruleConditionKpps;
  setParameter(std::string("RuleConditionKpps"), ruleConditionKpps);
}

