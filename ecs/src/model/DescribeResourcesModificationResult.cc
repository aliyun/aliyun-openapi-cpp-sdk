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
		if(!valueAvailableZonesAvailableZone["StatusCategory"].isNull())
			availableZonesObject.statusCategory = valueAvailableZonesAvailableZone["StatusCategory"].asString();
		auto allAvailableResourcesNode = allAvailableZonesNode["AvailableResources"]["AvailableResource"];
		for (auto allAvailableZonesNodeAvailableResourcesAvailableResource : allAvailableResourcesNode)
		{
			AvailableZone::AvailableResource availableResourcesObject;
			if(!allAvailableZonesNodeAvailableResourcesAvailableResource["Type"].isNull())
				availableResourcesObject.type = allAvailableZonesNodeAvailableResourcesAvailableResource["Type"].asString();
			auto allSupportedResourcesNode = allAvailableResourcesNode["SupportedResources"]["SupportedResource"];
			for (auto allAvailableResourcesNodeSupportedResourcesSupportedResource : allSupportedResourcesNode)
			{
				AvailableZone::AvailableResource::SupportedResource supportedResourcesObject;
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["Value"].isNull())
					supportedResourcesObject.value = allAvailableResourcesNodeSupportedResourcesSupportedResource["Value"].asString();
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["Status"].isNull())
					supportedResourcesObject.status = allAvailableResourcesNodeSupportedResourcesSupportedResource["Status"].asString();
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["StatusCategory"].isNull())
					supportedResourcesObject.statusCategory = allAvailableResourcesNodeSupportedResourcesSupportedResource["StatusCategory"].asString();
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["Min"].isNull())
					supportedResourcesObject.min = std::stoi(allAvailableResourcesNodeSupportedResourcesSupportedResource["Min"].asString());
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["Max"].isNull())
					supportedResourcesObject.max = std::stoi(allAvailableResourcesNodeSupportedResourcesSupportedResource["Max"].asString());
				if(!allAvailableResourcesNodeSupportedResourcesSupportedResource["Unit"].isNull())
					supportedResourcesObject.unit = allAvailableResourcesNodeSupportedResourcesSupportedResource["Unit"].asString();
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

