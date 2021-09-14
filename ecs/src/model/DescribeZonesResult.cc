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

#include <alibabacloud/ecs/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeZonesResult::DescribeZonesResult() :
	ServiceResult()
{}

DescribeZonesResult::DescribeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZonesResult::~DescribeZonesResult()
{}

void DescribeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allZonesNode = value["Zones"]["Zone"];
	for (auto valueZonesZone : allZonesNode)
	{
		Zone zonesObject;
		if(!valueZonesZone["ZoneId"].isNull())
			zonesObject.zoneId = valueZonesZone["ZoneId"].asString();
		if(!valueZonesZone["ZoneType"].isNull())
			zonesObject.zoneType = valueZonesZone["ZoneType"].asString();
		if(!valueZonesZone["LocalName"].isNull())
			zonesObject.localName = valueZonesZone["LocalName"].asString();
		auto allAvailableResourcesNode = valueZonesZone["AvailableResources"]["ResourcesInfo"];
		for (auto valueZonesZoneAvailableResourcesResourcesInfo : allAvailableResourcesNode)
		{
			Zone::ResourcesInfo availableResourcesObject;
			if(!valueZonesZoneAvailableResourcesResourcesInfo["IoOptimized"].isNull())
				availableResourcesObject.ioOptimized = valueZonesZoneAvailableResourcesResourcesInfo["IoOptimized"].asString() == "true";
			auto allSystemDiskCategories = value["SystemDiskCategories"]["supportedSystemDiskCategory"];
			for (auto value : allSystemDiskCategories)
				availableResourcesObject.systemDiskCategories.push_back(value.asString());
			auto allInstanceGenerations = value["InstanceGenerations"]["supportedInstanceGeneration"];
			for (auto value : allInstanceGenerations)
				availableResourcesObject.instanceGenerations.push_back(value.asString());
			auto allDataDiskCategories = value["DataDiskCategories"]["supportedDataDiskCategory"];
			for (auto value : allDataDiskCategories)
				availableResourcesObject.dataDiskCategories.push_back(value.asString());
			auto allInstanceTypes = value["InstanceTypes"]["supportedInstanceType"];
			for (auto value : allInstanceTypes)
				availableResourcesObject.instanceTypes.push_back(value.asString());
			auto allInstanceTypeFamilies = value["InstanceTypeFamilies"]["supportedInstanceTypeFamily"];
			for (auto value : allInstanceTypeFamilies)
				availableResourcesObject.instanceTypeFamilies.push_back(value.asString());
			auto allNetworkTypes = value["NetworkTypes"]["supportedNetworkCategory"];
			for (auto value : allNetworkTypes)
				availableResourcesObject.networkTypes.push_back(value.asString());
			zonesObject.availableResources.push_back(availableResourcesObject);
		}
		auto allAvailableResourceCreation = value["AvailableResourceCreation"]["ResourceTypes"];
		for (auto value : allAvailableResourceCreation)
			zonesObject.availableResourceCreation.push_back(value.asString());
		auto allDedicatedHostGenerations = value["DedicatedHostGenerations"]["DedicatedHostGeneration"];
		for (auto value : allDedicatedHostGenerations)
			zonesObject.dedicatedHostGenerations.push_back(value.asString());
		auto allAvailableInstanceTypes = value["AvailableInstanceTypes"]["InstanceTypes"];
		for (auto value : allAvailableInstanceTypes)
			zonesObject.availableInstanceTypes.push_back(value.asString());
		auto allAvailableDiskCategories = value["AvailableDiskCategories"]["DiskCategories"];
		for (auto value : allAvailableDiskCategories)
			zonesObject.availableDiskCategories.push_back(value.asString());
		auto allAvailableDedicatedHostTypes = value["AvailableDedicatedHostTypes"]["DedicatedHostType"];
		for (auto value : allAvailableDedicatedHostTypes)
			zonesObject.availableDedicatedHostTypes.push_back(value.asString());
		auto allAvailableVolumeCategories = value["AvailableVolumeCategories"]["VolumeCategories"];
		for (auto value : allAvailableVolumeCategories)
			zonesObject.availableVolumeCategories.push_back(value.asString());
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZonesResult::Zone> DescribeZonesResult::getZones()const
{
	return zones_;
}

