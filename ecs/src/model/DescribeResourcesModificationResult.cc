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
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		if(!valueAvailableZonesAvailableZone["Status"].isNull())
			availableZonesObject.status = valueAvailableZonesAvailableZone["Status"].asString();
		if(!valueAvailableZonesAvailableZone["StatusCategory"].isNull())
			availableZonesObject.statusCategory = valueAvailableZonesAvailableZone["StatusCategory"].asString();
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		auto allAvailableResourcesNode = valueAvailableZonesAvailableZone["AvailableResources"]["AvailableResource"];
		for (auto valueAvailableZonesAvailableZoneAvailableResourcesAvailableResource : allAvailableResourcesNode)
		{
			AvailableZone::AvailableResource availableResourcesObject;
			if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResource["Type"].isNull())
				availableResourcesObject.type = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResource["Type"].asString();
			auto allSupportedResourcesNode = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResource["SupportedResources"]["SupportedResource"];
			for (auto valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource : allSupportedResourcesNode)
			{
				AvailableZone::AvailableResource::SupportedResource supportedResourcesObject;
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Status"].isNull())
					supportedResourcesObject.status = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Status"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Value"].isNull())
					supportedResourcesObject.value = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Value"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Max"].isNull())
					supportedResourcesObject.max = std::stoi(valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Max"].asString());
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Unit"].isNull())
					supportedResourcesObject.unit = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Unit"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["StatusCategory"].isNull())
					supportedResourcesObject.statusCategory = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["StatusCategory"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Min"].isNull())
					supportedResourcesObject.min = std::stoi(valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource["Min"].asString());
				availableResourcesObject.supportedResources.push_back(supportedResourcesObject);
			}
			auto allConditionSupportedResourcesNode = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResource["ConditionSupportedResources"]["ConditionSupportedResource"];
			for (auto valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource : allConditionSupportedResourcesNode)
			{
				AvailableZone::AvailableResource::ConditionSupportedResource conditionSupportedResourcesObject;
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Status"].isNull())
					conditionSupportedResourcesObject.status = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Status"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Value"].isNull())
					conditionSupportedResourcesObject.value = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Value"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Max"].isNull())
					conditionSupportedResourcesObject.max = std::stoi(valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Max"].asString());
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Unit"].isNull())
					conditionSupportedResourcesObject.unit = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Unit"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["StatusCategory"].isNull())
					conditionSupportedResourcesObject.statusCategory = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["StatusCategory"].asString();
				if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Min"].isNull())
					conditionSupportedResourcesObject.min = std::stoi(valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Min"].asString());
				auto allConditionsNode = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResource["Conditions"]["Condition"];
				for (auto valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResourceConditionsCondition : allConditionsNode)
				{
					AvailableZone::AvailableResource::ConditionSupportedResource::Condition conditionsObject;
					if(!valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResourceConditionsCondition["Key"].isNull())
						conditionsObject.key = valueAvailableZonesAvailableZoneAvailableResourcesAvailableResourceConditionSupportedResourcesConditionSupportedResourceConditionsCondition["Key"].asString();
					conditionSupportedResourcesObject.conditions.push_back(conditionsObject);
				}
				availableResourcesObject.conditionSupportedResources.push_back(conditionSupportedResourcesObject);
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

