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

#include <alibabacloud/rds/model/DescribeAvailableInstanceClassResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAvailableInstanceClassResult::DescribeAvailableInstanceClassResult() :
	ServiceResult()
{}

DescribeAvailableInstanceClassResult::DescribeAvailableInstanceClassResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableInstanceClassResult::~DescribeAvailableInstanceClassResult()
{}

void DescribeAvailableInstanceClassResult::parse(const std::string &payload)
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
		auto allSupportedEngineNode = allAvailableZonesNode["SupportedEngine"]["SupportedEngines"];
		for (auto allAvailableZonesNodeSupportedEngineSupportedEngines : allSupportedEngineNode)
		{
			AvailableZone::SupportedEngines supportedEngineObject;
			if(!allAvailableZonesNodeSupportedEngineSupportedEngines["Engine"].isNull())
				supportedEngineObject.engine = allAvailableZonesNodeSupportedEngineSupportedEngines["Engine"].asString();
			auto allSupportedEngineVersionNode = allSupportedEngineNode["SupportedEngineVersion"]["SupportedEngineVersions"];
			for (auto allSupportedEngineNodeSupportedEngineVersionSupportedEngineVersions : allSupportedEngineVersionNode)
			{
				AvailableZone::SupportedEngines::SupportedEngineVersions supportedEngineVersionObject;
				if(!allSupportedEngineNodeSupportedEngineVersionSupportedEngineVersions["Version"].isNull())
					supportedEngineVersionObject.version = allSupportedEngineNodeSupportedEngineVersionSupportedEngineVersions["Version"].asString();
				auto allSupportedCategoryNode = allSupportedEngineVersionNode["SupportedCategory"]["SupportedCategorys"];
				for (auto allSupportedEngineVersionNodeSupportedCategorySupportedCategorys : allSupportedCategoryNode)
				{
					AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys supportedCategoryObject;
					if(!allSupportedEngineVersionNodeSupportedCategorySupportedCategorys["Category"].isNull())
						supportedCategoryObject.category = allSupportedEngineVersionNodeSupportedCategorySupportedCategorys["Category"].asString();
					auto allSupportedStorageTypeNode = allSupportedCategoryNode["SupportedStorageType"]["SupportedStorageTypes"];
					for (auto allSupportedCategoryNodeSupportedStorageTypeSupportedStorageTypes : allSupportedStorageTypeNode)
					{
						AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys::SupportedStorageTypes supportedStorageTypeObject;
						if(!allSupportedCategoryNodeSupportedStorageTypeSupportedStorageTypes["StorageType"].isNull())
							supportedStorageTypeObject.storageType = allSupportedCategoryNodeSupportedStorageTypeSupportedStorageTypes["StorageType"].asString();
						auto allAvailableResourceNode = allSupportedStorageTypeNode["AvailableResource"]["AvailableResources"];
						for (auto allSupportedStorageTypeNodeAvailableResourceAvailableResources : allAvailableResourceNode)
						{
							AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys::SupportedStorageTypes::AvailableResources availableResourceObject;
							if(!allSupportedStorageTypeNodeAvailableResourceAvailableResources["DBInstanceClass"].isNull())
								availableResourceObject.dBInstanceClass = allSupportedStorageTypeNodeAvailableResourceAvailableResources["DBInstanceClass"].asString();
							if(!allSupportedStorageTypeNodeAvailableResourceAvailableResources["StorageRange"].isNull())
								availableResourceObject.storageRange = allSupportedStorageTypeNodeAvailableResourceAvailableResources["StorageRange"].asString();
							supportedStorageTypeObject.availableResource.push_back(availableResourceObject);
						}
						supportedCategoryObject.supportedStorageType.push_back(supportedStorageTypeObject);
					}
					supportedEngineVersionObject.supportedCategory.push_back(supportedCategoryObject);
				}
				supportedEngineObject.supportedEngineVersion.push_back(supportedEngineVersionObject);
			}
			availableZonesObject.supportedEngine.push_back(supportedEngineObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeAvailableInstanceClassResult::AvailableZone> DescribeAvailableInstanceClassResult::getAvailableZones()const
{
	return availableZones_;
}

