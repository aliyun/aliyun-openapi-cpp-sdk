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

#include <alibabacloud/ecs/model/DescribeSpotAdviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSpotAdviceResult::DescribeSpotAdviceResult() :
	ServiceResult()
{}

DescribeSpotAdviceResult::DescribeSpotAdviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSpotAdviceResult::~DescribeSpotAdviceResult()
{}

void DescribeSpotAdviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableSpotZonesNode = value["AvailableSpotZones"]["AvailableSpotZone"];
	for (auto valueAvailableSpotZonesAvailableSpotZone : allAvailableSpotZonesNode)
	{
		AvailableSpotZone availableSpotZonesObject;
		if(!valueAvailableSpotZonesAvailableSpotZone["ZoneId"].isNull())
			availableSpotZonesObject.zoneId = valueAvailableSpotZonesAvailableSpotZone["ZoneId"].asString();
		auto allAvailableSpotResourcesNode = valueAvailableSpotZonesAvailableSpotZone["AvailableSpotResources"]["AvailableSpotResource"];
		for (auto valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource : allAvailableSpotResourcesNode)
		{
			AvailableSpotZone::AvailableSpotResource availableSpotResourcesObject;
			if(!valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InterruptRateDesc"].isNull())
				availableSpotResourcesObject.interruptRateDesc = valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InterruptRateDesc"].asString();
			if(!valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["AverageSpotDiscount"].isNull())
				availableSpotResourcesObject.averageSpotDiscount = std::stoi(valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["AverageSpotDiscount"].asString());
			if(!valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InstanceType"].isNull())
				availableSpotResourcesObject.instanceType = valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InstanceType"].asString();
			if(!valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InterruptionRate"].isNull())
				availableSpotResourcesObject.interruptionRate = std::stof(valueAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource["InterruptionRate"].asString());
			availableSpotZonesObject.availableSpotResources.push_back(availableSpotResourcesObject);
		}
		availableSpotZones_.push_back(availableSpotZonesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeSpotAdviceResult::AvailableSpotZone> DescribeSpotAdviceResult::getAvailableSpotZones()const
{
	return availableSpotZones_;
}

std::string DescribeSpotAdviceResult::getRegionId()const
{
	return regionId_;
}

