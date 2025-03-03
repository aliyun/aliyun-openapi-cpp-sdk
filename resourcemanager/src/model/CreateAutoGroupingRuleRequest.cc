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

#include <alibabacloud/resourcemanager/model/CreateAutoGroupingRuleRequest.h>

using AlibabaCloud::ResourceManager::Model::CreateAutoGroupingRuleRequest;

CreateAutoGroupingRuleRequest::CreateAutoGroupingRuleRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CreateAutoGroupingRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoGroupingRuleRequest::~CreateAutoGroupingRuleRequest() {}

std::string CreateAutoGroupingRuleRequest::getRuleDesc() const {
  return ruleDesc_;
}

void CreateAutoGroupingRuleRequest::setRuleDesc(const std::string &ruleDesc) {
  ruleDesc_ = ruleDesc;
  setParameter(std::string("RuleDesc"), ruleDesc);
}

std::string CreateAutoGroupingRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void CreateAutoGroupingRuleRequest::setResourceTypesScope(const std::string &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  setParameter(std::string("ResourceTypesScope"), resourceTypesScope);
}

std::string CreateAutoGroupingRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateAutoGroupingRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateAutoGroupingRuleRequest::getExcludeResourceGroupIdsScope() const {
  return excludeResourceGroupIdsScope_;
}

void CreateAutoGroupingRuleRequest::setExcludeResourceGroupIdsScope(const std::string &excludeResourceGroupIdsScope) {
  excludeResourceGroupIdsScope_ = excludeResourceGroupIdsScope;
  setParameter(std::string("ExcludeResourceGroupIdsScope"), excludeResourceGroupIdsScope);
}

std::string CreateAutoGroupingRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void CreateAutoGroupingRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string CreateAutoGroupingRuleRequest::getResourceIdsScope() const {
  return resourceIdsScope_;
}

void CreateAutoGroupingRuleRequest::setResourceIdsScope(const std::string &resourceIdsScope) {
  resourceIdsScope_ = resourceIdsScope;
  setParameter(std::string("ResourceIdsScope"), resourceIdsScope);
}

std::vector<CreateAutoGroupingRuleRequest::RuleContents> CreateAutoGroupingRuleRequest::getRuleContents() const {
  return ruleContents_;
}

void CreateAutoGroupingRuleRequest::setRuleContents(const std::vector<CreateAutoGroupingRuleRequest::RuleContents> &ruleContents) {
  ruleContents_ = ruleContents;
  for(int dep1 = 0; dep1 != ruleContents.size(); dep1++) {
  auto ruleContentsObj = ruleContents.at(dep1);
  std::string ruleContentsObjStr = std::string("RuleContents") + "." + std::to_string(dep1 + 1);
    setParameter(ruleContentsObjStr + ".TargetResourceGroupCondition", ruleContentsObj.targetResourceGroupCondition);
    setParameter(ruleContentsObjStr + ".AutoGroupingScopeCondition", ruleContentsObj.autoGroupingScopeCondition);
  }
}

std::string CreateAutoGroupingRuleRequest::getExcludeResourceTypesScope() const {
  return excludeResourceTypesScope_;
}

void CreateAutoGroupingRuleRequest::setExcludeResourceTypesScope(const std::string &excludeResourceTypesScope) {
  excludeResourceTypesScope_ = excludeResourceTypesScope;
  setParameter(std::string("ExcludeResourceTypesScope"), excludeResourceTypesScope);
}

std::string CreateAutoGroupingRuleRequest::getRuleType() const {
  return ruleType_;
}

void CreateAutoGroupingRuleRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string CreateAutoGroupingRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void CreateAutoGroupingRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string CreateAutoGroupingRuleRequest::getExcludeRegionIdsScope() const {
  return excludeRegionIdsScope_;
}

void CreateAutoGroupingRuleRequest::setExcludeRegionIdsScope(const std::string &excludeRegionIdsScope) {
  excludeRegionIdsScope_ = excludeRegionIdsScope;
  setParameter(std::string("ExcludeRegionIdsScope"), excludeRegionIdsScope);
}

std::string CreateAutoGroupingRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void CreateAutoGroupingRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

