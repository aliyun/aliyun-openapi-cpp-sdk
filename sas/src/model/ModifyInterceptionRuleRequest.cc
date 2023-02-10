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

#include <alibabacloud/sas/model/ModifyInterceptionRuleRequest.h>

using AlibabaCloud::Sas::Model::ModifyInterceptionRuleRequest;

ModifyInterceptionRuleRequest::ModifyInterceptionRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyInterceptionRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInterceptionRuleRequest::~ModifyInterceptionRuleRequest() {}

std::string ModifyInterceptionRuleRequest::getRuleName() const {
  return ruleName_;
}

void ModifyInterceptionRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifyInterceptionRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyInterceptionRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ModifyInterceptionRuleRequest::getOrderIndex() const {
  return orderIndex_;
}

void ModifyInterceptionRuleRequest::setOrderIndex(long orderIndex) {
  orderIndex_ = orderIndex;
  setParameter(std::string("OrderIndex"), std::to_string(orderIndex));
}

std::string ModifyInterceptionRuleRequest::getDstTarget() const {
  return dstTarget_;
}

void ModifyInterceptionRuleRequest::setDstTarget(const std::string &dstTarget) {
  dstTarget_ = dstTarget;
  setParameter(std::string("DstTarget"), dstTarget);
}

std::string ModifyInterceptionRuleRequest::getClusterId() const {
  return clusterId_;
}

void ModifyInterceptionRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ModifyInterceptionRuleRequest::getInterceptType() const {
  return interceptType_;
}

void ModifyInterceptionRuleRequest::setInterceptType(int interceptType) {
  interceptType_ = interceptType;
  setParameter(std::string("InterceptType"), std::to_string(interceptType));
}

int ModifyInterceptionRuleRequest::getRuleSwitch() const {
  return ruleSwitch_;
}

void ModifyInterceptionRuleRequest::setRuleSwitch(int ruleSwitch) {
  ruleSwitch_ = ruleSwitch;
  setParameter(std::string("RuleSwitch"), std::to_string(ruleSwitch));
}

long ModifyInterceptionRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyInterceptionRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

std::string ModifyInterceptionRuleRequest::getSrcTarget() const {
  return srcTarget_;
}

void ModifyInterceptionRuleRequest::setSrcTarget(const std::string &srcTarget) {
  srcTarget_ = srcTarget;
  setParameter(std::string("SrcTarget"), srcTarget);
}

