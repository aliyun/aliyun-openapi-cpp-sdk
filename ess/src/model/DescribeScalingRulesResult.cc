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

#include <alibabacloud/ess/model/DescribeScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingRulesResult::DescribeScalingRulesResult() :
	ServiceResult()
{}

DescribeScalingRulesResult::DescribeScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingRulesResult::~DescribeScalingRulesResult()
{}

void DescribeScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingRulesNode = value["ScalingRules"]["ScalingRule"];
	for (auto valueScalingRulesScalingRule : allScalingRulesNode)
	{
		ScalingRule scalingRulesObject;
		if(!valueScalingRulesScalingRule["MetricName"].isNull())
			scalingRulesObject.metricName = valueScalingRulesScalingRule["MetricName"].asString();
		if(!valueScalingRulesScalingRule["AdjustmentType"].isNull())
			scalingRulesObject.adjustmentType = valueScalingRulesScalingRule["AdjustmentType"].asString();
		if(!valueScalingRulesScalingRule["InitialMaxSize"].isNull())
			scalingRulesObject.initialMaxSize = std::stoi(valueScalingRulesScalingRule["InitialMaxSize"].asString());
		if(!valueScalingRulesScalingRule["EstimatedInstanceWarmup"].isNull())
			scalingRulesObject.estimatedInstanceWarmup = std::stoi(valueScalingRulesScalingRule["EstimatedInstanceWarmup"].asString());
		if(!valueScalingRulesScalingRule["ScaleOutEvaluationCount"].isNull())
			scalingRulesObject.scaleOutEvaluationCount = std::stoi(valueScalingRulesScalingRule["ScaleOutEvaluationCount"].asString());
		if(!valueScalingRulesScalingRule["PredictiveScalingMode"].isNull())
			scalingRulesObject.predictiveScalingMode = valueScalingRulesScalingRule["PredictiveScalingMode"].asString();
		if(!valueScalingRulesScalingRule["MinAdjustmentMagnitude"].isNull())
			scalingRulesObject.minAdjustmentMagnitude = std::stoi(valueScalingRulesScalingRule["MinAdjustmentMagnitude"].asString());
		if(!valueScalingRulesScalingRule["ScalingRuleAri"].isNull())
			scalingRulesObject.scalingRuleAri = valueScalingRulesScalingRule["ScalingRuleAri"].asString();
		if(!valueScalingRulesScalingRule["PredictiveTaskBufferTime"].isNull())
			scalingRulesObject.predictiveTaskBufferTime = std::stoi(valueScalingRulesScalingRule["PredictiveTaskBufferTime"].asString());
		if(!valueScalingRulesScalingRule["MinSize"].isNull())
			scalingRulesObject.minSize = std::stoi(valueScalingRulesScalingRule["MinSize"].asString());
		if(!valueScalingRulesScalingRule["ScalingGroupId"].isNull())
			scalingRulesObject.scalingGroupId = valueScalingRulesScalingRule["ScalingGroupId"].asString();
		if(!valueScalingRulesScalingRule["PredictiveValueBehavior"].isNull())
			scalingRulesObject.predictiveValueBehavior = valueScalingRulesScalingRule["PredictiveValueBehavior"].asString();
		if(!valueScalingRulesScalingRule["TargetValue"].isNull())
			scalingRulesObject.targetValue = std::stof(valueScalingRulesScalingRule["TargetValue"].asString());
		if(!valueScalingRulesScalingRule["Cooldown"].isNull())
			scalingRulesObject.cooldown = std::stoi(valueScalingRulesScalingRule["Cooldown"].asString());
		if(!valueScalingRulesScalingRule["MaxSize"].isNull())
			scalingRulesObject.maxSize = std::stoi(valueScalingRulesScalingRule["MaxSize"].asString());
		if(!valueScalingRulesScalingRule["PredictiveValueBuffer"].isNull())
			scalingRulesObject.predictiveValueBuffer = std::stoi(valueScalingRulesScalingRule["PredictiveValueBuffer"].asString());
		if(!valueScalingRulesScalingRule["ScalingRuleType"].isNull())
			scalingRulesObject.scalingRuleType = valueScalingRulesScalingRule["ScalingRuleType"].asString();
		if(!valueScalingRulesScalingRule["AdjustmentValue"].isNull())
			scalingRulesObject.adjustmentValue = std::stoi(valueScalingRulesScalingRule["AdjustmentValue"].asString());
		if(!valueScalingRulesScalingRule["ScaleInEvaluationCount"].isNull())
			scalingRulesObject.scaleInEvaluationCount = std::stoi(valueScalingRulesScalingRule["ScaleInEvaluationCount"].asString());
		if(!valueScalingRulesScalingRule["DisableScaleIn"].isNull())
			scalingRulesObject.disableScaleIn = valueScalingRulesScalingRule["DisableScaleIn"].asString() == "true";
		if(!valueScalingRulesScalingRule["ScalingRuleName"].isNull())
			scalingRulesObject.scalingRuleName = valueScalingRulesScalingRule["ScalingRuleName"].asString();
		if(!valueScalingRulesScalingRule["ScalingRuleId"].isNull())
			scalingRulesObject.scalingRuleId = valueScalingRulesScalingRule["ScalingRuleId"].asString();
		if(!valueScalingRulesScalingRule["MetricType"].isNull())
			scalingRulesObject.metricType = valueScalingRulesScalingRule["MetricType"].asString();
		if(!valueScalingRulesScalingRule["HybridMonitorNamespace"].isNull())
			scalingRulesObject.hybridMonitorNamespace = valueScalingRulesScalingRule["HybridMonitorNamespace"].asString();
		auto allAlarmsNode = valueScalingRulesScalingRule["Alarms"]["Alarm"];
		for (auto valueScalingRulesScalingRuleAlarmsAlarm : allAlarmsNode)
		{
			ScalingRule::Alarm alarmsObject;
			if(!valueScalingRulesScalingRuleAlarmsAlarm["AlarmTaskId"].isNull())
				alarmsObject.alarmTaskId = valueScalingRulesScalingRuleAlarmsAlarm["AlarmTaskId"].asString();
			if(!valueScalingRulesScalingRuleAlarmsAlarm["ComparisonOperator"].isNull())
				alarmsObject.comparisonOperator = valueScalingRulesScalingRuleAlarmsAlarm["ComparisonOperator"].asString();
			if(!valueScalingRulesScalingRuleAlarmsAlarm["MetricName"].isNull())
				alarmsObject.metricName = valueScalingRulesScalingRuleAlarmsAlarm["MetricName"].asString();
			if(!valueScalingRulesScalingRuleAlarmsAlarm["EvaluationCount"].isNull())
				alarmsObject.evaluationCount = std::stoi(valueScalingRulesScalingRuleAlarmsAlarm["EvaluationCount"].asString());
			if(!valueScalingRulesScalingRuleAlarmsAlarm["AlarmTaskName"].isNull())
				alarmsObject.alarmTaskName = valueScalingRulesScalingRuleAlarmsAlarm["AlarmTaskName"].asString();
			if(!valueScalingRulesScalingRuleAlarmsAlarm["MetricType"].isNull())
				alarmsObject.metricType = valueScalingRulesScalingRuleAlarmsAlarm["MetricType"].asString();
			if(!valueScalingRulesScalingRuleAlarmsAlarm["Threshold"].isNull())
				alarmsObject.threshold = std::stof(valueScalingRulesScalingRuleAlarmsAlarm["Threshold"].asString());
			if(!valueScalingRulesScalingRuleAlarmsAlarm["Statistics"].isNull())
				alarmsObject.statistics = valueScalingRulesScalingRuleAlarmsAlarm["Statistics"].asString();
			auto allDimensionsNode = valueScalingRulesScalingRuleAlarmsAlarm["Dimensions"]["Dimension"];
			for (auto valueScalingRulesScalingRuleAlarmsAlarmDimensionsDimension : allDimensionsNode)
			{
				ScalingRule::Alarm::Dimension dimensionsObject;
				if(!valueScalingRulesScalingRuleAlarmsAlarmDimensionsDimension["DimensionKey"].isNull())
					dimensionsObject.dimensionKey = valueScalingRulesScalingRuleAlarmsAlarmDimensionsDimension["DimensionKey"].asString();
				if(!valueScalingRulesScalingRuleAlarmsAlarmDimensionsDimension["DimensionValue"].isNull())
					dimensionsObject.dimensionValue = valueScalingRulesScalingRuleAlarmsAlarmDimensionsDimension["DimensionValue"].asString();
				alarmsObject.dimensions.push_back(dimensionsObject);
			}
			scalingRulesObject.alarms.push_back(alarmsObject);
		}
		auto allStepAdjustmentsNode = valueScalingRulesScalingRule["StepAdjustments"]["StepAdjustment"];
		for (auto valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment : allStepAdjustmentsNode)
		{
			ScalingRule::StepAdjustment stepAdjustmentsObject;
			if(!valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["MetricIntervalUpperBound"].isNull())
				stepAdjustmentsObject.metricIntervalUpperBound = std::stof(valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["MetricIntervalUpperBound"].asString());
			if(!valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["ScalingAdjustment"].isNull())
				stepAdjustmentsObject.scalingAdjustment = std::stoi(valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["ScalingAdjustment"].asString());
			if(!valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["MetricIntervalLowerBound"].isNull())
				stepAdjustmentsObject.metricIntervalLowerBound = std::stof(valueScalingRulesScalingRuleStepAdjustmentsStepAdjustment["MetricIntervalLowerBound"].asString());
			scalingRulesObject.stepAdjustments.push_back(stepAdjustmentsObject);
		}
		auto allAlarmDimensionsNode = valueScalingRulesScalingRule["AlarmDimensions"]["AlarmDimension"];
		for (auto valueScalingRulesScalingRuleAlarmDimensionsAlarmDimension : allAlarmDimensionsNode)
		{
			ScalingRule::AlarmDimension alarmDimensionsObject;
			if(!valueScalingRulesScalingRuleAlarmDimensionsAlarmDimension["DimensionKey"].isNull())
				alarmDimensionsObject.dimensionKey = valueScalingRulesScalingRuleAlarmDimensionsAlarmDimension["DimensionKey"].asString();
			if(!valueScalingRulesScalingRuleAlarmDimensionsAlarmDimension["DimensionValue"].isNull())
				alarmDimensionsObject.dimensionValue = valueScalingRulesScalingRuleAlarmDimensionsAlarmDimension["DimensionValue"].asString();
			scalingRulesObject.alarmDimensions.push_back(alarmDimensionsObject);
		}
		auto allHybridMetricsNode = valueScalingRulesScalingRule["HybridMetrics"]["HybridMetric"];
		for (auto valueScalingRulesScalingRuleHybridMetricsHybridMetric : allHybridMetricsNode)
		{
			ScalingRule::HybridMetric hybridMetricsObject;
			if(!valueScalingRulesScalingRuleHybridMetricsHybridMetric["Id"].isNull())
				hybridMetricsObject.id = valueScalingRulesScalingRuleHybridMetricsHybridMetric["Id"].asString();
			if(!valueScalingRulesScalingRuleHybridMetricsHybridMetric["Expression"].isNull())
				hybridMetricsObject.expression = valueScalingRulesScalingRuleHybridMetricsHybridMetric["Expression"].asString();
			if(!valueScalingRulesScalingRuleHybridMetricsHybridMetric["MetricName"].isNull())
				hybridMetricsObject.metricName = valueScalingRulesScalingRuleHybridMetricsHybridMetric["MetricName"].asString();
			if(!valueScalingRulesScalingRuleHybridMetricsHybridMetric["Statistic"].isNull())
				hybridMetricsObject.statistic = valueScalingRulesScalingRuleHybridMetricsHybridMetric["Statistic"].asString();
			auto allDimensions1Node = valueScalingRulesScalingRuleHybridMetricsHybridMetric["Dimensions"]["Dimension"];
			for (auto valueScalingRulesScalingRuleHybridMetricsHybridMetricDimensionsDimension : allDimensions1Node)
			{
				ScalingRule::HybridMetric::Dimension2 dimensions1Object;
				if(!valueScalingRulesScalingRuleHybridMetricsHybridMetricDimensionsDimension["DimensionKey"].isNull())
					dimensions1Object.dimensionKey = valueScalingRulesScalingRuleHybridMetricsHybridMetricDimensionsDimension["DimensionKey"].asString();
				if(!valueScalingRulesScalingRuleHybridMetricsHybridMetricDimensionsDimension["DimensionValue"].isNull())
					dimensions1Object.dimensionValue = valueScalingRulesScalingRuleHybridMetricsHybridMetricDimensionsDimension["DimensionValue"].asString();
				hybridMetricsObject.dimensions1.push_back(dimensions1Object);
			}
			scalingRulesObject.hybridMetrics.push_back(hybridMetricsObject);
		}
		scalingRules_.push_back(scalingRulesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeScalingRulesResult::ScalingRule> DescribeScalingRulesResult::getScalingRules()const
{
	return scalingRules_;
}

int DescribeScalingRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingRulesResult::getPageNumber()const
{
	return pageNumber_;
}

