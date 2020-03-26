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
	setParameter("GroupId", std::to_string(groupId));
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
		std::string groupMetricRulesObjStr = "GroupMetricRules." + std::to_string(dep1 + 1);
		setParameter(groupMetricRulesObjStr + ".Webhook", groupMetricRulesObj.webhook);
		setParameter(groupMetricRulesObjStr + ".EscalationsWarnComparisonOperator", groupMetricRulesObj.escalationsWarnComparisonOperator);
		setParameter(groupMetricRulesObjStr + ".RuleName", groupMetricRulesObj.ruleName);
		setParameter(groupMetricRulesObjStr + ".EscalationsInfoStatistics", groupMetricRulesObj.escalationsInfoStatistics);
		setParameter(groupMetricRulesObjStr + ".EffectiveInterval", groupMetricRulesObj.effectiveInterval);
		setParameter(groupMetricRulesObjStr + ".EscalationsInfoComparisonOperator", groupMetricRulesObj.escalationsInfoComparisonOperator);
		setParameter(groupMetricRulesObjStr + ".NoEffectiveInterval", groupMetricRulesObj.noEffectiveInterval);
		setParameter(groupMetricRulesObjStr + ".EmailSubject", groupMetricRulesObj.emailSubject);
		setParameter(groupMetricRulesObjStr + ".SilenceTime", std::to_string(groupMetricRulesObj.silenceTime));
		setParameter(groupMetricRulesObjStr + ".MetricName", groupMetricRulesObj.metricName);
		setParameter(groupMetricRulesObjStr + ".EscalationsWarnTimes", std::to_string(groupMetricRulesObj.escalationsWarnTimes));
		setParameter(groupMetricRulesObjStr + ".Period", groupMetricRulesObj.period);
		setParameter(groupMetricRulesObjStr + ".EscalationsWarnThreshold", groupMetricRulesObj.escalationsWarnThreshold);
		setParameter(groupMetricRulesObjStr + ".EscalationsCriticalStatistics", groupMetricRulesObj.escalationsCriticalStatistics);
		setParameter(groupMetricRulesObjStr + ".EscalationsInfoTimes", std::to_string(groupMetricRulesObj.escalationsInfoTimes));
		setParameter(groupMetricRulesObjStr + ".EscalationsCriticalTimes", std::to_string(groupMetricRulesObj.escalationsCriticalTimes));
		setParameter(groupMetricRulesObjStr + ".EscalationsWarnStatistics", groupMetricRulesObj.escalationsWarnStatistics);
		setParameter(groupMetricRulesObjStr + ".EscalationsInfoThreshold", groupMetricRulesObj.escalationsInfoThreshold);
		setParameter(groupMetricRulesObjStr + "._Namespace", groupMetricRulesObj._namespace);
		setParameter(groupMetricRulesObjStr + ".Interval", groupMetricRulesObj.interval);
		setParameter(groupMetricRulesObjStr + ".Category", groupMetricRulesObj.category);
		setParameter(groupMetricRulesObjStr + ".RuleId", groupMetricRulesObj.ruleId);
		setParameter(groupMetricRulesObjStr + ".EscalationsCriticalComparisonOperator", groupMetricRulesObj.escalationsCriticalComparisonOperator);
		setParameter(groupMetricRulesObjStr + ".EscalationsCriticalThreshold", groupMetricRulesObj.escalationsCriticalThreshold);
		setParameter(groupMetricRulesObjStr + ".Dimensions", groupMetricRulesObj.dimensions);
	}
}

