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

#include <alibabacloud/edas/model/DescribeApplicationScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DescribeApplicationScalingRulesResult::DescribeApplicationScalingRulesResult() :
	ServiceResult()
{}

DescribeApplicationScalingRulesResult::DescribeApplicationScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationScalingRulesResult::~DescribeApplicationScalingRulesResult()
{}

void DescribeApplicationScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appScalingRulesNode = value["AppScalingRules"];
	if(!appScalingRulesNode["CurrentPage"].isNull())
		appScalingRules_.currentPage = std::stoi(appScalingRulesNode["CurrentPage"].asString());
	if(!appScalingRulesNode["PageSize"].isNull())
		appScalingRules_.pageSize = std::stoi(appScalingRulesNode["PageSize"].asString());
	if(!appScalingRulesNode["TotalSize"].isNull())
		appScalingRules_.totalSize = std::stol(appScalingRulesNode["TotalSize"].asString());
	auto allResultNode = appScalingRulesNode["Result"]["Rule"];
	for (auto appScalingRulesNodeResultRule : allResultNode)
	{
		AppScalingRules::Rule ruleObject;
		if(!appScalingRulesNodeResultRule["AppId"].isNull())
			ruleObject.appId = appScalingRulesNodeResultRule["AppId"].asString();
		if(!appScalingRulesNodeResultRule["ScaleRuleName"].isNull())
			ruleObject.scaleRuleName = appScalingRulesNodeResultRule["ScaleRuleName"].asString();
		if(!appScalingRulesNodeResultRule["ScaleRuleType"].isNull())
			ruleObject.scaleRuleType = appScalingRulesNodeResultRule["ScaleRuleType"].asString();
		if(!appScalingRulesNodeResultRule["ScaleRuleEnabled"].isNull())
			ruleObject.scaleRuleEnabled = appScalingRulesNodeResultRule["ScaleRuleEnabled"].asString() == "true";
		if(!appScalingRulesNodeResultRule["MinReplicas"].isNull())
			ruleObject.minReplicas = std::stoi(appScalingRulesNodeResultRule["MinReplicas"].asString());
		if(!appScalingRulesNodeResultRule["MaxReplicas"].isNull())
			ruleObject.maxReplicas = std::stoi(appScalingRulesNodeResultRule["MaxReplicas"].asString());
		if(!appScalingRulesNodeResultRule["CreateTime"].isNull())
			ruleObject.createTime = std::stol(appScalingRulesNodeResultRule["CreateTime"].asString());
		if(!appScalingRulesNodeResultRule["UpdateTime"].isNull())
			ruleObject.updateTime = std::stol(appScalingRulesNodeResultRule["UpdateTime"].asString());
		if(!appScalingRulesNodeResultRule["LastDisableTime"].isNull())
			ruleObject.lastDisableTime = std::stol(appScalingRulesNodeResultRule["LastDisableTime"].asString());
		auto metricNode = value["Metric"];
		if(!metricNode["MaxReplicas"].isNull())
			ruleObject.metric.maxReplicas = std::stoi(metricNode["MaxReplicas"].asString());
		if(!metricNode["MinReplicas"].isNull())
			ruleObject.metric.minReplicas = std::stoi(metricNode["MinReplicas"].asString());
		auto allMetricsNode = metricNode["Metrics"]["Metric"];
		for (auto metricNodeMetricsMetric : allMetricsNode)
		{
			AppScalingRules::Rule::Metric::Metric1 metric1Object;
			if(!metricNodeMetricsMetric["MetricType"].isNull())
				metric1Object.metricType = metricNodeMetricsMetric["MetricType"].asString();
			if(!metricNodeMetricsMetric["MetricTargetAverageUtilization"].isNull())
				metric1Object.metricTargetAverageUtilization = std::stoi(metricNodeMetricsMetric["MetricTargetAverageUtilization"].asString());
			ruleObject.metric.metrics.push_back(metric1Object);
		}
		auto triggerNode = value["Trigger"];
		if(!triggerNode["MaxReplicas"].isNull())
			ruleObject.trigger.maxReplicas = std::stoi(triggerNode["MaxReplicas"].asString());
		if(!triggerNode["MinReplicas"].isNull())
			ruleObject.trigger.minReplicas = std::stoi(triggerNode["MinReplicas"].asString());
		auto allTriggersNode = triggerNode["Triggers"]["Trigger"];
		for (auto triggerNodeTriggersTrigger : allTriggersNode)
		{
			AppScalingRules::Rule::Trigger::Trigger2 trigger2Object;
			if(!triggerNodeTriggersTrigger["Type"].isNull())
				trigger2Object.type = triggerNodeTriggersTrigger["Type"].asString();
			if(!triggerNodeTriggersTrigger["Name"].isNull())
				trigger2Object.name = triggerNodeTriggersTrigger["Name"].asString();
			if(!triggerNodeTriggersTrigger["MetaData"].isNull())
				trigger2Object.metaData = triggerNodeTriggersTrigger["MetaData"].asString();
			ruleObject.trigger.triggers.push_back(trigger2Object);
		}
		appScalingRules_.result.push_back(ruleObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

DescribeApplicationScalingRulesResult::AppScalingRules DescribeApplicationScalingRulesResult::getAppScalingRules()const
{
	return appScalingRules_;
}

std::string DescribeApplicationScalingRulesResult::getMessage()const
{
	return message_;
}

int DescribeApplicationScalingRulesResult::getCode()const
{
	return code_;
}

