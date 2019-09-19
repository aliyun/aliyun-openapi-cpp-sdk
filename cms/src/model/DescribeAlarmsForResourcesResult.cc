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

#include <alibabacloud/cms/model/DescribeAlarmsForResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlarmsForResourcesResult::DescribeAlarmsForResourcesResult() :
	ServiceResult()
{}

DescribeAlarmsForResourcesResult::DescribeAlarmsForResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmsForResourcesResult::~DescribeAlarmsForResourcesResult()
{}

void DescribeAlarmsForResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatapointsNode = value["Datapoints"]["Alarm"];
	for (auto valueDatapointsAlarm : allDatapointsNode)
	{
		Alarm datapointsObject;
		if(!valueDatapointsAlarm["Uuid"].isNull())
			datapointsObject.uuid = valueDatapointsAlarm["Uuid"].asString();
		if(!valueDatapointsAlarm["Name"].isNull())
			datapointsObject.name = valueDatapointsAlarm["Name"].asString();
		if(!valueDatapointsAlarm["Namespace"].isNull())
			datapointsObject._namespace = valueDatapointsAlarm["Namespace"].asString();
		if(!valueDatapointsAlarm["MetricName"].isNull())
			datapointsObject.metricName = valueDatapointsAlarm["MetricName"].asString();
		if(!valueDatapointsAlarm["Period"].isNull())
			datapointsObject.period = valueDatapointsAlarm["Period"].asString();
		if(!valueDatapointsAlarm["EvaluationCount"].isNull())
			datapointsObject.evaluationCount = valueDatapointsAlarm["EvaluationCount"].asString();
		if(!valueDatapointsAlarm["EffectiveInterval"].isNull())
			datapointsObject.effectiveInterval = valueDatapointsAlarm["EffectiveInterval"].asString();
		if(!valueDatapointsAlarm["NoEffectiveInterval"].isNull())
			datapointsObject.noEffectiveInterval = valueDatapointsAlarm["NoEffectiveInterval"].asString();
		if(!valueDatapointsAlarm["SilenceTime"].isNull())
			datapointsObject.silenceTime = valueDatapointsAlarm["SilenceTime"].asString();
		if(!valueDatapointsAlarm["Enable"].isNull())
			datapointsObject.enable = valueDatapointsAlarm["Enable"].asString() == "true";
		if(!valueDatapointsAlarm["State"].isNull())
			datapointsObject.state = valueDatapointsAlarm["State"].asString();
		if(!valueDatapointsAlarm["ContactGroups"].isNull())
			datapointsObject.contactGroups = valueDatapointsAlarm["ContactGroups"].asString();
		if(!valueDatapointsAlarm["Webhook"].isNull())
			datapointsObject.webhook = valueDatapointsAlarm["Webhook"].asString();
		if(!valueDatapointsAlarm["Subject"].isNull())
			datapointsObject.subject = valueDatapointsAlarm["Subject"].asString();
		if(!valueDatapointsAlarm["DisplayName"].isNull())
			datapointsObject.displayName = valueDatapointsAlarm["DisplayName"].asString();
		if(!valueDatapointsAlarm["Resources"].isNull())
			datapointsObject.resources = valueDatapointsAlarm["Resources"].asString();
		if(!valueDatapointsAlarm["Level"].isNull())
			datapointsObject.level = valueDatapointsAlarm["Level"].asString();
		if(!valueDatapointsAlarm["GroupId"].isNull())
			datapointsObject.groupId = valueDatapointsAlarm["GroupId"].asString();
		if(!valueDatapointsAlarm["GroupName"].isNull())
			datapointsObject.groupName = valueDatapointsAlarm["GroupName"].asString();
		if(!valueDatapointsAlarm["Statistics"].isNull())
			datapointsObject.statistics = valueDatapointsAlarm["Statistics"].asString();
		if(!valueDatapointsAlarm["ComparisonOperator"].isNull())
			datapointsObject.comparisonOperator = valueDatapointsAlarm["ComparisonOperator"].asString();
		if(!valueDatapointsAlarm["Threshold"].isNull())
			datapointsObject.threshold = valueDatapointsAlarm["Threshold"].asString();
		auto escalationsNode = value["Escalations"];
		auto infoNode = escalationsNode["Info"];
		if(!infoNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
		if(!infoNode["Statistics"].isNull())
			datapointsObject.escalations.info.statistics = infoNode["Statistics"].asString();
		if(!infoNode["Threshold"].isNull())
			datapointsObject.escalations.info.threshold = infoNode["Threshold"].asString();
		if(!infoNode["Times"].isNull())
			datapointsObject.escalations.info.times = infoNode["Times"].asString();
		auto warnNode = escalationsNode["Warn"];
		if(!warnNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
		if(!warnNode["Statistics"].isNull())
			datapointsObject.escalations.warn.statistics = warnNode["Statistics"].asString();
		if(!warnNode["Threshold"].isNull())
			datapointsObject.escalations.warn.threshold = warnNode["Threshold"].asString();
		if(!warnNode["Times"].isNull())
			datapointsObject.escalations.warn.times = warnNode["Times"].asString();
		auto criticalNode = escalationsNode["Critical"];
		if(!criticalNode["ComparisonOperator"].isNull())
			datapointsObject.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
		if(!criticalNode["Statistics"].isNull())
			datapointsObject.escalations.critical.statistics = criticalNode["Statistics"].asString();
		if(!criticalNode["Threshold"].isNull())
			datapointsObject.escalations.critical.threshold = criticalNode["Threshold"].asString();
		if(!criticalNode["Times"].isNull())
			datapointsObject.escalations.critical.times = criticalNode["Times"].asString();
		datapoints_.push_back(datapointsObject);
	}
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Dimensions"].isNull())
		dimensions_ = value["Dimensions"].asString();

}

std::string DescribeAlarmsForResourcesResult::getMessage()const
{
	return message_;
}

std::string DescribeAlarmsForResourcesResult::getTotal()const
{
	return total_;
}

std::string DescribeAlarmsForResourcesResult::getTraceId()const
{
	return traceId_;
}

std::string DescribeAlarmsForResourcesResult::getDimensions()const
{
	return dimensions_;
}

std::vector<DescribeAlarmsForResourcesResult::Alarm> DescribeAlarmsForResourcesResult::getDatapoints()const
{
	return datapoints_;
}

int DescribeAlarmsForResourcesResult::getCode()const
{
	return code_;
}

bool DescribeAlarmsForResourcesResult::getSuccess()const
{
	return success_;
}

