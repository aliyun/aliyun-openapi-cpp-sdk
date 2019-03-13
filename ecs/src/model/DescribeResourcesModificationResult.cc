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

#include <alibabacloud/ecs/model/DescribeResourcesModificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeResourcesModificationResult::DescribeResourcesModificationResult() :
	ServiceResult()
{}

DescribeResourcesModificationResult::DescribeResourcesModificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourcesModificationResult::~DescribeResourcesModificationResult()
{}

void DescribeResourcesModificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

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
		if(!value["StatusCategory"].isNull())
			availableZonesObject.statusCategory = value["StatusCategory"].asString();
		auto allAvailableResources = value["AvailableResources"]["AvailableResource"];
		for (auto value : allAvailableResources)
		{
			AvailableZone::AvailableResource availableResourcesObject;
			if(!value["Type"].isNull())
				availableResourcesObject.type = value["Type"].asString();
			auto allSupportedResources = value["SupportedResources"]["SupportedResource"];
			for (auto value : allSupportedResources)
			{
				AvailableZone::AvailableResource::SupportedResource supportedResourcesObject;
				if(!value["Value"].isNull())
					supportedResourcesObject.value = value["Value"].asString();
				if(!value["Status"].isNull())
					supportedResourcesObject.status = value["Status"].asString();
				if(!value["StatusCategory"].isNull())
					supportedResourcesObject.statusCategory = value["StatusCategory"].asString();
				if(!value["Min"].isNull())
					supportedResourcesObject.min = std::stoi(value["Min"].asString());
				if(!value["Max"].isNull())
					supportedResourcesObject.max = std::stoi(value["Max"].asString());
				if(!value["Unit"].isNull())
					supportedResourcesObject.unit = value["Unit"].asString();
				availableResourcesObject.supportedResources.push_back(supportedResourcesObject);
			}
			availableZonesObject.availableResources.push_back(availableResourcesObject);
		}
		availableZones_.push_back(availableZonesObject);
	}

}

std::vector<DescribeResourcesModificationResult::AvailableZone> DescribeResourcesModificationResult::getAvailableZones()const
{
	return availableZones_;
}

