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

#include <alibabacloud/sae/model/DescribeApplicationScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

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
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allApplicationScalingRulesNode = dataNode["ApplicationScalingRules"]["ApplicationScalingRule"];
	for (auto dataNodeApplicationScalingRulesApplicationScalingRule : allApplicationScalingRulesNode)
	{
		Data::ApplicationScalingRule applicationScalingRuleObject;
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["UpdateTime"].isNull())
			applicationScalingRuleObject.updateTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["UpdateTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["AppId"].isNull())
			applicationScalingRuleObject.appId = dataNodeApplicationScalingRulesApplicationScalingRule["AppId"].asString();
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["CreateTime"].isNull())
			applicationScalingRuleObject.createTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["CreateTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["LastDisableTime"].isNull())
			applicationScalingRuleObject.lastDisableTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["LastDisableTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleEnabled"].isNull())
			applicationScalingRuleObject.scaleRuleEnabled = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleEnabled"].asString() == "true";
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleType"].isNull())
			applicationScalingRuleObject.scaleRuleType = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleType"].asString();
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleName"].isNull())
			applicationScalingRuleObject.scaleRuleName = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleName"].asString();
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["MinReadyInstances"].isNull())
			applicationScalingRuleObject.minReadyInstances = std::stoi(dataNodeApplicationScalingRulesApplicationScalingRule["MinReadyInstances"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["MinReadyInstanceRatio"].isNull())
			applicationScalingRuleObject.minReadyInstanceRatio = std::stoi(dataNodeApplicationScalingRulesApplicationScalingRule["MinReadyInstanceRatio"].asString());
		auto timerNode = value["Timer"];
		if(!timerNode["EndDate"].isNull())
			applicationScalingRuleObject.timer.endDate = timerNode["EndDate"].asString();
		if(!timerNode["BeginDate"].isNull())
			applicationScalingRuleObject.timer.beginDate = timerNode["BeginDate"].asString();
		if(!timerNode["Period"].isNull())
			applicationScalingRuleObject.timer.period = timerNode["Period"].asString();
		auto allSchedulesNode = timerNode["Schedules"]["Schedule"];
		for (auto timerNodeSchedulesSchedule : allSchedulesNode)
		{
			Data::ApplicationScalingRule::Timer::Schedule scheduleObject;
			if(!timerNodeSchedulesSchedule["AtTime"].isNull())
				scheduleObject.atTime = timerNodeSchedulesSchedule["AtTime"].asString();
			if(!timerNodeSchedulesSchedule["TargetReplicas"].isNull())
				scheduleObject.targetReplicas = std::stoi(timerNodeSchedulesSchedule["TargetReplicas"].asString());
			if(!timerNodeSchedulesSchedule["MaxReplicas"].isNull())
				scheduleObject.maxReplicas = std::stol(timerNodeSchedulesSchedule["MaxReplicas"].asString());
			if(!timerNodeSchedulesSchedule["MinReplicas"].isNull())
				scheduleObject.minReplicas = std::stol(timerNodeSchedulesSchedule["MinReplicas"].asString());
			applicationScalingRuleObject.timer.schedules.push_back(scheduleObject);
		}
		auto metricNode = value["Metric"];
		if(!metricNode["MaxReplicas"].isNull())
			applicationScalingRuleObject.metric.maxReplicas = std::stoi(metricNode["MaxReplicas"].asString());
		if(!metricNode["MinReplicas"].isNull())
			applicationScalingRuleObject.metric.minReplicas = std::stoi(metricNode["MinReplicas"].asString());
		auto allMetricsNode = metricNode["Metrics"]["Metric"];
		for (auto metricNodeMetricsMetric : allMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::Metric1 metric1Object;
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
			applicationScalingRuleObject.metric.metrics.push_back(metric1Object);
		}
		auto metricsStatusNode = metricNode["MetricsStatus"];
		if(!metricsStatusNode["DesiredReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.desiredReplicas = std::stol(metricsStatusNode["DesiredReplicas"].asString());
		if(!metricsStatusNode["NextScaleTimePeriod"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.nextScaleTimePeriod = std::stoi(metricsStatusNode["NextScaleTimePeriod"].asString());
		if(!metricsStatusNode["CurrentReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.currentReplicas = std::stol(metricsStatusNode["CurrentReplicas"].asString());
		if(!metricsStatusNode["LastScaleTime"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.lastScaleTime = metricsStatusNode["LastScaleTime"].asString();
		if(!metricsStatusNode["MaxReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.maxReplicas = std::stol(metricsStatusNode["MaxReplicas"].asString());
		if(!metricsStatusNode["MinReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.minReplicas = std::stol(metricsStatusNode["MinReplicas"].asString());
		auto allCurrentMetricsNode = metricsStatusNode["CurrentMetrics"]["CurrentMetric"];
		for (auto metricsStatusNodeCurrentMetricsCurrentMetric : allCurrentMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::MetricsStatus::CurrentMetric currentMetricObject;
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["Type"].isNull())
				currentMetricObject.type = metricsStatusNodeCurrentMetricsCurrentMetric["Type"].asString();
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].isNull())
				currentMetricObject.currentValue = std::stol(metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].asString());
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["Name"].isNull())
				currentMetricObject.name = metricsStatusNodeCurrentMetricsCurrentMetric["Name"].asString();
			applicationScalingRuleObject.metric.metricsStatus.currentMetrics.push_back(currentMetricObject);
		}
		auto allNextScaleMetricsNode = metricsStatusNode["NextScaleMetrics"]["NextScaleMetric"];
		for (auto metricsStatusNodeNextScaleMetricsNextScaleMetric : allNextScaleMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::MetricsStatus::NextScaleMetric nextScaleMetricObject;
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].isNull())
				nextScaleMetricObject.nextScaleOutAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].asString());
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].isNull())
				nextScaleMetricObject.nextScaleInAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].asString());
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].isNull())
				nextScaleMetricObject.name = metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].asString();
			applicationScalingRuleObject.metric.metricsStatus.nextScaleMetrics.push_back(nextScaleMetricObject);
		}
		auto scaleUpRulesNode = metricNode["ScaleUpRules"];
		if(!scaleUpRulesNode["Step"].isNull())
			applicationScalingRuleObject.metric.scaleUpRules.step = std::stol(scaleUpRulesNode["Step"].asString());
		if(!scaleUpRulesNode["StabilizationWindowSeconds"].isNull())
			applicationScalingRuleObject.metric.scaleUpRules.stabilizationWindowSeconds = std::stol(scaleUpRulesNode["StabilizationWindowSeconds"].asString());
		if(!scaleUpRulesNode["Disabled"].isNull())
			applicationScalingRuleObject.metric.scaleUpRules.disabled = scaleUpRulesNode["Disabled"].asString() == "true";
		auto scaleDownRulesNode = metricNode["ScaleDownRules"];
		if(!scaleDownRulesNode["Step"].isNull())
			applicationScalingRuleObject.metric.scaleDownRules.step = std::stol(scaleDownRulesNode["Step"].asString());
		if(!scaleDownRulesNode["StabilizationWindowSeconds"].isNull())
			applicationScalingRuleObject.metric.scaleDownRules.stabilizationWindowSeconds = std::stol(scaleDownRulesNode["StabilizationWindowSeconds"].asString());
		if(!scaleDownRulesNode["Disabled"].isNull())
			applicationScalingRuleObject.metric.scaleDownRules.disabled = scaleDownRulesNode["Disabled"].asString() == "true";
		data_.applicationScalingRules.push_back(applicationScalingRuleObject);
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

std::string DescribeApplicationScalingRulesResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationScalingRulesResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationScalingRulesResult::Data DescribeApplicationScalingRulesResult::getData()const
{
	return data_;
}

std::string DescribeApplicationScalingRulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationScalingRulesResult::getCode()const
{
	return code_;
}

bool DescribeApplicationScalingRulesResult::getSuccess()const
{
	return success_;
}

