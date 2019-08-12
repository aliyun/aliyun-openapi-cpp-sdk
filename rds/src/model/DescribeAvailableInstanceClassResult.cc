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
		auto allSupportedEngine = value["SupportedEngine"]["SupportedEngines"];
		for (auto value : allSupportedEngine)
		{
			AvailableZone::SupportedEngines supportedEngineObject;
			if(!value["Engine"].isNull())
				supportedEngineObject.engine = value["Engine"].asString();
			auto allSupportedEngineVersion = value["SupportedEngineVersion"]["SupportedEngineVersions"];
			for (auto value : allSupportedEngineVersion)
			{
				AvailableZone::SupportedEngines::SupportedEngineVersions supportedEngineVersionObject;
				if(!value["Version"].isNull())
					supportedEngineVersionObject.version = value["Version"].asString();
				auto allSupportedCategory = value["SupportedCategory"]["SupportedCategorys"];
				for (auto value : allSupportedCategory)
				{
					AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys supportedCategoryObject;
					if(!value["Category"].isNull())
						supportedCategoryObject.category = value["Category"].asString();
					auto allSupportedStorageType = value["SupportedStorageType"]["SupportedStorageTypes"];
					for (auto value : allSupportedStorageType)
					{
						AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys::SupportedStorageTypes supportedStorageTypeObject;
						if(!value["StorageType"].isNull())
							supportedStorageTypeObject.storageType = value["StorageType"].asString();
						auto allAvailableResource = value["AvailableResource"]["AvailableResources"];
						for (auto value : allAvailableResource)
						{
							AvailableZone::SupportedEngines::SupportedEngineVersions::SupportedCategorys::SupportedStorageTypes::AvailableResources availableResourceObject;
							if(!value["DBInstanceClass"].isNull())
								availableResourceObject.dBInstanceClass = value["DBInstanceClass"].asString();
							if(!value["StorageRange"].isNull())
								availableResourceObject.storageRange = value["StorageRange"].asString();
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

