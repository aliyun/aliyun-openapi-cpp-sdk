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

#include <alibabacloud/cms/model/PutResourceMetricRulesRequest.h>

using AlibabaCloud::Cms::Model::PutResourceMetricRulesRequest;

PutResourceMetricRulesRequest::PutResourceMetricRulesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutResourceMetricRules") {
  setMethod(HttpRequest::Method::Post);
}

PutResourceMetricRulesRequest::~PutResourceMetricRulesRequest() {}

std::vector<PutResourceMetricRulesRequest::Rules> PutResourceMetricRulesRequest::getRules() const {
  return rules_;
}

void PutResourceMetricRulesRequest::setRules(const std::vector<PutResourceMetricRulesRequest::Rules> &rules) {
  rules_ = rules;
  for(int dep1 = 0; dep1 != rules.size(); dep1++) {
  auto rulesObj = rules.at(dep1);
  std::string rulesObjStr = std::string("Rules") + "." + std::to_string(dep1 + 1);
    setParameter(rulesObjStr + ".Webhook", rulesObj.webhook);
    setParameter(rulesObjStr + ".Escalations.Warn.ComparisonOperator", rulesObj.escalationsWarnComparisonOperator);
    setParameter(rulesObjStr + ".RuleName", rulesObj.ruleName);
    setParameter(rulesObjStr + ".Escalations.Info.Statistics", rulesObj.escalationsInfoStatistics);
    setParameter(rulesObjStr + ".EffectiveInterval", rulesObj.effectiveInterval);
    setParameter(rulesObjStr + ".Escalations.Info.ComparisonOperator", rulesObj.escalationsInfoComparisonOperator);
    setParameter(rulesObjStr + ".NoDataPolicy", rulesObj.noDataPolicy);
    setParameter(rulesObjStr + ".NoEffectiveInterval", rulesObj.noEffectiveInterval);
    setParameter(rulesObjStr + ".EmailSubject", rulesObj.emailSubject);
    setParameter(rulesObjStr + ".SilenceTime", std::to_string(rulesObj.silenceTime));
    setParameter(rulesObjStr + ".MetricName", rulesObj.metricName);
    setParameter(rulesObjStr + ".Escalations.Warn.Times", std::to_string(rulesObj.escalationsWarnTimes));
    setParameter(rulesObjStr + ".CompositeExpression", rulesObj.compositeExpression);
    setParameter(rulesObjStr + ".Escalations.Warn.Threshold", rulesObj.escalationsWarnThreshold);
    setParameter(rulesObjStr + ".Period", rulesObj.period);
    setParameter(rulesObjStr + ".ContactGroups", rulesObj.contactGroups);
    setParameter(rulesObjStr + ".Escalations.Critical.Statistics", rulesObj.escalationsCriticalStatistics);
    setParameter(rulesObjStr + ".GroupId", rulesObj.groupId);
    setParameter(rulesObjStr + ".Escalations.Info.Times", std::to_string(rulesObj.escalationsInfoTimes));
    setParameter(rulesObjStr + ".Resources", rulesObj.resources);
    setParameter(rulesObjStr + ".Escalations.Critical.Times", std::to_string(rulesObj.escalationsCriticalTimes));
    setParameter(rulesObjStr + ".Escalations.Info.Threshold", rulesObj.escalationsInfoThreshold);
    setParameter(rulesObjStr + ".Escalations.Warn.Statistics", rulesObj.escalationsWarnStatistics);
    setParameter(rulesObjStr + ".Namespace", rulesObj._namespace);
    setParameter(rulesObjStr + ".Interval", rulesObj.interval);
    setParameter(rulesObjStr + ".RuleId", rulesObj.ruleId);
    setParameter(rulesObjStr + ".Escalations.Critical.ComparisonOperator", rulesObj.escalationsCriticalComparisonOperator);
    setParameter(rulesObjStr + ".Escalations.Critical.Threshold", rulesObj.escalationsCriticalThreshold);
  }
}

