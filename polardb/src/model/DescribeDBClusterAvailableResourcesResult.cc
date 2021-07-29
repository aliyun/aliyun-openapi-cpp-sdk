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

#include <alibabacloud/polardb/model/DescribeDBClusterAvailableResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterAvailableResourcesResult::DescribeDBClusterAvailableResourcesResult() :
	ServiceResult()
{}

DescribeDBClusterAvailableResourcesResult::DescribeDBClusterAvailableResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAvailableResourcesResult::~DescribeDBClusterAvailableResourcesResult()
{}

void DescribeDBClusterAvailableResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZonesNode = value["AvailableZones"]["AvailableZone"];
	for (auto valueAvailableZonesAvailableZone : allAvailableZonesNode)
	{
		AvailableZone availableZonesObject;
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		auto allSupportedEnginesNode = valueAvailableZonesAvailableZone["SupportedEngines"]["SupportedEngine"];
		for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].asString();
			auto allAvailableResourcesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["AvailableResources"]["AvailableResource"];
			for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineAvailableResourcesAvailableResource : allAvailableResourcesNode)
			{
				AvailableZone::SupportedEngine::AvailableResource availableResourcesObject;
				if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineAvailableResourcesAvailableResource["DBNodeClass"].isNull())
					availableResourcesObject.dBNodeClass = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineAvailableResourcesAvailableResource["DBNodeClass"].asString();
				if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineAvailableResourcesAvailableResource["Category"].isNull())
					availableResourcesObject.category = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineAvailableResourcesAvailableResource["Category"].asString();
				supportedEnginesObject.availableResources.push_back(availableResourcesObject);
			}
			availableZonesObject.supportedEngines.push_back(supportedEnginesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeDBClusterAvailableResourcesResult::AvailableZone> DescribeDBClusterAvailableResourcesResult::getAvailableZones()const
{
	return availableZones_;
}

