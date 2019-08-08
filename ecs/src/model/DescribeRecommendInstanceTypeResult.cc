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
		RecommendInstanceType dataObject;
		if(!value["RegionNo"].isNull())
			dataObject.regionNo = value["RegionNo"].asString();
		if(!value["CommodityCode"].isNull())
			dataObject.commodityCode = value["CommodityCode"].asString();
		if(!value["Scene"].isNull())
			dataObject.scene = value["Scene"].asString();
		auto allZones = value["Zones"]["zone"];
		for (auto value : allZones)
		{
			RecommendInstanceType::Zone zonesObject;
			if(!value["ZoneNo"].isNull())
				zonesObject.zoneNo = value["ZoneNo"].asString();
			auto allNetworkTypes = value["NetworkTypes"]["NetworkType"];
			for (auto value : allNetworkTypes)
				zonesObject.networkTypes.push_back(value.asString());
			dataObject.zones.push_back(zonesObject);
		}
		auto instanceTypeNode = value["InstanceType"];
		if(!instanceTypeNode["Generation"].isNull())
			dataObject.instanceType.generation = instanceTypeNode["Generation"].asString();
		if(!instanceTypeNode["InstanceTypeFamily"].isNull())
			dataObject.instanceType.instanceTypeFamily = instanceTypeNode["InstanceTypeFamily"].asString();
		if(!instanceTypeNode["InstanceType"].isNull())
			dataObject.instanceType.instanceType = instanceTypeNode["InstanceType"].asString();
		if(!instanceTypeNode["SupportIoOptimized"].isNull())
			dataObject.instanceType.supportIoOptimized = instanceTypeNode["SupportIoOptimized"].asString();
		if(!instanceTypeNode["Cores"].isNull())
			dataObject.instanceType.cores = std::stoi(instanceTypeNode["Cores"].asString());
		if(!instanceTypeNode["Memory"].isNull())
			dataObject.instanceType.memory = std::stoi(instanceTypeNode["Memory"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeRecommendInstanceTypeResult::RecommendInstanceType> DescribeRecommendInstanceTypeResult::getData()const
{
	return data_;
}

