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

#include <alibabacloud/edas/model/EnableApplicationScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

EnableApplicationScalingRuleResult::EnableApplicationScalingRuleResult() :
	ServiceResult()
{}

EnableApplicationScalingRuleResult::EnableApplicationScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EnableApplicationScalingRuleResult::~EnableApplicationScalingRuleResult()
{}

void EnableApplicationScalingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appScalingRuleNode = value["AppScalingRule"];
	if(!appScalingRuleNode["AppId"].isNull())
		appScalingRule_.appId = appScalingRuleNode["AppId"].asString();
	if(!appScalingRuleNode["ScaleRuleName"].isNull())
		appScalingRule_.scaleRuleName = appScalingRuleNode["ScaleRuleName"].asString();
	if(!appScalingRuleNode["ScaleRuleType"].isNull())
		appScalingRule_.scaleRuleType = appScalingRuleNode["ScaleRuleType"].asString();
	if(!appScalingRuleNode["ScaleRuleEnabled"].isNull())
		appScalingRule_.scaleRuleEnabled = appScalingRuleNode["ScaleRuleEnabled"].asString() == "true";
	if(!appScalingRuleNode["MinReplicas"].isNull())
		appScalingRule_.minReplicas = std::stoi(appScalingRuleNode["MinReplicas"].asString());
	if(!appScalingRuleNode["MaxReplicas"].isNull())
		appScalingRule_.maxReplicas = std::stoi(appScalingRuleNode["MaxReplicas"].asString());
	if(!appScalingRuleNode["CreateTime"].isNull())
		appScalingRule_.createTime = std::stol(appScalingRuleNode["CreateTime"].asString());
	if(!appScalingRuleNode["UpdateTime"].isNull())
		appScalingRule_.updateTime = std::stol(appScalingRuleNode["UpdateTime"].asString());
	if(!appScalingRuleNode["LastDisableTime"].isNull())
		appScalingRule_.lastDisableTime = std::stol(appScalingRuleNode["LastDisableTime"].asString());
	auto metricNode = appScalingRuleNode["Metric"];
	if(!metricNode["MaxReplicas"].isNull())
		appScalingRule_.metric.maxReplicas = std::stoi(metricNode["MaxReplicas"].asString());
	if(!metricNode["MinReplicas"].isNull())
		appScalingRule_.metric.minReplicas = std::stoi(metricNode["MinReplicas"].asString());
	auto allMetricsNode = metricNode["Metrics"]["Metric"];
	for (auto metricNodeMetricsMetric : allMetricsNode)
	{
		AppScalingRule::Metric::Metric1 metric1Object;
		if(!metricNodeMetricsMetric["MetricType"].isNull())
			metric1Object.metricType = metricNodeMetricsMetric["MetricType"].asString();
		if(!metricNodeMetricsMetric["MetricTargetAverageUtilization"].isNull())
			metric1Object.metricTargetAverageUtilization = std::stoi(metricNodeMetricsMetric["MetricTargetAverageUtilization"].asString());
		appScalingRule_.metric.metrics.push_back(metric1Object);
	}
	auto triggerNode = appScalingRuleNode["Trigger"];
	if(!triggerNode["MaxReplicas"].isNull())
		appScalingRule_.trigger.maxReplicas = std::stoi(triggerNode["MaxReplicas"].asString());
	if(!triggerNode["MinReplicas"].isNull())
		appScalingRule_.trigger.minReplicas = std::stoi(triggerNode["MinReplicas"].asString());
	auto allTriggersNode = triggerNode["Triggers"]["Trigger"];
	for (auto triggerNodeTriggersTrigger : allTriggersNode)
	{
		AppScalingRule::Trigger::Trigger2 trigger2Object;
		if(!triggerNodeTriggersTrigger["Type"].isNull())
			trigger2Object.type = triggerNodeTriggersTrigger["Type"].asString();
		if(!triggerNodeTriggersTrigger["Name"].isNull())
			trigger2Object.name = triggerNodeTriggersTrigger["Name"].asString();
		if(!triggerNodeTriggersTrigger["MetaData"].isNull())
			trigger2Object.metaData = triggerNodeTriggersTrigger["MetaData"].asString();
		appScalingRule_.trigger.triggers.push_back(trigger2Object);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string EnableApplicationScalingRuleResult::getMessage()const
{
	return message_;
}

EnableApplicationScalingRuleResult::AppScalingRule EnableApplicationScalingRuleResult::getAppScalingRule()const
{
	return appScalingRule_;
}

int EnableApplicationScalingRuleResult::getCode()const
{
	return code_;
}

