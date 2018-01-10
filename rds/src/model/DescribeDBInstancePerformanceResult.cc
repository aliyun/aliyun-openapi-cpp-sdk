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

#include <alibabacloud/rds/model/DescribeDBInstancePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancePerformanceResult::DescribeDBInstancePerformanceResult() :
	ServiceResult()
{}

DescribeDBInstancePerformanceResult::DescribeDBInstancePerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancePerformanceResult::~DescribeDBInstancePerformanceResult()
{}

void DescribeDBInstancePerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPerformanceKeys = value["PerformanceKeys"]["PerformanceKey"];
	for (auto value : allPerformanceKeys)
	{
		PerformanceKey performanceKeyObject;
		performanceKeyObject.key = value["Key"].asString();
		performanceKeyObject.unit = value["Unit"].asString();
		performanceKeyObject.valueFormat = value["ValueFormat"].asString();
		auto allValues = value["Values"]["PerformanceValue"];
		for (auto value : allValues)
		{
			PerformanceKey::PerformanceValue performanceValueObject;
			performanceValueObject.value = value["Value"].asString();
			performanceValueObject.date = value["Date"].asString();
			performanceKeyObject.values.push_back(performanceValueObject);
		}
		performanceKeys_.push_back(performanceKeyObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	engine_ = value["Engine"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDBInstancePerformanceResult::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstancePerformanceResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDBInstancePerformanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancePerformanceResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeDBInstancePerformanceResult::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstancePerformanceResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeDBInstancePerformanceResult::getEngine()const
{
	return engine_;
}

void DescribeDBInstancePerformanceResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

