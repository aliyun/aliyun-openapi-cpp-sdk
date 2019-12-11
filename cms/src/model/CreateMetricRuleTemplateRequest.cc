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

#include <alibabacloud/cms/model/CreateMetricRuleTemplateRequest.h>

using AlibabaCloud::Cms::Model::CreateMetricRuleTemplateRequest;

CreateMetricRuleTemplateRequest::CreateMetricRuleTemplateRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateMetricRuleTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMetricRuleTemplateRequest::~CreateMetricRuleTemplateRequest()
{}

std::string CreateMetricRuleTemplateRequest::getDescription()const
{
	return description_;
}

void CreateMetricRuleTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateMetricRuleTemplateRequest::getName()const
{
	return name_;
}

void CreateMetricRuleTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::vector<CreateMetricRuleTemplateRequest::AlertTemplates> CreateMetricRuleTemplateRequest::getAlertTemplates()const
{
	return alertTemplates_;
}

void CreateMetricRuleTemplateRequest::setAlertTemplates(const std::vector<AlertTemplates>& alertTemplates)
{
	alertTemplates_ = alertTemplates;
	for(int dep1 = 0; dep1!= alertTemplates.size(); dep1++) {
		auto alertTemplatesObj = alertTemplates.at(dep1);
		std::string alertTemplatesObjStr = "AlertTemplates." + std::to_string(dep1);
		setCoreParameter(alertTemplatesObjStr + ".Period", std::to_string(alertTemplatesObj.period));
		setCoreParameter(alertTemplatesObjStr + ".EscalationsWarnThreshold", alertTemplatesObj.escalationsWarnThreshold);
		setCoreParameter(alertTemplatesObjStr + ".Webhook", alertTemplatesObj.webhook);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsWarnComparisonOperator", alertTemplatesObj.escalationsWarnComparisonOperator);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsCriticalStatistics", alertTemplatesObj.escalationsCriticalStatistics);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsInfoTimes", std::to_string(alertTemplatesObj.escalationsInfoTimes));
		setCoreParameter(alertTemplatesObjStr + ".RuleName", alertTemplatesObj.ruleName);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsInfoStatistics", alertTemplatesObj.escalationsInfoStatistics);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsCriticalTimes", std::to_string(alertTemplatesObj.escalationsCriticalTimes));
		setCoreParameter(alertTemplatesObjStr + ".EscalationsInfoComparisonOperator", alertTemplatesObj.escalationsInfoComparisonOperator);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsWarnStatistics", alertTemplatesObj.escalationsWarnStatistics);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsInfoThreshold", alertTemplatesObj.escalationsInfoThreshold);
		setCoreParameter(alertTemplatesObjStr + "._Namespace", alertTemplatesObj._namespace);
		setCoreParameter(alertTemplatesObjStr + ".Selector", alertTemplatesObj.selector);
		setCoreParameter(alertTemplatesObjStr + ".MetricName", alertTemplatesObj.metricName);
		setCoreParameter(alertTemplatesObjStr + ".Category", alertTemplatesObj.category);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsCriticalComparisonOperator", alertTemplatesObj.escalationsCriticalComparisonOperator);
		setCoreParameter(alertTemplatesObjStr + ".EscalationsWarnTimes", std::to_string(alertTemplatesObj.escalationsWarnTimes));
		setCoreParameter(alertTemplatesObjStr + ".EscalationsCriticalThreshold", alertTemplatesObj.escalationsCriticalThreshold);
	}
}

