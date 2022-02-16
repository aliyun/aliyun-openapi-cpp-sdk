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

#include <alibabacloud/emr/model/ListScalingMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingMetricsResult::ListScalingMetricsResult() :
	ServiceResult()
{}

ListScalingMetricsResult::ListScalingMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingMetricsResult::~ListScalingMetricsResult()
{}

void ListScalingMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ListScalingMetricsResponse"];
	for (auto valueDataListScalingMetricsResponse : allDataNode)
	{
		ListScalingMetricsResponse1 dataObject;
		if(!valueDataListScalingMetricsResponse["MetricName"].isNull())
			dataObject.metricName = valueDataListScalingMetricsResponse["MetricName"].asString();
		if(!valueDataListScalingMetricsResponse["Unit"].isNull())
			dataObject.unit = valueDataListScalingMetricsResponse["Unit"].asString();
		if(!valueDataListScalingMetricsResponse["DisplayName"].isNull())
			dataObject.displayName = valueDataListScalingMetricsResponse["DisplayName"].asString();
		if(!valueDataListScalingMetricsResponse["MinValue"].isNull())
			dataObject.minValue = std::stoi(valueDataListScalingMetricsResponse["MinValue"].asString());
		if(!valueDataListScalingMetricsResponse["MaxValue"].isNull())
			dataObject.maxValue = std::stoi(valueDataListScalingMetricsResponse["MaxValue"].asString());
		data_.push_back(dataObject);
	}
	auto allScalingMetricsNode = value["ScalingMetrics"]["ListScalingMetricsResponse"];
	for (auto valueScalingMetricsListScalingMetricsResponse : allScalingMetricsNode)
	{
		ListScalingMetricsResponse scalingMetricsObject;
		if(!valueScalingMetricsListScalingMetricsResponse["MetricName"].isNull())
			scalingMetricsObject.metricName = valueScalingMetricsListScalingMetricsResponse["MetricName"].asString();
		if(!valueScalingMetricsListScalingMetricsResponse["Unit"].isNull())
			scalingMetricsObject.unit = valueScalingMetricsListScalingMetricsResponse["Unit"].asString();
		if(!valueScalingMetricsListScalingMetricsResponse["DisplayName"].isNull())
			scalingMetricsObject.displayName = valueScalingMetricsListScalingMetricsResponse["DisplayName"].asString();
		if(!valueScalingMetricsListScalingMetricsResponse["MinValue"].isNull())
			scalingMetricsObject.minValue = std::stoi(valueScalingMetricsListScalingMetricsResponse["MinValue"].asString());
		if(!valueScalingMetricsListScalingMetricsResponse["MaxValue"].isNull())
			scalingMetricsObject.maxValue = std::stoi(valueScalingMetricsListScalingMetricsResponse["MaxValue"].asString());
		scalingMetrics_.push_back(scalingMetricsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListScalingMetricsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListScalingMetricsResult::getNextToken()const
{
	return nextToken_;
}

int ListScalingMetricsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListScalingMetricsResult::ListScalingMetricsResponse1> ListScalingMetricsResult::getData()const
{
	return data_;
}

std::vector<ListScalingMetricsResult::ListScalingMetricsResponse> ListScalingMetricsResult::getScalingMetrics()const
{
	return scalingMetrics_;
}

