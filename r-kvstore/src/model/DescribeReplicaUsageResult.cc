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

#include <alibabacloud/r-kvstore/model/DescribeReplicaUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeReplicaUsageResult::DescribeReplicaUsageResult() :
	ServiceResult()
{}

DescribeReplicaUsageResult::DescribeReplicaUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicaUsageResult::~DescribeReplicaUsageResult()
{}

void DescribeReplicaUsageResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto performanceKeysNode = value["PerformanceKeys"];
	auto allPerformanceKey = value["PerformanceKey"]["PerformanceKeyItem"];
	for (auto value : allPerformanceKey)
	{
		PerformanceKeys::PerformanceKeyItem performanceKeyItemObject;
		if(!value["Key"].isNull())
			performanceKeyItemObject.key = value["Key"].asString();
		if(!value["Unit"].isNull())
			performanceKeyItemObject.unit = value["Unit"].asString();
		if(!value["ValueFormat"].isNull())
			performanceKeyItemObject.valueFormat = value["ValueFormat"].asString();
		auto performanceValuesNode = value["PerformanceValues"];
		auto allPerformanceValue = value["PerformanceValue"]["PerformanceValueItem"];
		for (auto value : allPerformanceValue)
		{
			PerformanceKeys::PerformanceKeyItem::PerformanceValues::PerformanceValueItem performanceValueItemObject;
			if(!value["Value"].isNull())
				performanceValueItemObject.value = value["Value"].asString();
			if(!value["Date"].isNull())
				performanceValueItemObject.date = value["Date"].asString();
			performanceKeyItemObject.performanceValues.performanceValue.push_back(performanceValueItemObject);
		}
		performanceKeys_.performanceKey.push_back(performanceKeyItemObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["ReplicaId"].isNull())
		replicaId_ = value["ReplicaId"].asString();

}

DescribeReplicaUsageResult::PerformanceKeys DescribeReplicaUsageResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeReplicaUsageResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeReplicaUsageResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeReplicaUsageResult::getReplicaId()const
{
	return replicaId_;
}

