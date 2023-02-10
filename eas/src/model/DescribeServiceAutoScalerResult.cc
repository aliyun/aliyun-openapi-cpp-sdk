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

#include <alibabacloud/eas/model/DescribeServiceAutoScalerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeServiceAutoScalerResult::DescribeServiceAutoScalerResult() :
	ServiceResult()
{}

DescribeServiceAutoScalerResult::DescribeServiceAutoScalerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceAutoScalerResult::~DescribeServiceAutoScalerResult()
{}

void DescribeServiceAutoScalerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScaleStrategiesNode = value["ScaleStrategies"]["ScaleStrategy"];
	for (auto valueScaleStrategiesScaleStrategy : allScaleStrategiesNode)
	{
		ScaleStrategy scaleStrategiesObject;
		if(!valueScaleStrategiesScaleStrategy["metricName"].isNull())
			scaleStrategiesObject.metricName = valueScaleStrategiesScaleStrategy["metricName"].asString();
		if(!valueScaleStrategiesScaleStrategy["threshold"].isNull())
			scaleStrategiesObject.threshold = std::stof(valueScaleStrategiesScaleStrategy["threshold"].asString());
		if(!valueScaleStrategiesScaleStrategy["service"].isNull())
			scaleStrategiesObject.service = valueScaleStrategiesScaleStrategy["service"].asString();
		scaleStrategies_.push_back(scaleStrategiesObject);
	}
	auto allCurrentMetricsNode = value["CurrentMetrics"]["CurrentMetric"];
	for (auto valueCurrentMetricsCurrentMetric : allCurrentMetricsNode)
	{
		CurrentMetric currentMetricsObject;
		if(!valueCurrentMetricsCurrentMetric["metricName"].isNull())
			currentMetricsObject.metricName = valueCurrentMetricsCurrentMetric["metricName"].asString();
		if(!valueCurrentMetricsCurrentMetric["value"].isNull())
			currentMetricsObject.value = std::stof(valueCurrentMetricsCurrentMetric["value"].asString());
		if(!valueCurrentMetricsCurrentMetric["service"].isNull())
			currentMetricsObject.service = valueCurrentMetricsCurrentMetric["service"].asString();
		currentMetrics_.push_back(currentMetricsObject);
	}
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["MinReplica"].isNull())
		minReplica_ = std::stoi(value["MinReplica"].asString());
	if(!value["MaxReplica"].isNull())
		maxReplica_ = std::stoi(value["MaxReplica"].asString());
	if(!value["Behavior"].isNull())
		behavior_ = value["Behavior"].asString();

}

std::vector<DescribeServiceAutoScalerResult::CurrentMetric> DescribeServiceAutoScalerResult::getCurrentMetrics()const
{
	return currentMetrics_;
}

int DescribeServiceAutoScalerResult::getMaxReplica()const
{
	return maxReplica_;
}

std::string DescribeServiceAutoScalerResult::getServiceName()const
{
	return serviceName_;
}

int DescribeServiceAutoScalerResult::getMinReplica()const
{
	return minReplica_;
}

std::vector<DescribeServiceAutoScalerResult::ScaleStrategy> DescribeServiceAutoScalerResult::getScaleStrategies()const
{
	return scaleStrategies_;
}

std::string DescribeServiceAutoScalerResult::getBehavior()const
{
	return behavior_;
}

