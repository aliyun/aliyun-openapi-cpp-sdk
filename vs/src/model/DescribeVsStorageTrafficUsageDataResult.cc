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

#include <alibabacloud/vs/model/DescribeVsStorageTrafficUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsStorageTrafficUsageDataResult::DescribeVsStorageTrafficUsageDataResult() :
	ServiceResult()
{}

DescribeVsStorageTrafficUsageDataResult::DescribeVsStorageTrafficUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsStorageTrafficUsageDataResult::~DescribeVsStorageTrafficUsageDataResult()
{}

void DescribeVsStorageTrafficUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficUsageNode = value["TrafficUsage"]["TrafficUsageDataModule"];
	for (auto valueTrafficUsageTrafficUsageDataModule : allTrafficUsageNode)
	{
		TrafficUsageDataModule trafficUsageObject;
		if(!valueTrafficUsageTrafficUsageDataModule["TimeStamp"].isNull())
			trafficUsageObject.timeStamp = valueTrafficUsageTrafficUsageDataModule["TimeStamp"].asString();
		if(!valueTrafficUsageTrafficUsageDataModule["Bucket"].isNull())
			trafficUsageObject.bucket = valueTrafficUsageTrafficUsageDataModule["Bucket"].asString();
		if(!valueTrafficUsageTrafficUsageDataModule["LanTrafficInDataValue"].isNull())
			trafficUsageObject.lanTrafficInDataValue = std::stol(valueTrafficUsageTrafficUsageDataModule["LanTrafficInDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["LanTrafficOutDataValue"].isNull())
			trafficUsageObject.lanTrafficOutDataValue = std::stol(valueTrafficUsageTrafficUsageDataModule["LanTrafficOutDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["WanTrafficInDataValue"].isNull())
			trafficUsageObject.wanTrafficInDataValue = std::stol(valueTrafficUsageTrafficUsageDataModule["WanTrafficInDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["WanTrafficOutDataValue"].isNull())
			trafficUsageObject.wanTrafficOutDataValue = std::stol(valueTrafficUsageTrafficUsageDataModule["WanTrafficOutDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["LanBandwidthInDataValue"].isNull())
			trafficUsageObject.lanBandwidthInDataValue = std::stof(valueTrafficUsageTrafficUsageDataModule["LanBandwidthInDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["LanBandwidthOutDataValue"].isNull())
			trafficUsageObject.lanBandwidthOutDataValue = std::stof(valueTrafficUsageTrafficUsageDataModule["LanBandwidthOutDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["WanBandwidthInDataValue"].isNull())
			trafficUsageObject.wanBandwidthInDataValue = std::stof(valueTrafficUsageTrafficUsageDataModule["WanBandwidthInDataValue"].asString());
		if(!valueTrafficUsageTrafficUsageDataModule["WanBandwidthOutDataValue"].isNull())
			trafficUsageObject.wanBandwidthOutDataValue = std::stof(valueTrafficUsageTrafficUsageDataModule["WanBandwidthOutDataValue"].asString());
		trafficUsage_.push_back(trafficUsageObject);
	}

}

std::vector<DescribeVsStorageTrafficUsageDataResult::TrafficUsageDataModule> DescribeVsStorageTrafficUsageDataResult::getTrafficUsage()const
{
	return trafficUsage_;
}

