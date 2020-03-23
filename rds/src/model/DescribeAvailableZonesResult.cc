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

#include <alibabacloud/rds/model/DescribeAvailableZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAvailableZonesResult::DescribeAvailableZonesResult() :
	ServiceResult()
{}

DescribeAvailableZonesResult::DescribeAvailableZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableZonesResult::~DescribeAvailableZonesResult()
{}

void DescribeAvailableZonesResult::parse(const std::string &payload)
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
				auto allSupportedCategorysNode = allSupportedEngineVersionsNode["SupportedCategorys"]["SupportedCategory"];
				for (auto allSupportedEngineVersionsNodeSupportedCategorysSupportedCategory : allSupportedCategorysNode)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategory supportedCategorysObject;
					if(!allSupportedEngineVersionsNodeSupportedCategorysSupportedCategory["Category"].isNull())
						supportedCategorysObject.category = allSupportedEngineVersionsNodeSupportedCategorysSupportedCategory["Category"].asString();
					auto allSupportedStorageTypesNode = allSupportedCategorysNode["SupportedStorageTypes"]["SupportedStorageType"];
					for (auto allSupportedCategorysNodeSupportedStorageTypesSupportedStorageType : allSupportedStorageTypesNode)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategory::SupportedStorageType supportedStorageTypesObject;
						if(!allSupportedCategorysNodeSupportedStorageTypesSupportedStorageType["StorageType"].isNull())
							supportedStorageTypesObject.storageType = allSupportedCategorysNodeSupportedStorageTypesSupportedStorageType["StorageType"].asString();
						supportedCategorysObject.supportedStorageTypes.push_back(supportedStorageTypesObject);
					}
					supportedEngineVersionsObject.supportedCategorys.push_back(supportedCategorysObject);
				}
				supportedEnginesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
			}
			availableZonesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeAvailableZonesResult::AvailableZone> DescribeAvailableZonesResult::getAvailableZones()const
{
	return availableZones_;
}

