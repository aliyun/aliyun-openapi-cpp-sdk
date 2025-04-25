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

#include <alibabacloud/ess/model/DescribeAlarmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeAlarmsResult::DescribeAlarmsResult() :
	ServiceResult()
{}

DescribeAlarmsResult::DescribeAlarmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmsResult::~DescribeAlarmsResult()
{}

void DescribeAlarmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmListNode = value["AlarmList"]["Alarm"];
	for (auto valueAlarmListAlarm : allAlarmListNode)
	{
		Alarm alarmListObject;
		if(!valueAlarmListAlarm["AlarmTaskId"].isNull())
			alarmListObject.alarmTaskId = valueAlarmListAlarm["AlarmTaskId"].asString();
		if(!valueAlarmListAlarm["MetricName"].isNull())
			alarmListObject.metricName = valueAlarmListAlarm["MetricName"].asString();
		if(!valueAlarmListAlarm["EvaluationCount"].isNull())
			alarmListObject.evaluationCount = std::stoi(valueAlarmListAlarm["EvaluationCount"].asString());
		if(!valueAlarmListAlarm["State"].isNull())
			alarmListObject.state = valueAlarmListAlarm["State"].asString();
		if(!valueAlarmListAlarm["Period"].isNull())
			alarmListObject.period = std::stoi(valueAlarmListAlarm["Period"].asString());
		if(!valueAlarmListAlarm["ScalingGroupId"].isNull())
			alarmListObject.scalingGroupId = valueAlarmListAlarm["ScalingGroupId"].asString();
		if(!valueAlarmListAlarm["ComparisonOperator"].isNull())
			alarmListObject.comparisonOperator = valueAlarmListAlarm["ComparisonOperator"].asString();
		if(!valueAlarmListAlarm["Effective"].isNull())
			alarmListObject.effective = valueAlarmListAlarm["Effective"].asString();
		if(!valueAlarmListAlarm["Description"].isNull())
			alarmListObject.description = valueAlarmListAlarm["Description"].asString();
		if(!valueAlarmListAlarm["MetricType"].isNull())
			alarmListObject.metricType = valueAlarmListAlarm["MetricType"].asString();
		if(!valueAlarmListAlarm["Name"].isNull())
			alarmListObject.name = valueAlarmListAlarm["Name"].asString();
		if(!valueAlarmListAlarm["Threshold"].isNull())
			alarmListObject.threshold = std::stof(valueAlarmListAlarm["Threshold"].asString());
		if(!valueAlarmListAlarm["Enable"].isNull())
			alarmListObject.enable = valueAlarmListAlarm["Enable"].asString() == "true";
		if(!valueAlarmListAlarm["Statistics"].isNull())
			alarmListObject.statistics = valueAlarmListAlarm["Statistics"].asString();
		if(!valueAlarmListAlarm["ExpressionsLogicOperator"].isNull())
			alarmListObject.expressionsLogicOperator = valueAlarmListAlarm["ExpressionsLogicOperator"].asString();
		if(!valueAlarmListAlarm["HybridMonitorNamespace"].isNull())
			alarmListObject.hybridMonitorNamespace = valueAlarmListAlarm["HybridMonitorNamespace"].asString();
		if(!valueAlarmListAlarm["PromQL"].isNull())
			alarmListObject.promQL = valueAlarmListAlarm["PromQL"].asString();
		auto allDimensionsNode = valueAlarmListAlarm["Dimensions"]["Dimension"];
		for (auto valueAlarmListAlarmDimensionsDimension : allDimensionsNode)
		{
			Alarm::Dimension dimensionsObject;
			if(!valueAlarmListAlarmDimensionsDimension["DimensionKey"].isNull())
				dimensionsObject.dimensionKey = valueAlarmListAlarmDimensionsDimension["DimensionKey"].asString();
			if(!valueAlarmListAlarmDimensionsDimension["DimensionValue"].isNull())
				dimensionsObject.dimensionValue = valueAlarmListAlarmDimensionsDimension["DimensionValue"].asString();
			alarmListObject.dimensions.push_back(dimensionsObject);
		}
		auto allExpressionsNode = valueAlarmListAlarm["Expressions"]["Expression"];
		for (auto valueAlarmListAlarmExpressionsExpression : allExpressionsNode)
		{
			Alarm::Expression expressionsObject;
			if(!valueAlarmListAlarmExpressionsExpression["MetricName"].isNull())
				expressionsObject.metricName = valueAlarmListAlarmExpressionsExpression["MetricName"].asString();
			if(!valueAlarmListAlarmExpressionsExpression["ComparisonOperator"].isNull())
				expressionsObject.comparisonOperator = valueAlarmListAlarmExpressionsExpression["ComparisonOperator"].asString();
			if(!valueAlarmListAlarmExpressionsExpression["Period"].isNull())
				expressionsObject.period = std::stoi(valueAlarmListAlarmExpressionsExpression["Period"].asString());
			if(!valueAlarmListAlarmExpressionsExpression["Statistics"].isNull())
				expressionsObject.statistics = valueAlarmListAlarmExpressionsExpression["Statistics"].asString();
			if(!valueAlarmListAlarmExpressionsExpression["Threshold"].isNull())
				expressionsObject.threshold = std::stof(valueAlarmListAlarmExpressionsExpression["Threshold"].asString());
			alarmListObject.expressions.push_back(expressionsObject);
		}
		auto allHybridMetricsNode = valueAlarmListAlarm["HybridMetrics"]["HybridMetric"];
		for (auto valueAlarmListAlarmHybridMetricsHybridMetric : allHybridMetricsNode)
		{
			Alarm::HybridMetric hybridMetricsObject;
			if(!valueAlarmListAlarmHybridMetricsHybridMetric["Id"].isNull())
				hybridMetricsObject.id = valueAlarmListAlarmHybridMetricsHybridMetric["Id"].asString();
			if(!valueAlarmListAlarmHybridMetricsHybridMetric["Expression"].isNull())
				hybridMetricsObject.expression = valueAlarmListAlarmHybridMetricsHybridMetric["Expression"].asString();
			if(!valueAlarmListAlarmHybridMetricsHybridMetric["MetricName"].isNull())
				hybridMetricsObject.metricName = valueAlarmListAlarmHybridMetricsHybridMetric["MetricName"].asString();
			if(!valueAlarmListAlarmHybridMetricsHybridMetric["Statistic"].isNull())
				hybridMetricsObject.statistic = valueAlarmListAlarmHybridMetricsHybridMetric["Statistic"].asString();
			auto allDimensions1Node = valueAlarmListAlarmHybridMetricsHybridMetric["Dimensions"]["Dimension"];
			for (auto valueAlarmListAlarmHybridMetricsHybridMetricDimensionsDimension : allDimensions1Node)
			{
				Alarm::HybridMetric::Dimension2 dimensions1Object;
				if(!valueAlarmListAlarmHybridMetricsHybridMetricDimensionsDimension["DimensionKey"].isNull())
					dimensions1Object.dimensionKey = valueAlarmListAlarmHybridMetricsHybridMetricDimensionsDimension["DimensionKey"].asString();
				if(!valueAlarmListAlarmHybridMetricsHybridMetricDimensionsDimension["DimensionValue"].isNull())
					dimensions1Object.dimensionValue = valueAlarmListAlarmHybridMetricsHybridMetricDimensionsDimension["DimensionValue"].asString();
				hybridMetricsObject.dimensions1.push_back(dimensions1Object);
			}
			alarmListObject.hybridMetrics.push_back(hybridMetricsObject);
		}
		auto allAlarmActions = value["AlarmActions"]["AlarmAction"];
		for (auto value : allAlarmActions)
			alarmListObject.alarmActions.push_back(value.asString());
		alarmList_.push_back(alarmListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAlarmsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAlarmsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAlarmsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAlarmsResult::Alarm> DescribeAlarmsResult::getAlarmList()const
{
	return alarmList_;
}

