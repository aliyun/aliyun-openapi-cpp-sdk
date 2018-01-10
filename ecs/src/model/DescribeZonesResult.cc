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
	auto allZones = value["Zones"]["Zone"];
	for (auto value : allZones)
	{
		Zone zoneObject;
		zoneObject.zoneId = value["ZoneId"].asString();
		zoneObject.localName = value["LocalName"].asString();
		auto allAvailableResources = value["AvailableResources"]["ResourcesInfo"];
		for (auto value : allAvailableResources)
		{
			Zone::ResourcesInfo resourcesInfoObject;
			resourcesInfoObject.ioOptimized = std::stoi(value["IoOptimized"].asString());
			auto allSystemDiskCategories = value["SystemDiskCategories"]["supportedSystemDiskCategory"];
			for (auto value : allSystemDiskCategories)
				resourcesInfoObject.systemDiskCategories.push_back(value.asString());
			auto allDataDiskCategories = value["DataDiskCategories"]["supportedDataDiskCategory"];
			for (auto value : allDataDiskCategories)
				resourcesInfoObject.dataDiskCategories.push_back(value.asString());
			auto allNetworkTypes = value["NetworkTypes"]["supportedNetworkCategory"];
			for (auto value : allNetworkTypes)
				resourcesInfoObject.networkTypes.push_back(value.asString());
			auto allInstanceTypes = value["InstanceTypes"]["supportedInstanceType"];
			for (auto value : allInstanceTypes)
				resourcesInfoObject.instanceTypes.push_back(value.asString());
			auto allInstanceTypeFamilies = value["InstanceTypeFamilies"]["supportedInstanceTypeFamily"];
			for (auto value : allInstanceTypeFamilies)
				resourcesInfoObject.instanceTypeFamilies.push_back(value.asString());
			auto allInstanceGenerations = value["InstanceGenerations"]["supportedInstanceGeneration"];
			for (auto value : allInstanceGenerations)
				resourcesInfoObject.instanceGenerations.push_back(value.asString());
			zoneObject.availableResources.push_back(resourcesInfoObject);
		}
		auto allAvailableResourceCreation = value["AvailableResourceCreation"]["ResourceTypes"];
		for (auto value : allAvailableResourceCreation)
			zoneObject.availableResourceCreation.push_back(value.asString());
		auto allAvailableDiskCategories = value["AvailableDiskCategories"]["DiskCategories"];
		for (auto value : allAvailableDiskCategories)
			zoneObject.availableDiskCategories.push_back(value.asString());
		auto allAvailableInstanceTypes = value["AvailableInstanceTypes"]["InstanceTypes"];
		for (auto value : allAvailableInstanceTypes)
			zoneObject.availableInstanceTypes.push_back(value.asString());
		auto allAvailableVolumeCategories = value["AvailableVolumeCategories"]["VolumeCategories"];
		for (auto value : allAvailableVolumeCategories)
			zoneObject.availableVolumeCategories.push_back(value.asString());
		zones_.push_back(zoneObject);
	}

}

