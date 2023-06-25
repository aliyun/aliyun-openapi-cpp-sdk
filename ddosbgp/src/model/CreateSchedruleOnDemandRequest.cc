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

#include <alibabacloud/ddosbgp/model/CreateSchedruleOnDemandRequest.h>

using AlibabaCloud::Ddosbgp::Model::CreateSchedruleOnDemandRequest;

CreateSchedruleOnDemandRequest::CreateSchedruleOnDemandRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "CreateSchedruleOnDemand") {
  setMethod(HttpRequest::Method::Post);
}

CreateSchedruleOnDemandRequest::~CreateSchedruleOnDemandRequest() {}

std::string CreateSchedruleOnDemandRequest::getTimeZone() const {
  return timeZone_;
}

void CreateSchedruleOnDemandRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setParameter(std::string("TimeZone"), timeZone);
}

std::string CreateSchedruleOnDemandRequest::getRuleName() const {
  return ruleName_;
}

void CreateSchedruleOnDemandRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateSchedruleOnDemandRequest::getRuleConditionMbps() const {
  return ruleConditionMbps_;
}

void CreateSchedruleOnDemandRequest::setRuleConditionMbps(const std::string &ruleConditionMbps) {
  ruleConditionMbps_ = ruleConditionMbps;
  setParameter(std::string("RuleConditionMbps"), ruleConditionMbps);
}

std::string CreateSchedruleOnDemandRequest::getRuleAction() const {
  return ruleAction_;
}

void CreateSchedruleOnDemandRequest::setRuleAction(const std::string &ruleAction) {
  ruleAction_ = ruleAction;
  setParameter(std::string("RuleAction"), ruleAction);
}

std::string CreateSchedruleOnDemandRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateSchedruleOnDemandRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateSchedruleOnDemandRequest::getRegionId() const {
  return regionId_;
}

void CreateSchedruleOnDemandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSchedruleOnDemandRequest::getRuleUndoMode() const {
  return ruleUndoMode_;
}

void CreateSchedruleOnDemandRequest::setRuleUndoMode(const std::string &ruleUndoMode) {
  ruleUndoMode_ = ruleUndoMode;
  setParameter(std::string("RuleUndoMode"), ruleUndoMode);
}

std::string CreateSchedruleOnDemandRequest::getRuleUndoEndTime() const {
  return ruleUndoEndTime_;
}

void CreateSchedruleOnDemandRequest::setRuleUndoEndTime(const std::string &ruleUndoEndTime) {
  ruleUndoEndTime_ = ruleUndoEndTime;
  setParameter(std::string("RuleUndoEndTime"), ruleUndoEndTime);
}

std::string CreateSchedruleOnDemandRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSchedruleOnDemandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSchedruleOnDemandRequest::getRuleUndoBeginTime() const {
  return ruleUndoBeginTime_;
}

void CreateSchedruleOnDemandRequest::setRuleUndoBeginTime(const std::string &ruleUndoBeginTime) {
  ruleUndoBeginTime_ = ruleUndoBeginTime;
  setParameter(std::string("RuleUndoBeginTime"), ruleUndoBeginTime);
}

std::string CreateSchedruleOnDemandRequest::getRuleConditionCnt() const {
  return ruleConditionCnt_;
}

void CreateSchedruleOnDemandRequest::setRuleConditionCnt(const std::string &ruleConditionCnt) {
  ruleConditionCnt_ = ruleConditionCnt;
  setParameter(std::string("RuleConditionCnt"), ruleConditionCnt);
}

std::string CreateSchedruleOnDemandRequest::getRuleSwitch() const {
  return ruleSwitch_;
}

void CreateSchedruleOnDemandRequest::setRuleSwitch(const std::string &ruleSwitch) {
  ruleSwitch_ = ruleSwitch;
  setParameter(std::string("RuleSwitch"), ruleSwitch);
}

std::string CreateSchedruleOnDemandRequest::getRuleConditionKpps() const {
  return ruleConditionKpps_;
}

void CreateSchedruleOnDemandRequest::setRuleConditionKpps(const std::string &ruleConditionKpps) {
  ruleConditionKpps_ = ruleConditionKpps;
  setParameter(std::string("RuleConditionKpps"), ruleConditionKpps);
}

