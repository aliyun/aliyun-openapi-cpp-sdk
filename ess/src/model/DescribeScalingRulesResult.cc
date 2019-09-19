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
		if(!valueScalingRulesScalingRule["ScalingRuleId"].isNull())
			scalingRulesObject.scalingRuleId = valueScalingRulesScalingRule["ScalingRuleId"].asString();
		if(!valueScalingRulesScalingRule["ScalingGroupId"].isNull())
			scalingRulesObject.scalingGroupId = valueScalingRulesScalingRule["ScalingGroupId"].asString();
		if(!valueScalingRulesScalingRule["ScalingRuleName"].isNull())
			scalingRulesObject.scalingRuleName = valueScalingRulesScalingRule["ScalingRuleName"].asString();
		if(!valueScalingRulesScalingRule["Cooldown"].isNull())
			scalingRulesObject.cooldown = std::stoi(valueScalingRulesScalingRule["Cooldown"].asString());
		if(!valueScalingRulesScalingRule["MinAdjustmentMagnitude"].isNull())
			scalingRulesObject.minAdjustmentMagnitude = std::stoi(valueScalingRulesScalingRule["MinAdjustmentMagnitude"].asString());
		if(!valueScalingRulesScalingRule["AdjustmentType"].isNull())
			scalingRulesObject.adjustmentType = valueScalingRulesScalingRule["AdjustmentType"].asString();
		if(!valueScalingRulesScalingRule["AdjustmentValue"].isNull())
			scalingRulesObject.adjustmentValue = std::stoi(valueScalingRulesScalingRule["AdjustmentValue"].asString());
		if(!valueScalingRulesScalingRule["MinSize"].isNull())
			scalingRulesObject.minSize = std::stoi(valueScalingRulesScalingRule["MinSize"].asString());
		if(!valueScalingRulesScalingRule["MaxSize"].isNull())
			scalingRulesObject.maxSize = std::stoi(valueScalingRulesScalingRule["MaxSize"].asString());
		if(!valueScalingRulesScalingRule["ScalingRuleAri"].isNull())
			scalingRulesObject.scalingRuleAri = valueScalingRulesScalingRule["ScalingRuleAri"].asString();
		if(!valueScalingRulesScalingRule["ScalingRuleType"].isNull())
			scalingRulesObject.scalingRuleType = valueScalingRulesScalingRule["ScalingRuleType"].asString();
		if(!valueScalingRulesScalingRule["EstimatedInstanceWarmup"].isNull())
			scalingRulesObject.estimatedInstanceWarmup = std::stoi(valueScalingRulesScalingRule["EstimatedInstanceWarmup"].asString());
		if(!valueScalingRulesScalingRule["MetricName"].isNull())
			scalingRulesObject.metricName = valueScalingRulesScalingRule["MetricName"].asString();
		if(!valueScalingRulesScalingRule["TargetValue"].isNull())
			scalingRulesObject.targetValue = std::stof(valueScalingRulesScalingRule["TargetValue"].asString());
		if(!valueScalingRulesScalingRule["DisableScaleIn"].isNull())
			scalingRulesObject.disableScaleIn = valueScalingRulesScalingRule["DisableScaleIn"].asString() == "true";
		if(!valueScalingRulesScalingRule["PredictiveScalingMode"].isNull())
			scalingRulesObject.predictiveScalingMode = valueScalingRulesScalingRule["PredictiveScalingMode"].asString();
		if(!valueScalingRulesScalingRule["PredictiveValueBehavior"].isNull())
			scalingRulesObject.predictiveValueBehavior = valueScalingRulesScalingRule["PredictiveValueBehavior"].asString();
		if(!valueScalingRulesScalingRule["PredictiveValueBuffer"].isNull())
			scalingRulesObject.predictiveValueBuffer = std::stoi(valueScalingRulesScalingRule["PredictiveValueBuffer"].asString());
		if(!valueScalingRulesScalingRule["PredictiveTaskBufferTime"].isNull())
			scalingRulesObject.predictiveTaskBufferTime = std::stoi(valueScalingRulesScalingRule["PredictiveTaskBufferTime"].asString());
		if(!valueScalingRulesScalingRule["InitialMaxSize"].isNull())
			scalingRulesObject.initialMaxSize = std::stoi(valueScalingRulesScalingRule["InitialMaxSize"].asString());
		auto allAlarmsNode = allScalingRulesNode["Alarms"]["Alarm"];
		for (auto allScalingRulesNodeAlarmsAlarm : allAlarmsNode)
		{
			ScalingRule::Alarm alarmsObject;
			if(!allScalingRulesNodeAlarmsAlarm["AlarmTaskName"].isNull())
				alarmsObject.alarmTaskName = allScalingRulesNodeAlarmsAlarm["AlarmTaskName"].asString();
			if(!allScalingRulesNodeAlarmsAlarm["AlarmTaskId"].isNull())
				alarmsObject.alarmTaskId = allScalingRulesNodeAlarmsAlarm["AlarmTaskId"].asString();
			if(!allScalingRulesNodeAlarmsAlarm["ComparisonOperator"].isNull())
				alarmsObject.comparisonOperator = allScalingRulesNodeAlarmsAlarm["ComparisonOperator"].asString();
			if(!allScalingRulesNodeAlarmsAlarm["Statistics"].isNull())
				alarmsObject.statistics = allScalingRulesNodeAlarmsAlarm["Statistics"].asString();
			if(!allScalingRulesNodeAlarmsAlarm["MetricName"].isNull())
				alarmsObject.metricName = allScalingRulesNodeAlarmsAlarm["MetricName"].asString();
			if(!allScalingRulesNodeAlarmsAlarm["Threshold"].isNull())
				alarmsObject.threshold = std::stof(allScalingRulesNodeAlarmsAlarm["Threshold"].asString());
			if(!allScalingRulesNodeAlarmsAlarm["EvaluationCount"].isNull())
				alarmsObject.evaluationCount = std::stoi(allScalingRulesNodeAlarmsAlarm["EvaluationCount"].asString());
			auto allDimensionsNode = allAlarmsNode["Dimensions"]["Dimension"];
			for (auto allAlarmsNodeDimensionsDimension : allDimensionsNode)
			{
				ScalingRule::Alarm::Dimension dimensionsObject;
				if(!allAlarmsNodeDimensionsDimension["DimensionKey"].isNull())
					dimensionsObject.dimensionKey = allAlarmsNodeDimensionsDimension["DimensionKey"].asString();
				if(!allAlarmsNodeDimensionsDimension["DimensionValue"].isNull())
					dimensionsObject.dimensionValue = allAlarmsNodeDimensionsDimension["DimensionValue"].asString();
				alarmsObject.dimensions.push_back(dimensionsObject);
			}
			scalingRulesObject.alarms.push_back(alarmsObject);
		}
		auto allStepAdjustmentsNode = allScalingRulesNode["StepAdjustments"]["StepAdjustment"];
		for (auto allScalingRulesNodeStepAdjustmentsStepAdjustment : allStepAdjustmentsNode)
		{
			ScalingRule::StepAdjustment stepAdjustmentsObject;
			if(!allScalingRulesNodeStepAdjustmentsStepAdjustment["MetricIntervalLowerBound"].isNull())
				stepAdjustmentsObject.metricIntervalLowerBound = std::stof(allScalingRulesNodeStepAdjustmentsStepAdjustment["MetricIntervalLowerBound"].asString());
			if(!allScalingRulesNodeStepAdjustmentsStepAdjustment["MetricIntervalUpperBound"].isNull())
				stepAdjustmentsObject.metricIntervalUpperBound = std::stof(allScalingRulesNodeStepAdjustmentsStepAdjustment["MetricIntervalUpperBound"].asString());
			if(!allScalingRulesNodeStepAdjustmentsStepAdjustment["ScalingAdjustment"].isNull())
				stepAdjustmentsObject.scalingAdjustment = std::stoi(allScalingRulesNodeStepAdjustmentsStepAdjustment["ScalingAdjustment"].asString());
			scalingRulesObject.stepAdjustments.push_back(stepAdjustmentsObject);
		}
		scalingRules_.push_back(scalingRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

