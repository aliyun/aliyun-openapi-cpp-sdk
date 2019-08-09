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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allZones = value["Zones"]["Zone"];
	for (auto value : allZones)
	{
		Zone zonesObject;
		if(!value["ZoneId"].isNull())
			zonesObject.zoneId = value["ZoneId"].asString();
		if(!value["LocalName"].isNull())
			zonesObject.localName = value["LocalName"].asString();
		auto allAvailableResources = value["AvailableResources"]["ResourcesInfo"];
		for (auto value : allAvailableResources)
		{
			Zone::ResourcesInfo availableResourcesObject;
			if(!value["IoOptimized"].isNull())
				availableResourcesObject.ioOptimized = value["IoOptimized"].asString() == "true";
			auto allSystemDiskCategories = value["SystemDiskCategories"]["supportedSystemDiskCategory"];
			for (auto value : allSystemDiskCategories)
				availableResourcesObject.systemDiskCategories.push_back(value.asString());
			auto allDataDiskCategories = value["DataDiskCategories"]["supportedDataDiskCategory"];
			for (auto value : allDataDiskCategories)
				availableResourcesObject.dataDiskCategories.push_back(value.asString());
			auto allNetworkTypes = value["NetworkTypes"]["supportedNetworkCategory"];
			for (auto value : allNetworkTypes)
				availableResourcesObject.networkTypes.push_back(value.asString());
			auto allInstanceTypes = value["InstanceTypes"]["supportedInstanceType"];
			for (auto value : allInstanceTypes)
				availableResourcesObject.instanceTypes.push_back(value.asString());
			auto allInstanceTypeFamilies = value["InstanceTypeFamilies"]["supportedInstanceTypeFamily"];
			for (auto value : allInstanceTypeFamilies)
				availableResourcesObject.instanceTypeFamilies.push_back(value.asString());
			auto allInstanceGenerations = value["InstanceGenerations"]["supportedInstanceGeneration"];
			for (auto value : allInstanceGenerations)
				availableResourcesObject.instanceGenerations.push_back(value.asString());
			zonesObject.availableResources.push_back(availableResourcesObject);
		}
		auto allAvailableResourceCreation = value["AvailableResourceCreation"]["ResourceTypes"];
		for (auto value : allAvailableResourceCreation)
			zonesObject.availableResourceCreation.push_back(value.asString());
		auto allAvailableDiskCategories = value["AvailableDiskCategories"]["DiskCategories"];
		for (auto value : allAvailableDiskCategories)
			zonesObject.availableDiskCategories.push_back(value.asString());
		auto allAvailableInstanceTypes = value["AvailableInstanceTypes"]["InstanceTypes"];
		for (auto value : allAvailableInstanceTypes)
			zonesObject.availableInstanceTypes.push_back(value.asString());
		auto allAvailableVolumeCategories = value["AvailableVolumeCategories"]["VolumeCategories"];
		for (auto value : allAvailableVolumeCategories)
			zonesObject.availableVolumeCategories.push_back(value.asString());
		auto allAvailableDedicatedHostTypes = value["AvailableDedicatedHostTypes"]["DedicatedHostType"];
		for (auto value : allAvailableDedicatedHostTypes)
			zonesObject.availableDedicatedHostTypes.push_back(value.asString());
		auto allDedicatedHostGenerations = value["DedicatedHostGenerations"]["DedicatedHostGeneration"];
		for (auto value : allDedicatedHostGenerations)
			zonesObject.dedicatedHostGenerations.push_back(value.asString());
		zones_.push_back(zonesObject);
	}

}

std::vector<DescribeZonesResult::Zone> DescribeZonesResult::getZones()const
{
	return zones_;
}

