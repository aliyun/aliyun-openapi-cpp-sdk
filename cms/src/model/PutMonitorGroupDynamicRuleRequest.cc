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

#include <alibabacloud/cms/model/PutMonitorGroupDynamicRuleRequest.h>

using AlibabaCloud::Cms::Model::PutMonitorGroupDynamicRuleRequest;

PutMonitorGroupDynamicRuleRequest::PutMonitorGroupDynamicRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutMonitorGroupDynamicRule") {
  setMethod(HttpRequest::Method::Post);
}

PutMonitorGroupDynamicRuleRequest::~PutMonitorGroupDynamicRuleRequest() {}

std::vector<PutMonitorGroupDynamicRuleRequest::GroupRules> PutMonitorGroupDynamicRuleRequest::getGroupRules() const {
  return groupRules_;
}

void PutMonitorGroupDynamicRuleRequest::setGroupRules(const std::vector<PutMonitorGroupDynamicRuleRequest::GroupRules> &groupRules) {
  groupRules_ = groupRules;
  for(int dep1 = 0; dep1 != groupRules.size(); dep1++) {
  auto groupRulesObj = groupRules.at(dep1);
  std::string groupRulesObjStr = std::string("GroupRules") + "." + std::to_string(dep1 + 1);
    setParameter(groupRulesObjStr + ".FilterRelation", groupRulesObj.filterRelation);
    for(int dep2 = 0; dep2 != groupRulesObj.filters.size(); dep2++) {
    auto filtersObj = groupRulesObj.filters.at(dep2);
    std::string filtersObjStr = groupRulesObjStr + ".Filters" + "." + std::to_string(dep2 + 1);
      setParameter(filtersObjStr + ".Function", filtersObj.function);
      setParameter(filtersObjStr + ".Name", filtersObj.name);
      setParameter(filtersObjStr + ".Value", filtersObj.value);
    }
    setParameter(groupRulesObjStr + ".Category", groupRulesObj.category);
  }
}

long PutMonitorGroupDynamicRuleRequest::getGroupId() const {
  return groupId_;
}

void PutMonitorGroupDynamicRuleRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

