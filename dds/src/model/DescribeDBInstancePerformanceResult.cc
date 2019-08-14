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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPerformanceKeys = value["PerformanceKeys"]["PerformanceKey"];
	for (auto value : allPerformanceKeys)
	{
		PerformanceKey performanceKeysObject;
		if(!value["Key"].isNull())
			performanceKeysObject.key = value["Key"].asString();
		if(!value["Unit"].isNull())
			performanceKeysObject.unit = value["Unit"].asString();
		if(!value["ValueFormat"].isNull())
			performanceKeysObject.valueFormat = value["ValueFormat"].asString();
		auto allPerformanceValues = value["PerformanceValues"]["PerformanceValue"];
		for (auto value : allPerformanceValues)
		{
			PerformanceKey::PerformanceValue performanceValuesObject;
			if(!value["Value"].isNull())
				performanceValuesObject.value = value["Value"].asString();
			if(!value["Date"].isNull())
				performanceValuesObject.date = value["Date"].asString();
			performanceKeysObject.performanceValues.push_back(performanceValuesObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

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

