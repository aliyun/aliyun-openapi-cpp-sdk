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
		if(!valueDatapointsAlarm["SilenceTime"].isNull())
			datapointsObject.silenceTime = valueDatapointsAlarm["SilenceTime"].asString();
		if(!valueDatapointsAlarm["MetricName"].isNull())
			datapointsObject.metricName = valueDatapointsAlarm["MetricName"].asString();
		if(!valueDatapointsAlarm["EvaluationCount"].isNull())
			datapointsObject.evaluationCount = valueDatapointsAlarm["EvaluationCount"].asString();
		if(!valueDatapointsAlarm["Webhook"].isNull())
			datapointsObject.webhook = valueDatapointsAlarm["Webhook"].asString();
		if(!valueDatapointsAlarm["State"].isNull())
			datapointsObject.state = valueDatapointsAlarm["State"].asString();
		if(!valueDatapointsAlarm["ContactGroups"].isNull())
			datapointsObject.contactGroups = valueDatapointsAlarm["ContactGroups"].asString();
		if(!valueDatapointsAlarm["Namespace"].isNull())
			datapointsObject._namespace = valueDatapointsAlarm["Namespace"].asString();
		if(!valueDatapointsAlarm["RuleName"].isNull())
			datapointsObject.ruleName = valueDatapointsAlarm["RuleName"].asString();
		if(!valueDatapointsAlarm["RuleId"].isNull())
			datapointsObject.ruleId = valueDatapointsAlarm["RuleId"].asString();
		if(!valueDatapointsAlarm["Period"].isNull())
			datapointsObject.period = valueDatapointsAlarm["Period"].asString();
		if(!valueDatapointsAlarm["ComparisonOperator"].isNull())
			datapointsObject.comparisonOperator = valueDatapointsAlarm["ComparisonOperator"].asString();
		if(!valueDatapointsAlarm["EndTime"].isNull())
			datapointsObject.endTime = valueDatapointsAlarm["EndTime"].asString();
		if(!valueDatapointsAlarm["StartTime"].isNull())
			datapointsObject.startTime = valueDatapointsAlarm["StartTime"].asString();
		if(!valueDatapointsAlarm["Threshold"].isNull())
			datapointsObject.threshold = valueDatapointsAlarm["Threshold"].asString();
		if(!valueDatapointsAlarm["Statistics"].isNull())
			datapointsObject.statistics = valueDatapointsAlarm["Statistics"].asString();
		if(!valueDatapointsAlarm["Enable"].isNull())
			datapointsObject.enable = valueDatapointsAlarm["Enable"].asString();
		datapoints_.push_back(datapointsObject);
	}
	auto allAlertListNode = value["AlertList"]["Alert"];
	for (auto valueAlertListAlert : allAlertListNode)
	{
		Alert alertListObject;
		if(!valueAlertListAlert["SilenceTime"].isNull())
			alertListObject.silenceTime = valueAlertListAlert["SilenceTime"].asString();
		if(!valueAlertListAlert["MetricName"].isNull())
			alertListObject.metricName = valueAlertListAlert["MetricName"].asString();
		if(!valueAlertListAlert["Webhook"].isNull())
			alertListObject.webhook = valueAlertListAlert["Webhook"].asString();
		if(!valueAlertListAlert["ContactGroups"].isNull())
			alertListObject.contactGroups = valueAlertListAlert["ContactGroups"].asString();
		if(!valueAlertListAlert["Namespace"].isNull())
			alertListObject._namespace = valueAlertListAlert["Namespace"].asString();
		if(!valueAlertListAlert["EffectiveInterval"].isNull())
			alertListObject.effectiveInterval = valueAlertListAlert["EffectiveInterval"].asString();
		if(!valueAlertListAlert["NoEffectiveInterval"].isNull())
			alertListObject.noEffectiveInterval = valueAlertListAlert["NoEffectiveInterval"].asString();
		if(!valueAlertListAlert["MailSubject"].isNull())
			alertListObject.mailSubject = valueAlertListAlert["MailSubject"].asString();
		if(!valueAlertListAlert["RuleName"].isNull())
			alertListObject.ruleName = valueAlertListAlert["RuleName"].asString();
		if(!valueAlertListAlert["RuleId"].isNull())
			alertListObject.ruleId = valueAlertListAlert["RuleId"].asString();
		if(!valueAlertListAlert["Period"].isNull())
			alertListObject.period = valueAlertListAlert["Period"].asString();
		if(!valueAlertListAlert["AlertState"].isNull())
			alertListObject.alertState = valueAlertListAlert["AlertState"].asString();
		if(!valueAlertListAlert["Dimensions"].isNull())
			alertListObject.dimensions = valueAlertListAlert["Dimensions"].asString();
		if(!valueAlertListAlert["EnableState"].isNull())
			alertListObject.enableState = valueAlertListAlert["EnableState"].asString() == "true";
		if(!valueAlertListAlert["Resources"].isNull())
			alertListObject.resources = valueAlertListAlert["Resources"].asString();
		auto escalationsNode = value["Escalations"];
		auto infoNode = escalationsNode["Info"];
		if(!infoNode["ComparisonOperator"].isNull())
			alertListObject.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
		if(!infoNode["Times"].isNull())
			alertListObject.escalations.info.times = infoNode["Times"].asString();
		if(!infoNode["Threshold"].isNull())
			alertListObject.escalations.info.threshold = infoNode["Threshold"].asString();
		if(!infoNode["Statistics"].isNull())
			alertListObject.escalations.info.statistics = infoNode["Statistics"].asString();
		auto warnNode = escalationsNode["Warn"];
		if(!warnNode["ComparisonOperator"].isNull())
			alertListObject.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
		if(!warnNode["Times"].isNull())
			alertListObject.escalations.warn.times = warnNode["Times"].asString();
		if(!warnNode["Threshold"].isNull())
			alertListObject.escalations.warn.threshold = warnNode["Threshold"].asString();
		if(!warnNode["Statistics"].isNull())
			alertListObject.escalations.warn.statistics = warnNode["Statistics"].asString();
		auto criticalNode = escalationsNode["Critical"];
		if(!criticalNode["ComparisonOperator"].isNull())
			alertListObject.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
		if(!criticalNode["Times"].isNull())
			alertListObject.escalations.critical.times = criticalNode["Times"].asString();
		if(!criticalNode["Threshold"].isNull())
			alertListObject.escalations.critical.threshold = criticalNode["Threshold"].asString();
		if(!criticalNode["Statistics"].isNull())
			alertListObject.escalations.critical.statistics = criticalNode["Statistics"].asString();
		alertList_.push_back(alertListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeActiveMetricRuleListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeActiveMetricRuleListResult::Alert> DescribeActiveMetricRuleListResult::getAlertList()const
{
	return alertList_;
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

