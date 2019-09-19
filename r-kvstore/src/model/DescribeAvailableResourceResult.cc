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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZonesNode = value["AvailableZones"]["AvailableZone"];
	for (auto valueAvailableZonesAvailableZone : allAvailableZonesNode)
	{
		AvailableZone availableZonesObject;
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		if(!valueAvailableZonesAvailableZone["Status"].isNull())
			availableZonesObject.status = valueAvailableZonesAvailableZone["Status"].asString();
		if(!valueAvailableZonesAvailableZone["NetworkTypes"].isNull())
			availableZonesObject.networkTypes = valueAvailableZonesAvailableZone["NetworkTypes"].asString();
		auto allSupportedEnginesNode = allAvailableZonesNode["SupportedEngines"]["SupportedEngine"];
		for (auto allAvailableZonesNodeSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].asString();
			auto allSupportedEngineVersionsNode = allSupportedEnginesNode["SupportedEngineVersions"]["SupportedEngineVersion"];
			for (auto allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
			{
				AvailableZone::SupportedEngine::SupportedEngineVersion supportedEngineVersionsObject;
				if(!allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
					supportedEngineVersionsObject.version = allSupportedEnginesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
				auto allSupportedArchitectureTypesNode = allSupportedEngineVersionsNode["SupportedArchitectureTypes"]["SupportedArchitectureType"];
				for (auto allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType : allSupportedArchitectureTypesNode)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType supportedArchitectureTypesObject;
					if(!allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType["Architecture"].isNull())
						supportedArchitectureTypesObject.architecture = allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType["Architecture"].asString();
					auto allSupportedPerformanceTypesNode = allSupportedArchitectureTypesNode["SupportedPerformanceTypes"]["SupportedPerformanceType"];
					for (auto allSupportedArchitectureTypesNodeSupportedPerformanceTypesSupportedPerformanceType : allSupportedPerformanceTypesNode)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType supportedPerformanceTypesObject;
						if(!allSupportedArchitectureTypesNodeSupportedPerformanceTypesSupportedPerformanceType["PerformanceType"].isNull())
							supportedPerformanceTypesObject.performanceType = allSupportedArchitectureTypesNodeSupportedPerformanceTypesSupportedPerformanceType["PerformanceType"].asString();
						auto allSupportedStorageTypesNode = allSupportedPerformanceTypesNode["SupportedStorageTypes"]["SupportedStorageType"];
						for (auto allSupportedPerformanceTypesNodeSupportedStorageTypesSupportedStorageType : allSupportedStorageTypesNode)
						{
							AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType supportedStorageTypesObject;
							if(!allSupportedPerformanceTypesNodeSupportedStorageTypesSupportedStorageType["StorageType"].isNull())
								supportedStorageTypesObject.storageType = allSupportedPerformanceTypesNodeSupportedStorageTypesSupportedStorageType["StorageType"].asString();
							auto allSupportedNodeTypesNode = allSupportedStorageTypesNode["SupportedNodeTypes"]["SupportedNodeType"];
							for (auto allSupportedStorageTypesNodeSupportedNodeTypesSupportedNodeType : allSupportedNodeTypesNode)
							{
								AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType supportedNodeTypesObject;
								if(!allSupportedStorageTypesNodeSupportedNodeTypesSupportedNodeType["NodeType"].isNull())
									supportedNodeTypesObject.nodeType = allSupportedStorageTypesNodeSupportedNodeTypesSupportedNodeType["NodeType"].asString();
								auto allSupportedPackageTypesNode = allSupportedNodeTypesNode["SupportedPackageTypes"]["SupportedPackageType"];
								for (auto allSupportedNodeTypesNodeSupportedPackageTypesSupportedPackageType : allSupportedPackageTypesNode)
								{
									AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType::SupportedPackageType supportedPackageTypesObject;
									if(!allSupportedNodeTypesNodeSupportedPackageTypesSupportedPackageType["PackageType"].isNull())
										supportedPackageTypesObject.packageType = allSupportedNodeTypesNodeSupportedPackageTypesSupportedPackageType["PackageType"].asString();
									auto allAvailableResourcesNode = allSupportedPackageTypesNode["AvailableResources"]["AvailableResource"];
									for (auto allSupportedPackageTypesNodeAvailableResourcesAvailableResource : allAvailableResourcesNode)
									{
										AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedArchitectureType::SupportedPerformanceType::SupportedStorageType::SupportedNodeType::SupportedPackageType::AvailableResource availableResourcesObject;
										if(!allSupportedPackageTypesNodeAvailableResourcesAvailableResource["InstanceClass"].isNull())
											availableResourcesObject.instanceClass = allSupportedPackageTypesNodeAvailableResourcesAvailableResource["InstanceClass"].asString();
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

