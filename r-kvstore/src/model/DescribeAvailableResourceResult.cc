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

#include <alibabacloud/r-kvstore/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAvailableZones = value["AvailableZones"]["AvailableZone"];
	for (auto value : allAvailableZones)
	{
		AvailableZone availableZonesObject;
		if(!value["RegionId"].isNull())
			availableZonesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			availableZonesObject.zoneId = value["ZoneId"].asString();
		if(!value["Status"].isNull())
			availableZonesObject.status = value["Status"].asString();
		if(!value["NetworkTypes"].isNull())
			availableZonesObject.networkTypes = value["NetworkTypes"].asString();
		auto allSupportedEngines = value["SupportedEngines"]["SupportedEngine"];
		for (auto value : allSupportedEngines)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!value["Engine"].isNull())
				supportedEnginesObject.engine = value["Engine"].asString();
			auto allSupportedEngineVersions = value["SupportedEngineVersions"]["SupportedEngineVersion"];
			for (auto value : allSupportedEngineVersions)
			{
				AvailableZone::SupportedEngine::SupportedEngineVersion supportedEngineVersionsObject;
				if(!value["Version"].isNull())
					supportedEngineVersionsObject.version = value["Version"].asString();
				auto allSupportedArchitectureTypes = value["SupportedArchitectureTypes"]["SupportedArchitectureType"];
				for (auto value : allSupportedArchitectureTypes)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType supportedArchitectureTypesObject;
					if(!value["Architecture"].isNull())
						supportedArchitectureTypesObject.architecture = value["Architecture"].asString();
					auto allSupportedPerformanceTypes = value["SupportedPerformanceTypes"]["SupportedPerformanceType"];
					for (auto value : allSupportedPerformanceTypes)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType supportedPerformanceTypesObject;
						if(!value["PerformanceType"].isNull())
							supportedPerformanceTypesObject.performanceType = value["PerformanceType"].asString();
						auto allSupportedStorageTypes = value["SupportedStorageTypes"]["SupportedStorageType"];
						for (auto value : allSupportedStorageTypes)
						{
							AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType supportedStorageTypesObject;
							if(!value["StorageType"].isNull())
								supportedStorageTypesObject.storageType = value["StorageType"].asString();
							auto allSupportedNodeTypes = value["SupportedNodeTypes"]["SupportedNodeType"];
							for (auto value : allSupportedNodeTypes)
							{
								AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType supportedNodeTypesObject;
								if(!value["NodeType"].isNull())
									supportedNodeTypesObject.nodeType = value["NodeType"].asString();
								auto allSupportedPackageTypes = value["SupportedPackageTypes"]["SupportedPackageType"];
								for (auto value : allSupportedPackageTypes)
								{
									AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType::SupportedPackageType supportedPackageTypesObject;
									if(!value["PackageType"].isNull())
										supportedPackageTypesObject.packageType = value["PackageType"].asString();
									auto allAvailableResources = value["AvailableResources"]["AvailableResource"];
									for (auto value : allAvailableResources)
									{
										AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType::SupportedPackageType::AvailableResource availableResourcesObject;
										if(!value["InstanceClass"].isNull())
											availableResourcesObject.instanceClass = value["InstanceClass"].asString();
										supportedPackageTypesObject.availableResources.push_back(availableResourcesObject);
									}
									supportedNodeTypesObject.supportedPackageTypes.push_back(supportedPackageTypesObject);
								}
								supportedStorageTypesObject.supportedNodeTypes.push_back(supportedNodeTypesObject);
							}
							supportedPerformanceTypesObject.supportedStorageTypes.push_back(supportedStorageTypesObject);
						}
						supportedArchitectureTypesObject.supportedPerformanceTypes.push_back(supportedPerformanceTypesObject);
					}
					supportedEngineVersionsObject.supportedArchitectureTypes.push_back(supportedArchitectureTypesObject);
				}
				supportedEnginesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
			}
			availableZonesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeAvailableResourceResult::AvailableZone> DescribeAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

