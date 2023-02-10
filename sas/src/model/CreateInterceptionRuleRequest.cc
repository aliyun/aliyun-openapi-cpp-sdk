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

#include <alibabacloud/sas/model/CreateInterceptionRuleRequest.h>

using AlibabaCloud::Sas::Model::CreateInterceptionRuleRequest;

CreateInterceptionRuleRequest::CreateInterceptionRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateInterceptionRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateInterceptionRuleRequest::~CreateInterceptionRuleRequest() {}

std::string CreateInterceptionRuleRequest::getClusterName() const {
  return clusterName_;
}

void CreateInterceptionRuleRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string CreateInterceptionRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateInterceptionRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateInterceptionRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateInterceptionRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateInterceptionRuleRequest::getDstTargetList() const {
  return dstTargetList_;
}

void CreateInterceptionRuleRequest::setDstTargetList(const std::string &dstTargetList) {
  dstTargetList_ = dstTargetList;
  setParameter(std::string("DstTargetList"), dstTargetList);
}

long CreateInterceptionRuleRequest::getOrderIndex() const {
  return orderIndex_;
}

void CreateInterceptionRuleRequest::setOrderIndex(long orderIndex) {
  orderIndex_ = orderIndex;
  setParameter(std::string("OrderIndex"), std::to_string(orderIndex));
}

std::string CreateInterceptionRuleRequest::getRuleType() const {
  return ruleType_;
}

void CreateInterceptionRuleRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string CreateInterceptionRuleRequest::getClusterId() const {
  return clusterId_;
}

void CreateInterceptionRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long CreateInterceptionRuleRequest::getInterceptType() const {
  return interceptType_;
}

void CreateInterceptionRuleRequest::setInterceptType(long interceptType) {
  interceptType_ = interceptType;
  setParameter(std::string("InterceptType"), std::to_string(interceptType));
}

int CreateInterceptionRuleRequest::getRuleSwitch() const {
  return ruleSwitch_;
}

void CreateInterceptionRuleRequest::setRuleSwitch(int ruleSwitch) {
  ruleSwitch_ = ruleSwitch;
  setParameter(std::string("RuleSwitch"), std::to_string(ruleSwitch));
}

std::string CreateInterceptionRuleRequest::getSrcTarget() const {
  return srcTarget_;
}

void CreateInterceptionRuleRequest::setSrcTarget(const std::string &srcTarget) {
  srcTarget_ = srcTarget;
  setParameter(std::string("SrcTarget"), srcTarget);
}

