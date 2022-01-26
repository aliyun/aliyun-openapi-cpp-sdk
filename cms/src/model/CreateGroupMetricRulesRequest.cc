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

#include <alibabacloud/cms/model/CreateGroupMetricRulesRequest.h>

using AlibabaCloud::Cms::Model::CreateGroupMetricRulesRequest;

CreateGroupMetricRulesRequest::CreateGroupMetricRulesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateGroupMetricRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateGroupMetricRulesRequest::~CreateGroupMetricRulesRequest() {}

long CreateGroupMetricRulesRequest::getGroupId() const {
  return groupId_;
}

void CreateGroupMetricRulesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::vector<CreateGroupMetricRulesRequest::GroupMetricRules> CreateGroupMetricRulesRequest::getGroupMetricRules() const {
  return groupMetricRules_;
}

void CreateGroupMetricRulesRequest::setGroupMetricRules(const std::vector<CreateGroupMetricRulesRequest::GroupMetricRules> &groupMetricRules) {
  groupMetricRules_ = groupMetricRules;
  for(int dep1 = 0; dep1 != groupMetricRules.size(); dep1++) {
  auto groupMetricRulesObj = groupMetricRules.at(dep1);
  std::string groupMetricRulesObjStr = std::string("GroupMetricRules") + "." + std::to_string(dep1 + 1);
    setParameter(groupMetricRulesObjStr + ".Webhook", groupMetricRulesObj.webhook);
    setParameter(groupMetricRulesObjStr + ".Escalations.Warn.ComparisonOperator", groupMetricRulesObj.escalationsWarnComparisonOperator);
    setParameter(groupMetricRulesObjStr + ".RuleName", groupMetricRulesObj.ruleName);
    setParameter(groupMetricRulesObjStr + ".Escalations.Info.Statistics", groupMetricRulesObj.escalationsInfoStatistics);
    setParameter(groupMetricRulesObjStr + ".EffectiveInterval", groupMetricRulesObj.effectiveInterval);
    setParameter(groupMetricRulesObjStr + ".Escalations.Info.ComparisonOperator", groupMetricRulesObj.escalationsInfoComparisonOperator);
    setParameter(groupMetricRulesObjStr + ".NoDataPolicy", groupMetricRulesObj.noDataPolicy);
    setParameter(groupMetricRulesObjStr + ".NoEffectiveInterval", groupMetricRulesObj.noEffectiveInterval);
    setParameter(groupMetricRulesObjStr + ".EmailSubject", groupMetricRulesObj.emailSubject);
    setParameter(groupMetricRulesObjStr + ".SilenceTime", std::to_string(groupMetricRulesObj.silenceTime));
    setParameter(groupMetricRulesObjStr + ".MetricName", groupMetricRulesObj.metricName);
    setParameter(groupMetricRulesObjStr + ".Escalations.Warn.Times", std::to_string(groupMetricRulesObj.escalationsWarnTimes));
    setParameter(groupMetricRulesObjStr + ".CompositeExpression", groupMetricRulesObj.compositeExpression);
    setParameter(groupMetricRulesObjStr + ".Escalations.Warn.Threshold", groupMetricRulesObj.escalationsWarnThreshold);
    setParameter(groupMetricRulesObjStr + ".Period", groupMetricRulesObj.period);
    setParameter(groupMetricRulesObjStr + ".ContactGroups", groupMetricRulesObj.contactGroups);
    setParameter(groupMetricRulesObjStr + ".Escalations.Critical.Statistics", groupMetricRulesObj.escalationsCriticalStatistics);
    setParameter(groupMetricRulesObjStr + ".Escalations.Info.Times", std::to_string(groupMetricRulesObj.escalationsInfoTimes));
    setParameter(groupMetricRulesObjStr + ".Escalations.Critical.Times", std::to_string(groupMetricRulesObj.escalationsCriticalTimes));
    setParameter(groupMetricRulesObjStr + ".Escalations.Info.Threshold", groupMetricRulesObj.escalationsInfoThreshold);
    setParameter(groupMetricRulesObjStr + ".Escalations.Warn.Statistics", groupMetricRulesObj.escalationsWarnStatistics);
    setParameter(groupMetricRulesObjStr + ".Namespace", groupMetricRulesObj._namespace);
    setParameter(groupMetricRulesObjStr + ".Interval", groupMetricRulesObj.interval);
    setParameter(groupMetricRulesObjStr + ".RuleId", groupMetricRulesObj.ruleId);
    setParameter(groupMetricRulesObjStr + ".Category", groupMetricRulesObj.category);
    setParameter(groupMetricRulesObjStr + ".Escalations.Critical.ComparisonOperator", groupMetricRulesObj.escalationsCriticalComparisonOperator);
    setParameter(groupMetricRulesObjStr + ".Escalations.Critical.Threshold", groupMetricRulesObj.escalationsCriticalThreshold);
    setParameter(groupMetricRulesObjStr + ".Dimensions", groupMetricRulesObj.dimensions);
  }
}

