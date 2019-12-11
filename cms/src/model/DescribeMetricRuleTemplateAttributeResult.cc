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

#include <alibabacloud/cms/model/DescribeMetricRuleTemplateAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMetricRuleTemplateAttributeResult::DescribeMetricRuleTemplateAttributeResult() :
	ServiceResult()
{}

DescribeMetricRuleTemplateAttributeResult::DescribeMetricRuleTemplateAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricRuleTemplateAttributeResult::~DescribeMetricRuleTemplateAttributeResult()
{}

void DescribeMetricRuleTemplateAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["Name"].isNull())
		resource_.name = resourceNode["Name"].asString();
	if(!resourceNode["TemplateId"].isNull())
		resource_.templateId = resourceNode["TemplateId"].asString();
	if(!resourceNode["RestVersion"].isNull())
		resource_.restVersion = resourceNode["RestVersion"].asString();
	if(!resourceNode["Description"].isNull())
		resource_.description = resourceNode["Description"].asString();
	auto allAlertTemplatesNode = resourceNode["AlertTemplates"]["AlertTemplate"];
	for (auto resourceNodeAlertTemplatesAlertTemplate : allAlertTemplatesNode)
	{
		Resource::AlertTemplate alertTemplateObject;
		if(!resourceNodeAlertTemplatesAlertTemplate["RuleName"].isNull())
			alertTemplateObject.ruleName = resourceNodeAlertTemplatesAlertTemplate["RuleName"].asString();
		if(!resourceNodeAlertTemplatesAlertTemplate["Category"].isNull())
			alertTemplateObject.category = resourceNodeAlertTemplatesAlertTemplate["Category"].asString();
		if(!resourceNodeAlertTemplatesAlertTemplate["Namespace"].isNull())
			alertTemplateObject._namespace = resourceNodeAlertTemplatesAlertTemplate["Namespace"].asString();
		if(!resourceNodeAlertTemplatesAlertTemplate["MetricName"].isNull())
			alertTemplateObject.metricName = resourceNodeAlertTemplatesAlertTemplate["MetricName"].asString();
		if(!resourceNodeAlertTemplatesAlertTemplate["Selector"].isNull())
			alertTemplateObject.selector = resourceNodeAlertTemplatesAlertTemplate["Selector"].asString();
		if(!resourceNodeAlertTemplatesAlertTemplate["Webhook"].isNull())
			alertTemplateObject.webhook = resourceNodeAlertTemplatesAlertTemplate["Webhook"].asString();
		auto escalationsNode = value["Escalations"];
		auto infoNode = escalationsNode["Info"];
		if(!infoNode["Statistics"].isNull())
			alertTemplateObject.escalations.info.statistics = infoNode["Statistics"].asString();
		if(!infoNode["ComparisonOperator"].isNull())
			alertTemplateObject.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
		if(!infoNode["Threshold"].isNull())
			alertTemplateObject.escalations.info.threshold = infoNode["Threshold"].asString();
		if(!infoNode["Times"].isNull())
			alertTemplateObject.escalations.info.times = std::stoi(infoNode["Times"].asString());
		auto warnNode = escalationsNode["Warn"];
		if(!warnNode["Statistics"].isNull())
			alertTemplateObject.escalations.warn.statistics = warnNode["Statistics"].asString();
		if(!warnNode["ComparisonOperator"].isNull())
			alertTemplateObject.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
		if(!warnNode["Threshold"].isNull())
			alertTemplateObject.escalations.warn.threshold = warnNode["Threshold"].asString();
		if(!warnNode["Times"].isNull())
			alertTemplateObject.escalations.warn.times = std::stoi(warnNode["Times"].asString());
		auto criticalNode = escalationsNode["Critical"];
		if(!criticalNode["Statistics"].isNull())
			alertTemplateObject.escalations.critical.statistics = criticalNode["Statistics"].asString();
		if(!criticalNode["ComparisonOperator"].isNull())
			alertTemplateObject.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
		if(!criticalNode["Threshold"].isNull())
			alertTemplateObject.escalations.critical.threshold = criticalNode["Threshold"].asString();
		if(!criticalNode["Times"].isNull())
			alertTemplateObject.escalations.critical.times = std::stoi(criticalNode["Times"].asString());
		resource_.alertTemplates.push_back(alertTemplateObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeMetricRuleTemplateAttributeResult::getMessage()const
{
	return message_;
}

DescribeMetricRuleTemplateAttributeResult::Resource DescribeMetricRuleTemplateAttributeResult::getResource()const
{
	return resource_;
}

int DescribeMetricRuleTemplateAttributeResult::getCode()const
{
	return code_;
}

bool DescribeMetricRuleTemplateAttributeResult::getSuccess()const
{
	return success_;
}

