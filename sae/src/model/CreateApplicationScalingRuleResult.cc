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

#include <alibabacloud/sae/model/CreateApplicationScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

CreateApplicationScalingRuleResult::CreateApplicationScalingRuleResult() :
	ServiceResult()
{}

CreateApplicationScalingRuleResult::CreateApplicationScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateApplicationScalingRuleResult::~CreateApplicationScalingRuleResult()
{}

void CreateApplicationScalingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["LastDisableTime"].isNull())
		data_.lastDisableTime = std::stol(dataNode["LastDisableTime"].asString());
	if(!dataNode["ScaleRuleEnabled"].isNull())
		data_.scaleRuleEnabled = dataNode["ScaleRuleEnabled"].asString() == "true";
	if(!dataNode["ScaleRuleType"].isNull())
		data_.scaleRuleType = dataNode["ScaleRuleType"].asString();
	if(!dataNode["ScaleRuleName"].isNull())
		data_.scaleRuleName = dataNode["ScaleRuleName"].asString();
	auto timerNode = dataNode["Timer"];
	if(!timerNode["EndDate"].isNull())
		data_.timer.endDate = timerNode["EndDate"].asString();
	if(!timerNode["BeginDate"].isNull())
		data_.timer.beginDate = timerNode["BeginDate"].asString();
	if(!timerNode["Period"].isNull())
		data_.timer.period = timerNode["Period"].asString();
	auto allSchedulesNode = timerNode["Schedules"]["Schedule"];
	for (auto timerNodeSchedulesSchedule : allSchedulesNode)
	{
		Data::Timer::Schedule scheduleObject;
		if(!timerNodeSchedulesSchedule["AtTime"].isNull())
			scheduleObject.atTime = timerNodeSchedulesSchedule["AtTime"].asString();
		if(!timerNodeSchedulesSchedule["TargetReplicas"].isNull())
			scheduleObject.targetReplicas = std::stoi(timerNodeSchedulesSchedule["TargetReplicas"].asString());
		if(!timerNodeSchedulesSchedule["MaxReplicas"].isNull())
			scheduleObject.maxReplicas = std::stoi(timerNodeSchedulesSchedule["MaxReplicas"].asString());
		if(!timerNodeSchedulesSchedule["MinReplicas"].isNull())
			scheduleObject.minReplicas = std::stoi(timerNodeSchedulesSchedule["MinReplicas"].asString());
		data_.timer.schedules.push_back(scheduleObject);
	}
	auto metricNode = dataNode["Metric"];
	if(!metricNode["MaxReplicas"].isNull())
		data_.metric.maxReplicas = std::stoi(metricNode["MaxReplicas"].asString());
	if(!metricNode["MinReplicas"].isNull())
		data_.metric.minReplicas = std::stoi(metricNode["MinReplicas"].asString());
	auto allMetricsNode = metricNode["Metrics"]["Metric"];
	for (auto metricNodeMetricsMetric : allMetricsNode)
	{
		Data::Metric::Metric1 metric1Object;
		if(!metricNodeMetricsMetric["MetricTargetAverageUtilization"].isNull())
			metric1Object.metricTargetAverageUtilization = std::stoi(metricNodeMetricsMetric["MetricTargetAverageUtilization"].asString());
		if(!metricNodeMetricsMetric["MetricType"].isNull())
			metric1Object.metricType = metricNodeMetricsMetric["MetricType"].asString();
		if(!metricNodeMetricsMetric["SlbProject"].isNull())
			metric1Object.slbProject = metricNodeMetricsMetric["SlbProject"].asString();
		if(!metricNodeMetricsMetric["SlbLogstore"].isNull())
			metric1Object.slbLogstore = metricNodeMetricsMetric["SlbLogstore"].asString();
		if(!metricNodeMetricsMetric["Vport"].isNull())
			metric1Object.vport = metricNodeMetricsMetric["Vport"].asString();
		if(!metricNodeMetricsMetric["SlbId"].isNull())
			metric1Object.slbId = metricNodeMetricsMetric["SlbId"].asString();
		data_.metric.metrics.push_back(metric1Object);
	}
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateApplicationScalingRuleResult::getMessage()const
{
	return message_;
}

std::string CreateApplicationScalingRuleResult::getTraceId()const
{
	return traceId_;
}

CreateApplicationScalingRuleResult::Data CreateApplicationScalingRuleResult::getData()const
{
	return data_;
}

std::string CreateApplicationScalingRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateApplicationScalingRuleResult::getCode()const
{
	return code_;
}

bool CreateApplicationScalingRuleResult::getSuccess()const
{
	return success_;
}

