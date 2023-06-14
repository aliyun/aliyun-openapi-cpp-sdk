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

#include <alibabacloud/ga/model/CreateForwardingRulesRequest.h>

using AlibabaCloud::Ga::Model::CreateForwardingRulesRequest;

CreateForwardingRulesRequest::CreateForwardingRulesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateForwardingRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateForwardingRulesRequest::~CreateForwardingRulesRequest() {}

std::string CreateForwardingRulesRequest::getClientToken() const {
  return clientToken_;
}

void CreateForwardingRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateForwardingRulesRequest::getListenerId() const {
  return listenerId_;
}

void CreateForwardingRulesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string CreateForwardingRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateForwardingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateForwardingRulesRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateForwardingRulesRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<CreateForwardingRulesRequest::ForwardingRules> CreateForwardingRulesRequest::getForwardingRules() const {
  return forwardingRules_;
}

void CreateForwardingRulesRequest::setForwardingRules(const std::vector<CreateForwardingRulesRequest::ForwardingRules> &forwardingRules) {
  forwardingRules_ = forwardingRules;
  for(int dep1 = 0; dep1 != forwardingRules.size(); dep1++) {
    setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(forwardingRules[dep1].priority));
    for(int dep2 = 0; dep2 != forwardingRules[dep1].ruleConditions.size(); dep2++) {
      setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".RuleConditionType", forwardingRules[dep1].ruleConditions[dep2].ruleConditionType);
      setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".RuleConditionValue", forwardingRules[dep1].ruleConditions[dep2].ruleConditionValue);
      for(int dep3 = 0; dep3 != forwardingRules[dep1].ruleConditions[dep2].pathConfig.values.size(); dep3++) {
        setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".PathConfig.Values." + std::to_string(dep3 + 1), forwardingRules[dep1].ruleConditions[dep2].pathConfig.values[dep3]);
      }
      for(int dep3 = 0; dep3 != forwardingRules[dep1].ruleConditions[dep2].hostConfig.values.size(); dep3++) {
        setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleConditions." + std::to_string(dep2 + 1) + ".HostConfig.Values." + std::to_string(dep3 + 1), forwardingRules[dep1].ruleConditions[dep2].hostConfig.values[dep3]);
      }
    }
    for(int dep2 = 0; dep2 != forwardingRules[dep1].ruleActions.size(); dep2++) {
      setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".Order", std::to_string(forwardingRules[dep1].ruleActions[dep2].order));
      setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RuleActionType", forwardingRules[dep1].ruleActions[dep2].ruleActionType);
      setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".RuleActionValue", forwardingRules[dep1].ruleActions[dep2].ruleActionValue);
      for(int dep3 = 0; dep3 != forwardingRules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupTuples.size(); dep3++) {
        setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleActions." + std::to_string(dep2 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep3 + 1) + ".EndpointGroupId", forwardingRules[dep1].ruleActions[dep2].forwardGroupConfig.serverGroupTuples[dep3].endpointGroupId);
      }
    }
    setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".ForwardingRuleName", forwardingRules[dep1].forwardingRuleName);
    setParameter(std::string("ForwardingRules") + "." + std::to_string(dep1 + 1) + ".RuleDirection", forwardingRules[dep1].ruleDirection);
  }
}

