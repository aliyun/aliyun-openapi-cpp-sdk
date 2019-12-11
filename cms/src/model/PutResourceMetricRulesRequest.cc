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

PutResourceMetricRulesRequest::PutResourceMetricRulesRequest() :
	RpcServiceRequest("cms", "2019-01-01", "PutResourceMetricRules")
{
	setMethod(HttpRequest::Method::Put);
}

PutResourceMetricRulesRequest::~PutResourceMetricRulesRequest()
{}

std::vector<PutResourceMetricRulesRequest::Rules> PutResourceMetricRulesRequest::getRules()const
{
	return rules_;
}

void PutResourceMetricRulesRequest::setRules(const std::vector<Rules>& rules)
{
	rules_ = rules;
	for(int dep1 = 0; dep1!= rules.size(); dep1++) {
		auto rulesObj = rules.at(dep1);
		std::string rulesObjStr = "Rules." + std::to_string(dep1);
		setCoreParameter(rulesObjStr + ".Webhook", rulesObj.webhook);
		setCoreParameter(rulesObjStr + ".EscalationsWarnComparisonOperator", rulesObj.escalationsWarnComparisonOperator);
		setCoreParameter(rulesObjStr + ".RuleName", rulesObj.ruleName);
		setCoreParameter(rulesObjStr + ".EscalationsInfoStatistics", rulesObj.escalationsInfoStatistics);
		setCoreParameter(rulesObjStr + ".EffectiveInterval", rulesObj.effectiveInterval);
		setCoreParameter(rulesObjStr + ".EscalationsInfoComparisonOperator", rulesObj.escalationsInfoComparisonOperator);
		setCoreParameter(rulesObjStr + ".NoEffectiveInterval", rulesObj.noEffectiveInterval);
		setCoreParameter(rulesObjStr + ".EmailSubject", rulesObj.emailSubject);
		setCoreParameter(rulesObjStr + ".SilenceTime", std::to_string(rulesObj.silenceTime));
		setCoreParameter(rulesObjStr + ".MetricName", rulesObj.metricName);
		setCoreParameter(rulesObjStr + ".EscalationsWarnTimes", std::to_string(rulesObj.escalationsWarnTimes));
		setCoreParameter(rulesObjStr + ".Period", rulesObj.period);
		setCoreParameter(rulesObjStr + ".EscalationsWarnThreshold", rulesObj.escalationsWarnThreshold);
		setCoreParameter(rulesObjStr + ".ContactGroups", rulesObj.contactGroups);
		setCoreParameter(rulesObjStr + ".EscalationsCriticalStatistics", rulesObj.escalationsCriticalStatistics);
		setCoreParameter(rulesObjStr + ".Resources", rulesObj.resources);
		setCoreParameter(rulesObjStr + ".EscalationsInfoTimes", std::to_string(rulesObj.escalationsInfoTimes));
		setCoreParameter(rulesObjStr + ".EscalationsCriticalTimes", std::to_string(rulesObj.escalationsCriticalTimes));
		setCoreParameter(rulesObjStr + ".EscalationsWarnStatistics", rulesObj.escalationsWarnStatistics);
		setCoreParameter(rulesObjStr + ".EscalationsInfoThreshold", rulesObj.escalationsInfoThreshold);
		setCoreParameter(rulesObjStr + "._Namespace", rulesObj._namespace);
		setCoreParameter(rulesObjStr + ".Interval", rulesObj.interval);
		setCoreParameter(rulesObjStr + ".RuleId", rulesObj.ruleId);
		setCoreParameter(rulesObjStr + ".EscalationsCriticalComparisonOperator", rulesObj.escalationsCriticalComparisonOperator);
		setCoreParameter(rulesObjStr + ".EscalationsCriticalThreshold", rulesObj.escalationsCriticalThreshold);
	}
}

