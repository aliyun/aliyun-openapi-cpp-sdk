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

#include <alibabacloud/ecs/model/DescribeRecommendInstanceTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRecommendInstanceTypeResult::DescribeRecommendInstanceTypeResult() :
	ServiceResult()
{}

DescribeRecommendInstanceTypeResult::DescribeRecommendInstanceTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecommendInstanceTypeResult::~DescribeRecommendInstanceTypeResult()
{}

void DescribeRecommendInstanceTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["RecommendInstanceType"];
	for (auto value : allData)
	{
		RecommendInstanceType recommendInstanceTypeObject;
		recommendInstanceTypeObject.regionNo = value["RegionNo"].asString();
		recommendInstanceTypeObject.commodityCode = value["CommodityCode"].asString();
		recommendInstanceTypeObject.scene = value["Scene"].asString();
		auto allZones = value["Zones"]["zone"];
		for (auto value : allZones)
		{
			RecommendInstanceType::zone zoneObject;
			zoneObject.zoneNo = value["ZoneNo"].asString();
			auto allNetworkTypes = value["NetworkTypes"]["NetworkType"];
			for (auto value : allNetworkTypes)
				zoneObject.networkTypes.push_back(value.asString());
			recommendInstanceTypeObject.zones.push_back(zoneObject);
		}
		auto allInstanceType = value["InstanceType"];
		for (auto value : allInstanceType)
		{
			RecommendInstanceType::InstanceType instanceTypeObject;
			instanceTypeObject.generation = value["Generation"].asString();
			instanceTypeObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
			instanceTypeObject.instanceType = value["InstanceType"].asString();
			instanceTypeObject.supportIoOptimized = value["SupportIoOptimized"].asString();
			instanceTypeObject.cores = std::stoi(value["Cores"].asString());
			instanceTypeObject.memory = std::stoi(value["Memory"].asString());
			recommendInstanceTypeObject.instanceType.push_back(instanceTypeObject);
		}
		data_.push_back(recommendInstanceTypeObject);
	}

}

