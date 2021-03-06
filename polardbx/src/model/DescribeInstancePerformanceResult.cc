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

#include <alibabacloud/polardbx/model/DescribeInstancePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeInstancePerformanceResult::DescribeInstancePerformanceResult() :
	ServiceResult()
{}

DescribeInstancePerformanceResult::DescribeInstancePerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancePerformanceResult::~DescribeInstancePerformanceResult()
{}

void DescribeInstancePerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allPerformanceItemsNode = dataNode["PerformanceItems"]["PerformanceItem"];
	for (auto dataNodePerformanceItemsPerformanceItem : allPerformanceItemsNode)
	{
		Data::PerformanceItem performanceItemObject;
		if(!dataNodePerformanceItemsPerformanceItem["Measurement"].isNull())
			performanceItemObject.measurement = dataNodePerformanceItemsPerformanceItem["Measurement"].asString();
		if(!dataNodePerformanceItemsPerformanceItem["MetricName"].isNull())
			performanceItemObject.metricName = dataNodePerformanceItemsPerformanceItem["MetricName"].asString();
		auto allPointsNode = dataNodePerformanceItemsPerformanceItem["Points"]["Point"];
		for (auto dataNodePerformanceItemsPerformanceItemPointsPoint : allPointsNode)
		{
			Data::PerformanceItem::Point pointsObject;
			if(!dataNodePerformanceItemsPerformanceItemPointsPoint["Timestamp"].isNull())
				pointsObject.timestamp = std::stol(dataNodePerformanceItemsPerformanceItemPointsPoint["Timestamp"].asString());
			if(!dataNodePerformanceItemsPerformanceItemPointsPoint["Value"].isNull())
				pointsObject.value = dataNodePerformanceItemsPerformanceItemPointsPoint["Value"].asString();
			performanceItemObject.points.push_back(pointsObject);
		}
		data_.performanceItems.push_back(performanceItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeInstancePerformanceResult::getMessage()const
{
	return message_;
}

DescribeInstancePerformanceResult::Data DescribeInstancePerformanceResult::getData()const
{
	return data_;
}

bool DescribeInstancePerformanceResult::getSuccess()const
{
	return success_;
}

