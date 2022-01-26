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

#include <alibabacloud/polardb/model/DescribeDBProxyPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBProxyPerformanceResult::DescribeDBProxyPerformanceResult() :
	ServiceResult()
{}

DescribeDBProxyPerformanceResult::DescribeDBProxyPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBProxyPerformanceResult::~DescribeDBProxyPerformanceResult()
{}

void DescribeDBProxyPerformanceResult::parse(const std::string &payload)
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
		if(!valuePerformanceKeysPerformanceItem["DBNodeId"].isNull())
			performanceKeysObject.dBNodeId = valuePerformanceKeysPerformanceItem["DBNodeId"].asString();
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
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::vector<DescribeDBProxyPerformanceResult::PerformanceItem> DescribeDBProxyPerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDBProxyPerformanceResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBProxyPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBProxyPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBProxyPerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBProxyPerformanceResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBProxyPerformanceResult::getEngine()const
{
	return engine_;
}

