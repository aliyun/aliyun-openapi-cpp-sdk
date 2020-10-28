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

#include <alibabacloud/polardbx/model/DescribeInstanceStoragePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeInstanceStoragePerformanceResult::DescribeInstanceStoragePerformanceResult() :
	ServiceResult()
{}

DescribeInstanceStoragePerformanceResult::DescribeInstanceStoragePerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceStoragePerformanceResult::~DescribeInstanceStoragePerformanceResult()
{}

void DescribeInstanceStoragePerformanceResult::parse(const std::string &payload)
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
		auto allPointsNode = allPerformanceItemsNode["Points"]["Point"];
		for (auto allPerformanceItemsNodePointsPoint : allPointsNode)
		{
			Data::PerformanceItem::Point pointsObject;
			if(!allPerformanceItemsNodePointsPoint["Timestamp"].isNull())
				pointsObject.timestamp = std::stol(allPerformanceItemsNodePointsPoint["Timestamp"].asString());
			if(!allPerformanceItemsNodePointsPoint["Value"].isNull())
				pointsObject.value = allPerformanceItemsNodePointsPoint["Value"].asString();
			performanceItemObject.points.push_back(pointsObject);
		}
		data_.performanceItems.push_back(performanceItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeInstanceStoragePerformanceResult::getMessage()const
{
	return message_;
}

DescribeInstanceStoragePerformanceResult::Data DescribeInstanceStoragePerformanceResult::getData()const
{
	return data_;
}

bool DescribeInstanceStoragePerformanceResult::getSuccess()const
{
	return success_;
}

