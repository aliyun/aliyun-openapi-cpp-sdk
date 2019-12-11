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

CreateGroupMetricRulesRequest::CreateGroupMetricRulesRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateGroupMetricRules")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGroupMetricRulesRequest::~CreateGroupMetricRulesRequest()
{}

long CreateGroupMetricRulesRequest::getGroupId()const
{
	return groupId_;
}

void CreateGroupMetricRulesRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::vector<CreateGroupMetricRulesRequest::GroupMetricRules> CreateGroupMetricRulesRequest::getGroupMetricRules()const
{
	return groupMetricRules_;
}

void CreateGroupMetricRulesRequest::setGroupMetricRules(const std::vector<GroupMetricRules>& groupMetricRules)
{
	groupMetricRules_ = groupMetricRules;
	for(int dep1 = 0; dep1!= groupMetricRules.size(); dep1++) {
		auto groupMetricRulesObj = groupMetricRules.at(dep1);
		std::string groupMetricRulesObjStr = "GroupMetricRules." + std::to_string(dep1);
		setCoreParameter(groupMetricRulesObjStr + ".Webhook", groupMetricRulesObj.webhook);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsWarnComparisonOperator", groupMetricRulesObj.escalationsWarnComparisonOperator);
		setCoreParameter(groupMetricRulesObjStr + ".RuleName", groupMetricRulesObj.ruleName);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsInfoStatistics", groupMetricRulesObj.escalationsInfoStatistics);
		setCoreParameter(groupMetricRulesObjStr + ".EffectiveInterval", groupMetricRulesObj.effectiveInterval);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsInfoComparisonOperator", groupMetricRulesObj.escalationsInfoComparisonOperator);
		setCoreParameter(groupMetricRulesObjStr + ".NoEffectiveInterval", groupMetricRulesObj.noEffectiveInterval);
		setCoreParameter(groupMetricRulesObjStr + ".EmailSubject", groupMetricRulesObj.emailSubject);
		setCoreParameter(groupMetricRulesObjStr + ".SilenceTime", std::to_string(groupMetricRulesObj.silenceTime));
		setCoreParameter(groupMetricRulesObjStr + ".MetricName", groupMetricRulesObj.metricName);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsWarnTimes", std::to_string(groupMetricRulesObj.escalationsWarnTimes));
		setCoreParameter(groupMetricRulesObjStr + ".Period", groupMetricRulesObj.period);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsWarnThreshold", groupMetricRulesObj.escalationsWarnThreshold);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsCriticalStatistics", groupMetricRulesObj.escalationsCriticalStatistics);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsInfoTimes", std::to_string(groupMetricRulesObj.escalationsInfoTimes));
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsCriticalTimes", std::to_string(groupMetricRulesObj.escalationsCriticalTimes));
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsWarnStatistics", groupMetricRulesObj.escalationsWarnStatistics);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsInfoThreshold", groupMetricRulesObj.escalationsInfoThreshold);
		setCoreParameter(groupMetricRulesObjStr + "._Namespace", groupMetricRulesObj._namespace);
		setCoreParameter(groupMetricRulesObjStr + ".Interval", groupMetricRulesObj.interval);
		setCoreParameter(groupMetricRulesObjStr + ".Category", groupMetricRulesObj.category);
		setCoreParameter(groupMetricRulesObjStr + ".RuleId", groupMetricRulesObj.ruleId);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsCriticalComparisonOperator", groupMetricRulesObj.escalationsCriticalComparisonOperator);
		setCoreParameter(groupMetricRulesObjStr + ".EscalationsCriticalThreshold", groupMetricRulesObj.escalationsCriticalThreshold);
		setCoreParameter(groupMetricRulesObjStr + ".Dimensions", groupMetricRulesObj.dimensions);
	}
}

