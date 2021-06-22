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

#include <alibabacloud/polardb/model/DescribeDBNodePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBNodePerformanceResult::DescribeDBNodePerformanceResult() :
	ServiceResult()
{}

DescribeDBNodePerformanceResult::DescribeDBNodePerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBNodePerformanceResult::~DescribeDBNodePerformanceResult()
{}

void DescribeDBNodePerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceItem"];
	for (auto valuePerformanceKeysPerformanceItem : allPerformanceKeysNode)
	{
		PerformanceItem performanceKeysObject;
		if(!valuePerformanceKeysPerformanceItem["MetricName"].isNull())
			performanceKeysObject.metricName = valuePerformanceKeysPerformanceItem["MetricName"].asString();
		if(!valuePerformanceKeysPerformanceItem["Measurement"].isNull())
			performanceKeysObject.measurement = valuePerformanceKeysPerformanceItem["Measurement"].asString();
		auto allPointsNode = valuePerformanceKeysPerformanceItem["Points"]["PerformanceItemValue"];
		for (auto valuePerformanceKeysPerformanceItemPointsPerformanceItemValue : allPointsNode)
		{
			PerformanceItem::PerformanceItemValue pointsObject;
			if(!valuePerformanceKeysPerformanceItemPointsPerformanceItemValue["Value"].isNull())
				pointsObject.value = valuePerformanceKeysPerformanceItemPointsPerformanceItemValue["Value"].asString();
			if(!valuePerformanceKeysPerformanceItemPointsPerformanceItemValue["Timestamp"].isNull())
				pointsObject.timestamp = std::stol(valuePerformanceKeysPerformanceItemPointsPerformanceItemValue["Timestamp"].asString());
			performanceKeysObject.points.push_back(pointsObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBNodeId"].isNull())
		dBNodeId_ = value["DBNodeId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::vector<DescribeDBNodePerformanceResult::PerformanceItem> DescribeDBNodePerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDBNodePerformanceResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBNodePerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBNodePerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBNodePerformanceResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBNodePerformanceResult::getDBNodeId()const
{
	return dBNodeId_;
}

std::string DescribeDBNodePerformanceResult::getEngine()const
{
	return engine_;
}

