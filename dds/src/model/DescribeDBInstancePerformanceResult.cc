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

#include <alibabacloud/dds/model/DescribeDBInstancePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceKey"];
	for (auto valuePerformanceKeysPerformanceKey : allPerformanceKeysNode)
	{
		PerformanceKey performanceKeysObject;
		if(!valuePerformanceKeysPerformanceKey["Key"].isNull())
			performanceKeysObject.key = valuePerformanceKeysPerformanceKey["Key"].asString();
		if(!valuePerformanceKeysPerformanceKey["Unit"].isNull())
			performanceKeysObject.unit = valuePerformanceKeysPerformanceKey["Unit"].asString();
		if(!valuePerformanceKeysPerformanceKey["ValueFormat"].isNull())
			performanceKeysObject.valueFormat = valuePerformanceKeysPerformanceKey["ValueFormat"].asString();
		auto allPerformanceValuesNode = valuePerformanceKeysPerformanceKey["PerformanceValues"]["PerformanceValue"];
		for (auto valuePerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue : allPerformanceValuesNode)
		{
			PerformanceKey::PerformanceValue performanceValuesObject;
			if(!valuePerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue["Value"].isNull())
				performanceValuesObject.value = valuePerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue["Value"].asString();
			if(!valuePerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue["Date"].isNull())
				performanceValuesObject.date = valuePerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue["Date"].asString();
			performanceKeysObject.performanceValues.push_back(performanceValuesObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::vector<DescribeDBInstancePerformanceResult::PerformanceKey> DescribeDBInstancePerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDBInstancePerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBInstancePerformanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstancePerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBInstancePerformanceResult::getEngine()const
{
	return engine_;
}

