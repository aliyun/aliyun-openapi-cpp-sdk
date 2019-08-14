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

#include <alibabacloud/rds/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
				auto allSupportedCategorys = value["SupportedCategorys"]["SupportedCategory"];
				for (auto value : allSupportedCategorys)
				{
					AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategory supportedCategorysObject;
					if(!value["Category"].isNull())
						supportedCategorysObject.category = value["Category"].asString();
					auto allSupportedStorageTypes = value["SupportedStorageTypes"]["SupportedStorageType"];
					for (auto value : allSupportedStorageTypes)
					{
						AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategory::SupportedStorageType supportedStorageTypesObject;
						if(!value["StorageType"].isNull())
							supportedStorageTypesObject.storageType = value["StorageType"].asString();
						auto allAvailableResources = value["AvailableResources"]["AvailableResource"];
						for (auto value : allAvailableResources)
						{
							AvailableZone::SupportedEngine::SupportedEngineVersion::SupportedCategory::SupportedStorageType::AvailableResource availableResourcesObject;
							if(!value["DBInstanceClass"].isNull())
								availableResourcesObject.dBInstanceClass = value["DBInstanceClass"].asString();
							if(!value["StorageRange"].isNull())
								availableResourcesObject.storageRange = value["StorageRange"].asString();
							auto dBInstanceStorageRangeNode = value["DBInstanceStorageRange"];
							if(!dBInstanceStorageRangeNode["Max"].isNull())
								availableResourcesObject.dBInstanceStorageRange.max = std::stoi(dBInstanceStorageRangeNode["Max"].asString());
							if(!dBInstanceStorageRangeNode["Min"].isNull())
								availableResourcesObject.dBInstanceStorageRange.min = std::stoi(dBInstanceStorageRangeNode["Min"].asString());
							if(!dBInstanceStorageRangeNode["Step"].isNull())
								availableResourcesObject.dBInstanceStorageRange.step = std::stoi(dBInstanceStorageRangeNode["Step"].asString());
							supportedStorageTypesObject.availableResources.push_back(availableResourcesObject);
						}
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

std::vector<DescribeAvailableResourceResult::AvailableZone> DescribeAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

