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

#include <alibabacloud/hbase/model/DescribeMultiZoneAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeMultiZoneAvailableResourceResult::DescribeMultiZoneAvailableResourceResult() :
	ServiceResult()
{}

DescribeMultiZoneAvailableResourceResult::DescribeMultiZoneAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMultiZoneAvailableResourceResult::~DescribeMultiZoneAvailableResourceResult()
{}

void DescribeMultiZoneAvailableResourceResult::parse(const std::string &payload)
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
		if(!valueAvailableZonesAvailableZone["ZoneCombination"].isNull())
			availableZonesObject.zoneCombination = valueAvailableZonesAvailableZone["ZoneCombination"].asString();
		auto allMasterResourcesNode = valueAvailableZonesAvailableZone["MasterResources"]["MasterResource"];
		for (auto valueAvailableZonesAvailableZoneMasterResourcesMasterResource : allMasterResourcesNode)
		{
			AvailableZone::MasterResource masterResourcesObject;
			if(!valueAvailableZonesAvailableZoneMasterResourcesMasterResource["InstanceType"].isNull())
				masterResourcesObject.instanceType = valueAvailableZonesAvailableZoneMasterResourcesMasterResource["InstanceType"].asString();
			auto instanceTypeDetailNode = value["InstanceTypeDetail"];
			if(!instanceTypeDetailNode["Cpu"].isNull())
				masterResourcesObject.instanceTypeDetail.cpu = std::stoi(instanceTypeDetailNode["Cpu"].asString());
			if(!instanceTypeDetailNode["Mem"].isNull())
				masterResourcesObject.instanceTypeDetail.mem = std::stoi(instanceTypeDetailNode["Mem"].asString());
			availableZonesObject.masterResources.push_back(masterResourcesObject);
		}
		auto allSupportedEnginesNode = valueAvailableZonesAvailableZone["SupportedEngines"]["SupportedEngine"];
		for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].asString();
			auto allSupportedEngineVersionsNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["SupportedEngineVersions"]["SupportedEngineVersion"];
			for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
			{
				AvailableZone::SupportedEngine::SupportedEngineVersion supportedEngineVersionsObject;
				if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
					supportedEngineVersionsObject.version = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
				auto allSupportedCategoriesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersion["SupportedCategories"]["SupportedCategoriesItem"];
				for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItem : allSupportedCategoriesNode)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem supportedCategoriesObject;
					if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItem["Category"].isNull())
						supportedCategoriesObject.category = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItem["Category"].asString();
					auto allSupportedStorageTypesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItem["SupportedStorageTypes"]["SupportedStorageType"];
					for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageType : allSupportedStorageTypesNode)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem::SupportedStorageType supportedStorageTypesObject;
						if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageType["StorageType"].isNull())
							supportedStorageTypesObject.storageType = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageType["StorageType"].asString();
						auto allCoreResourcesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageType["CoreResources"]["CoreResource"];
						for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource : allCoreResourcesNode)
						{
							AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategoriesItem::SupportedStorageType::CoreResource coreResourcesObject;
							if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource["InstanceType"].isNull())
								coreResourcesObject.instanceType = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource["InstanceType"].asString();
							if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource["MaxCoreCount"].isNull())
								coreResourcesObject.maxCoreCount = std::stoi(valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEngineVersionsSupportedEngineVersionSupportedCategoriesSupportedCategoriesItemSupportedStorageTypesSupportedStorageTypeCoreResourcesCoreResource["MaxCoreCount"].asString());
							auto dBInstanceStorageRangeNode = value["DBInstanceStorageRange"];
							if(!dBInstanceStorageRangeNode["MaxSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.maxSize = std::stoi(dBInstanceStorageRangeNode["MaxSize"].asString());
							if(!dBInstanceStorageRangeNode["MinSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.minSize = std::stoi(dBInstanceStorageRangeNode["MinSize"].asString());
							if(!dBInstanceStorageRangeNode["StepSize"].isNull())
								coreResourcesObject.dBInstanceStorageRange.stepSize = std::stoi(dBInstanceStorageRangeNode["StepSize"].asString());
							auto instanceTypeDetail1Node = value["InstanceTypeDetail"];
							if(!instanceTypeDetail1Node["Cpu"].isNull())
								coreResourcesObject.instanceTypeDetail1.cpu = std::stoi(instanceTypeDetail1Node["Cpu"].asString());
							if(!instanceTypeDetail1Node["Mem"].isNull())
								coreResourcesObject.instanceTypeDetail1.mem = std::stoi(instanceTypeDetail1Node["Mem"].asString());
							supportedStorageTypesObject.coreResources.push_back(coreResourcesObject);
						}
						supportedCategoriesObject.supportedStorageTypes.push_back(supportedStorageTypesObject);
					}
					supportedEngineVersionsObject.supportedCategories.push_back(supportedCategoriesObject);
				}
				supportedEnginesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
			}
			availableZonesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeMultiZoneAvailableResourceResult::AvailableZone> DescribeMultiZoneAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

