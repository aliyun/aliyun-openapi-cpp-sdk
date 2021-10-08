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
	auto allDataNode = value["Data"]["RecommendInstanceType"];
	for (auto valueDataRecommendInstanceType : allDataNode)
	{
		RecommendInstanceType dataObject;
		if(!valueDataRecommendInstanceType["CommodityCode"].isNull())
			dataObject.commodityCode = valueDataRecommendInstanceType["CommodityCode"].asString();
		if(!valueDataRecommendInstanceType["ZoneId"].isNull())
			dataObject.zoneId = valueDataRecommendInstanceType["ZoneId"].asString();
		if(!valueDataRecommendInstanceType["Priority"].isNull())
			dataObject.priority = std::stoi(valueDataRecommendInstanceType["Priority"].asString());
		if(!valueDataRecommendInstanceType["NetworkType"].isNull())
			dataObject.networkType = valueDataRecommendInstanceType["NetworkType"].asString();
		if(!valueDataRecommendInstanceType["Scene"].isNull())
			dataObject.scene = valueDataRecommendInstanceType["Scene"].asString();
		if(!valueDataRecommendInstanceType["SpotStrategy"].isNull())
			dataObject.spotStrategy = valueDataRecommendInstanceType["SpotStrategy"].asString();
		if(!valueDataRecommendInstanceType["RegionId"].isNull())
			dataObject.regionId = valueDataRecommendInstanceType["RegionId"].asString();
		if(!valueDataRecommendInstanceType["InstanceChargeType"].isNull())
			dataObject.instanceChargeType = valueDataRecommendInstanceType["InstanceChargeType"].asString();
		auto allZonesNode = valueDataRecommendInstanceType["Zones"]["zone"];
		for (auto valueDataRecommendInstanceTypeZoneszone : allZonesNode)
		{
			RecommendInstanceType::Zone zonesObject;
			if(!valueDataRecommendInstanceTypeZoneszone["ZoneNo"].isNull())
				zonesObject.zoneNo = valueDataRecommendInstanceTypeZoneszone["ZoneNo"].asString();
			auto allNetworkTypes = value["NetworkTypes"]["NetworkType"];
			for (auto value : allNetworkTypes)
				zonesObject.networkTypes.push_back(value.asString());
			dataObject.zones.push_back(zonesObject);
		}
		auto instanceTypeNode = value["InstanceType"];
		if(!instanceTypeNode["SupportIoOptimized"].isNull())
			dataObject.instanceType.supportIoOptimized = instanceTypeNode["SupportIoOptimized"].asString();
		if(!instanceTypeNode["Cores"].isNull())
			dataObject.instanceType.cores = std::stoi(instanceTypeNode["Cores"].asString());
		if(!instanceTypeNode["Memory"].isNull())
			dataObject.instanceType.memory = std::stoi(instanceTypeNode["Memory"].asString());
		if(!instanceTypeNode["InstanceType"].isNull())
			dataObject.instanceType.instanceType = instanceTypeNode["InstanceType"].asString();
		if(!instanceTypeNode["InstanceTypeFamily"].isNull())
			dataObject.instanceType.instanceTypeFamily = instanceTypeNode["InstanceTypeFamily"].asString();
		if(!instanceTypeNode["Generation"].isNull())
			dataObject.instanceType.generation = instanceTypeNode["Generation"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeRecommendInstanceTypeResult::RecommendInstanceType> DescribeRecommendInstanceTypeResult::getData()const
{
	return data_;
}

