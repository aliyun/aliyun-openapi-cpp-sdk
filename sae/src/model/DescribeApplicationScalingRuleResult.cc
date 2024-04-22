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

#include <alibabacloud/sae/model/DescribeApplicationScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationScalingRuleResult::DescribeApplicationScalingRuleResult() :
	ServiceResult()
{}

DescribeApplicationScalingRuleResult::DescribeApplicationScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationScalingRuleResult::~DescribeApplicationScalingRuleResult()
{}

void DescribeApplicationScalingRuleResult::parse(const std::string &payload)
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
	if(!dataNode["MinReadyInstances"].isNull())
		data_.minReadyInstances = std::stoi(dataNode["MinReadyInstances"].asString());
	if(!dataNode["MinReadyInstanceRatio"].isNull())
		data_.minReadyInstanceRatio = std::stoi(dataNode["MinReadyInstanceRatio"].asString());
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
		if(!timerNodeSchedulesSchedule["MinReplicas"].isNull())
			scheduleObject.minReplicas = std::stoi(timerNodeSchedulesSchedule["MinReplicas"].asString());
		if(!timerNodeSchedulesSchedule["MaxReplicas"].isNull())
			scheduleObject.maxReplicas = std::stoi(timerNodeSchedulesSchedule["MaxReplicas"].asString());
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
	auto metricsStatusNode = metricNode["MetricsStatus"];
	if(!metricsStatusNode["DesiredReplicas"].isNull())
		data_.metric.metricsStatus.desiredReplicas = std::stol(metricsStatusNode["DesiredReplicas"].asString());
	if(!metricsStatusNode["NextScaleTimePeriod"].isNull())
		data_.metric.metricsStatus.nextScaleTimePeriod = std::stoi(metricsStatusNode["NextScaleTimePeriod"].asString());
	if(!metricsStatusNode["CurrentReplicas"].isNull())
		data_.metric.metricsStatus.currentReplicas = std::stol(metricsStatusNode["CurrentReplicas"].asString());
	if(!metricsStatusNode["LastScaleTime"].isNull())
		data_.metric.metricsStatus.lastScaleTime = metricsStatusNode["LastScaleTime"].asString();
	auto allCurrentMetricsNode = metricsStatusNode["CurrentMetrics"]["CurrentMetric"];
	for (auto metricsStatusNodeCurrentMetricsCurrentMetric : allCurrentMetricsNode)
	{
		Data::Metric::MetricsStatus::CurrentMetric currentMetricObject;
		if(!metricsStatusNodeCurrentMetricsCurrentMetric["Type"].isNull())
			currentMetricObject.type = metricsStatusNodeCurrentMetricsCurrentMetric["Type"].asString();
		if(!metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].isNull())
			currentMetricObject.currentValue = std::stol(metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].asString());
		if(!metricsStatusNodeCurrentMetricsCurrentMetric["Name"].isNull())
			currentMetricObject.name = metricsStatusNodeCurrentMetricsCurrentMetric["Name"].asString();
		data_.metric.metricsStatus.currentMetrics.push_back(currentMetricObject);
	}
	auto allNextScaleMetricsNode = metricsStatusNode["NextScaleMetrics"]["NextScaleMetric"];
	for (auto metricsStatusNodeNextScaleMetricsNextScaleMetric : allNextScaleMetricsNode)
	{
		Data::Metric::MetricsStatus::NextScaleMetric nextScaleMetricObject;
		if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].isNull())
			nextScaleMetricObject.nextScaleOutAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].asString());
		if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].isNull())
			nextScaleMetricObject.nextScaleInAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].asString());
		if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].isNull())
			nextScaleMetricObject.name = metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].asString();
		data_.metric.metricsStatus.nextScaleMetrics.push_back(nextScaleMetricObject);
	}
	auto scaleUpRulesNode = metricNode["ScaleUpRules"];
	if(!scaleUpRulesNode["Step"].isNull())
		data_.metric.scaleUpRules.step = std::stol(scaleUpRulesNode["Step"].asString());
	if(!scaleUpRulesNode["StabilizationWindowSeconds"].isNull())
		data_.metric.scaleUpRules.stabilizationWindowSeconds = std::stol(scaleUpRulesNode["StabilizationWindowSeconds"].asString());
	if(!scaleUpRulesNode["Disabled"].isNull())
		data_.metric.scaleUpRules.disabled = scaleUpRulesNode["Disabled"].asString() == "true";
	auto scaleDownRulesNode = metricNode["ScaleDownRules"];
	if(!scaleDownRulesNode["Step"].isNull())
		data_.metric.scaleDownRules.step = std::stol(scaleDownRulesNode["Step"].asString());
	if(!scaleDownRulesNode["StabilizationWindowSeconds"].isNull())
		data_.metric.scaleDownRules.stabilizationWindowSeconds = std::stol(scaleDownRulesNode["StabilizationWindowSeconds"].asString());
	if(!scaleDownRulesNode["Disabled"].isNull())
		data_.metric.scaleDownRules.disabled = scaleDownRulesNode["Disabled"].asString() == "true";
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

std::string DescribeApplicationScalingRuleResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationScalingRuleResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationScalingRuleResult::Data DescribeApplicationScalingRuleResult::getData()const
{
	return data_;
}

std::string DescribeApplicationScalingRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationScalingRuleResult::getCode()const
{
	return code_;
}

bool DescribeApplicationScalingRuleResult::getSuccess()const
{
	return success_;
}

