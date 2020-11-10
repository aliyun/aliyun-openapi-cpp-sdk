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

#include <alibabacloud/rds/model/DescribeDBProxyPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceKey"];
	for (auto valuePerformanceKeysPerformanceKey : allPerformanceKeysNode)
	{
		PerformanceKey performanceKeysObject;
		if(!valuePerformanceKeysPerformanceKey["Key"].isNull())
			performanceKeysObject.key = valuePerformanceKeysPerformanceKey["Key"].asString();
		if(!valuePerformanceKeysPerformanceKey["ValueFormat"].isNull())
			performanceKeysObject.valueFormat = valuePerformanceKeysPerformanceKey["ValueFormat"].asString();
		auto allValuesNode = valuePerformanceKeysPerformanceKey["Values"]["PerformanceValue"];
		for (auto valuePerformanceKeysPerformanceKeyValuesPerformanceValue : allValuesNode)
		{
			PerformanceKey::PerformanceValue valuesObject;
			if(!valuePerformanceKeysPerformanceKeyValuesPerformanceValue["Value"].isNull())
				valuesObject.value = valuePerformanceKeysPerformanceKeyValuesPerformanceValue["Value"].asString();
			if(!valuePerformanceKeysPerformanceKeyValuesPerformanceValue["Date"].isNull())
				valuesObject.date = valuePerformanceKeysPerformanceKeyValuesPerformanceValue["Date"].asString();
			performanceKeysObject.values.push_back(valuesObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDBProxyPerformanceResult::PerformanceKey> DescribeDBProxyPerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDBProxyPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBProxyPerformanceResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBProxyPerformanceResult::getStartTime()const
{
	return startTime_;
}

