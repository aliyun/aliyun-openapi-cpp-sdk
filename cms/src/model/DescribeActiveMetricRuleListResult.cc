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

#include <alibabacloud/cms/model/DescribeActiveMetricRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeActiveMetricRuleListResult::DescribeActiveMetricRuleListResult() :
	ServiceResult()
{}

DescribeActiveMetricRuleListResult::DescribeActiveMetricRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveMetricRuleListResult::~DescribeActiveMetricRuleListResult()
{}

void DescribeActiveMetricRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatapointsNode = value["Datapoints"]["Alarm"];
	for (auto valueDatapointsAlarm : allDatapointsNode)
	{
		Alarm datapointsObject;
		if(!valueDatapointsAlarm["RuleId"].isNull())
			datapointsObject.ruleId = valueDatapointsAlarm["RuleId"].asString();
		if(!valueDatapointsAlarm["Namespace"].isNull())
			datapointsObject._namespace = valueDatapointsAlarm["Namespace"].asString();
		if(!valueDatapointsAlarm["MetricName"].isNull())
			datapointsObject.metricName = valueDatapointsAlarm["MetricName"].asString();
		if(!valueDatapointsAlarm["Period"].isNull())
			datapointsObject.period = valueDatapointsAlarm["Period"].asString();
		if(!valueDatapointsAlarm["Statistics"].isNull())
			datapointsObject.statistics = valueDatapointsAlarm["Statistics"].asString();
		if(!valueDatapointsAlarm["ComparisonOperator"].isNull())
			datapointsObject.comparisonOperator = valueDatapointsAlarm["ComparisonOperator"].asString();
		if(!valueDatapointsAlarm["Threshold"].isNull())
			datapointsObject.threshold = valueDatapointsAlarm["Threshold"].asString();
		if(!valueDatapointsAlarm["EvaluationCount"].isNull())
			datapointsObject.evaluationCount = valueDatapointsAlarm["EvaluationCount"].asString();
		if(!valueDatapointsAlarm["StartTime"].isNull())
			datapointsObject.startTime = valueDatapointsAlarm["StartTime"].asString();
		if(!valueDatapointsAlarm["EndTime"].isNull())
			datapointsObject.endTime = valueDatapointsAlarm["EndTime"].asString();
		if(!valueDatapointsAlarm["SilenceTime"].isNull())
			datapointsObject.silenceTime = valueDatapointsAlarm["SilenceTime"].asString();
		if(!valueDatapointsAlarm["Enable"].isNull())
			datapointsObject.enable = valueDatapointsAlarm["Enable"].asString();
		if(!valueDatapointsAlarm["State"].isNull())
			datapointsObject.state = valueDatapointsAlarm["State"].asString();
		if(!valueDatapointsAlarm["ContactGroups"].isNull())
			datapointsObject.contactGroups = valueDatapointsAlarm["ContactGroups"].asString();
		if(!valueDatapointsAlarm["Webhook"].isNull())
			datapointsObject.webhook = valueDatapointsAlarm["Webhook"].asString();
		if(!valueDatapointsAlarm["RuleName"].isNull())
			datapointsObject.ruleName = valueDatapointsAlarm["RuleName"].asString();
		datapoints_.push_back(datapointsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeActiveMetricRuleListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeActiveMetricRuleListResult::Alarm> DescribeActiveMetricRuleListResult::getDatapoints()const
{
	return datapoints_;
}

std::string DescribeActiveMetricRuleListResult::getCode()const
{
	return code_;
}

bool DescribeActiveMetricRuleListResult::getSuccess()const
{
	return success_;
}

