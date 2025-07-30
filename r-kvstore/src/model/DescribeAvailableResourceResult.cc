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
		if(!valueAvailableZonesAvailableZone["Status"].isNull())
			availableZonesObject.status = valueAvailableZonesAvailableZone["Status"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneName"].isNull())
			availableZonesObject.zoneName = valueAvailableZonesAvailableZone["ZoneName"].asString();
		if(!valueAvailableZonesAvailableZone["NetworkTypes"].isNull())
			availableZonesObject.networkTypes = valueAvailableZonesAvailableZone["NetworkTypes"].asString();
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		if(!valueAvailableZonesAvailableZone["IsMainSale"].isNull())
			availableZonesObject.isMainSale = valueAvailableZonesAvailableZone["IsMainSale"].asString() == "true";
		auto allSupportedEnginesNode = valueAvailableZonesAvailableZone["SupportedEngines"]["SupportedEngine"];
		for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["Engine"].asString();
			auto allSupportedEditionTypesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngine["SupportedEditionTypes"]["SupportedEditionType"];
			for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType : allSupportedEditionTypesNode)
			{
				AvailableZone::SupportedEngine::SupportedEditionType supportedEditionTypesObject;
				if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType["EditionType"].isNull())
					supportedEditionTypesObject.editionType = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType["EditionType"].asString();
				auto allSupportedSeriesTypesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType["SupportedSeriesTypes"]["SupportedSeriesType"];
				for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType : allSupportedSeriesTypesNode)
				{
					AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType supportedSeriesTypesObject;
					if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType["SeriesType"].isNull())
						supportedSeriesTypesObject.seriesType = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType["SeriesType"].asString();
					auto allSupportedEngineVersionsNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType["SupportedEngineVersions"]["SupportedEngineVersion"];
					for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
					{
						AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion supportedEngineVersionsObject;
						if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
							supportedEngineVersionsObject.version = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
						auto allSupportedArchitectureTypesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion["SupportedArchitectureTypes"]["SupportedArchitectureType"];
						for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType : allSupportedArchitectureTypesNode)
						{
							AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType supportedArchitectureTypesObject;
							if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType["Architecture"].isNull())
								supportedArchitectureTypesObject.architecture = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType["Architecture"].asString();
							auto allSupportedShardNumbersNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType["SupportedShardNumbers"]["SupportedShardNumber"];
							for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber : allSupportedShardNumbersNode)
							{
								AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber supportedShardNumbersObject;
								if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber["ShardNumber"].isNull())
									supportedShardNumbersObject.shardNumber = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber["ShardNumber"].asString();
								auto allSupportedNodeTypesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber["SupportedNodeTypes"]["SupportedNodeType"];
								for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType : allSupportedNodeTypesNode)
								{
									AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber::SupportedNodeType supportedNodeTypesObject;
									if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType["SupportedNodeType"].isNull())
										supportedNodeTypesObject.supportedNodeType = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType["SupportedNodeType"].asString();
									auto allAvailableResourcesNode = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType["AvailableResources"]["AvailableResource"];
									for (auto valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource : allAvailableResourcesNode)
									{
										AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber::SupportedNodeType::AvailableResource availableResourcesObject;
										if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClassRemark"].isNull())
											availableResourcesObject.instanceClassRemark = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClassRemark"].asString();
										if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["Capacity"].isNull())
											availableResourcesObject.capacity = std::stol(valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["Capacity"].asString());
										if(!valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClass"].isNull())
											availableResourcesObject.instanceClass = valueAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClass"].asString();
										supportedNodeTypesObject.availableResources.push_back(availableResourcesObject);
									}
									supportedShardNumbersObject.supportedNodeTypes.push_back(supportedNodeTypesObject);
								}
								supportedArchitectureTypesObject.supportedShardNumbers.push_back(supportedShardNumbersObject);
							}
							supportedEngineVersionsObject.supportedArchitectureTypes.push_back(supportedArchitectureTypesObject);
						}
						supportedSeriesTypesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
					}
					supportedEditionTypesObject.supportedSeriesTypes.push_back(supportedSeriesTypesObject);
				}
				supportedEnginesObject.supportedEditionTypes.push_back(supportedEditionTypesObject);
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

