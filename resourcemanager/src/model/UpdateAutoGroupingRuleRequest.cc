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

#include <alibabacloud/resourcemanager/model/UpdateAutoGroupingRuleRequest.h>

using AlibabaCloud::ResourceManager::Model::UpdateAutoGroupingRuleRequest;

UpdateAutoGroupingRuleRequest::UpdateAutoGroupingRuleRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "UpdateAutoGroupingRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAutoGroupingRuleRequest::~UpdateAutoGroupingRuleRequest() {}

std::string UpdateAutoGroupingRuleRequest::getRuleDesc() const {
  return ruleDesc_;
}

void UpdateAutoGroupingRuleRequest::setRuleDesc(const std::string &ruleDesc) {
  ruleDesc_ = ruleDesc;
  setParameter(std::string("RuleDesc"), ruleDesc);
}

std::string UpdateAutoGroupingRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void UpdateAutoGroupingRuleRequest::setResourceTypesScope(const std::string &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  setParameter(std::string("ResourceTypesScope"), resourceTypesScope);
}

std::string UpdateAutoGroupingRuleRequest::getRuleName() const {
  return ruleName_;
}

void UpdateAutoGroupingRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string UpdateAutoGroupingRuleRequest::getExcludeResourceGroupIdsScope() const {
  return excludeResourceGroupIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setExcludeResourceGroupIdsScope(const std::string &excludeResourceGroupIdsScope) {
  excludeResourceGroupIdsScope_ = excludeResourceGroupIdsScope;
  setParameter(std::string("ExcludeResourceGroupIdsScope"), excludeResourceGroupIdsScope);
}

std::string UpdateAutoGroupingRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string UpdateAutoGroupingRuleRequest::getResourceIdsScope() const {
  return resourceIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setResourceIdsScope(const std::string &resourceIdsScope) {
  resourceIdsScope_ = resourceIdsScope;
  setParameter(std::string("ResourceIdsScope"), resourceIdsScope);
}

std::vector<UpdateAutoGroupingRuleRequest::RuleContents> UpdateAutoGroupingRuleRequest::getRuleContents() const {
  return ruleContents_;
}

void UpdateAutoGroupingRuleRequest::setRuleContents(const std::vector<UpdateAutoGroupingRuleRequest::RuleContents> &ruleContents) {
  ruleContents_ = ruleContents;
  for(int dep1 = 0; dep1 != ruleContents.size(); dep1++) {
  auto ruleContentsObj = ruleContents.at(dep1);
  std::string ruleContentsObjStr = std::string("RuleContents") + "." + std::to_string(dep1 + 1);
    setParameter(ruleContentsObjStr + ".RuleContentId", ruleContentsObj.ruleContentId);
    setParameter(ruleContentsObjStr + ".TargetResourceGroupCondition", ruleContentsObj.targetResourceGroupCondition);
    setParameter(ruleContentsObjStr + ".AutoGroupingScopeCondition", ruleContentsObj.autoGroupingScopeCondition);
  }
}

std::string UpdateAutoGroupingRuleRequest::getExcludeResourceTypesScope() const {
  return excludeResourceTypesScope_;
}

void UpdateAutoGroupingRuleRequest::setExcludeResourceTypesScope(const std::string &excludeResourceTypesScope) {
  excludeResourceTypesScope_ = excludeResourceTypesScope;
  setParameter(std::string("ExcludeResourceTypesScope"), excludeResourceTypesScope);
}

std::string UpdateAutoGroupingRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string UpdateAutoGroupingRuleRequest::getExcludeRegionIdsScope() const {
  return excludeRegionIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setExcludeRegionIdsScope(const std::string &excludeRegionIdsScope) {
  excludeRegionIdsScope_ = excludeRegionIdsScope;
  setParameter(std::string("ExcludeRegionIdsScope"), excludeRegionIdsScope);
}

std::string UpdateAutoGroupingRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void UpdateAutoGroupingRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

std::string UpdateAutoGroupingRuleRequest::getRuleId() const {
  return ruleId_;
}

void UpdateAutoGroupingRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

