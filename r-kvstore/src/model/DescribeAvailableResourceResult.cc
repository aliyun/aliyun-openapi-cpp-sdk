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
		if(!valueAvailableZonesAvailableZone["RegionId"].isNull())
			availableZonesObject.regionId = valueAvailableZonesAvailableZone["RegionId"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneId"].isNull())
			availableZonesObject.zoneId = valueAvailableZonesAvailableZone["ZoneId"].asString();
		if(!valueAvailableZonesAvailableZone["Status"].isNull())
			availableZonesObject.status = valueAvailableZonesAvailableZone["Status"].asString();
		if(!valueAvailableZonesAvailableZone["NetworkTypes"].isNull())
			availableZonesObject.networkTypes = valueAvailableZonesAvailableZone["NetworkTypes"].asString();
		if(!valueAvailableZonesAvailableZone["ZoneName"].isNull())
			availableZonesObject.zoneName = valueAvailableZonesAvailableZone["ZoneName"].asString();
		auto allSupportedEnginesNode = allAvailableZonesNode["SupportedEngines"]["SupportedEngine"];
		for (auto allAvailableZonesNodeSupportedEnginesSupportedEngine : allSupportedEnginesNode)
		{
			AvailableZone::SupportedEngine supportedEnginesObject;
			if(!allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].isNull())
				supportedEnginesObject.engine = allAvailableZonesNodeSupportedEnginesSupportedEngine["Engine"].asString();
			auto allSupportedEditionTypesNode = allSupportedEnginesNode["SupportedEditionTypes"]["SupportedEditionType"];
			for (auto allSupportedEnginesNodeSupportedEditionTypesSupportedEditionType : allSupportedEditionTypesNode)
			{
				AvailableZone::SupportedEngine::SupportedEditionType supportedEditionTypesObject;
				if(!allSupportedEnginesNodeSupportedEditionTypesSupportedEditionType["EditionType"].isNull())
					supportedEditionTypesObject.editionType = allSupportedEnginesNodeSupportedEditionTypesSupportedEditionType["EditionType"].asString();
				auto allSupportedSeriesTypesNode = allSupportedEditionTypesNode["SupportedSeriesTypes"]["SupportedSeriesType"];
				for (auto allSupportedEditionTypesNodeSupportedSeriesTypesSupportedSeriesType : allSupportedSeriesTypesNode)
				{
					AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType supportedSeriesTypesObject;
					if(!allSupportedEditionTypesNodeSupportedSeriesTypesSupportedSeriesType["SeriesType"].isNull())
						supportedSeriesTypesObject.seriesType = allSupportedEditionTypesNodeSupportedSeriesTypesSupportedSeriesType["SeriesType"].asString();
					auto allSupportedEngineVersionsNode = allSupportedSeriesTypesNode["SupportedEngineVersions"]["SupportedEngineVersion"];
					for (auto allSupportedSeriesTypesNodeSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
					{
						AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion supportedEngineVersionsObject;
						if(!allSupportedSeriesTypesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
							supportedEngineVersionsObject.version = allSupportedSeriesTypesNodeSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
						auto allSupportedArchitectureTypesNode = allSupportedEngineVersionsNode["SupportedArchitectureTypes"]["SupportedArchitectureType"];
						for (auto allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType : allSupportedArchitectureTypesNode)
						{
							AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType supportedArchitectureTypesObject;
							if(!allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType["Architecture"].isNull())
								supportedArchitectureTypesObject.architecture = allSupportedEngineVersionsNodeSupportedArchitectureTypesSupportedArchitectureType["Architecture"].asString();
							auto allSupportedShardNumbersNode = allSupportedArchitectureTypesNode["SupportedShardNumbers"]["SupportedShardNumber"];
							for (auto allSupportedArchitectureTypesNodeSupportedShardNumbersSupportedShardNumber : allSupportedShardNumbersNode)
							{
								AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber supportedShardNumbersObject;
								if(!allSupportedArchitectureTypesNodeSupportedShardNumbersSupportedShardNumber["ShardNumber"].isNull())
									supportedShardNumbersObject.shardNumber = allSupportedArchitectureTypesNodeSupportedShardNumbersSupportedShardNumber["ShardNumber"].asString();
								auto allSupportedNodeTypesNode = allSupportedShardNumbersNode["SupportedNodeTypes"]["SupportedNodeType"];
								for (auto allSupportedShardNumbersNodeSupportedNodeTypesSupportedNodeType : allSupportedNodeTypesNode)
								{
									AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber::SupportedNodeType supportedNodeTypesObject;
									if(!allSupportedShardNumbersNodeSupportedNodeTypesSupportedNodeType["SupportedNodeType"].isNull())
										supportedNodeTypesObject.supportedNodeType = allSupportedShardNumbersNodeSupportedNodeTypesSupportedNodeType["SupportedNodeType"].asString();
									auto allAvailableResourcesNode = allSupportedNodeTypesNode["AvailableResources"]["AvailableResource"];
									for (auto allSupportedNodeTypesNodeAvailableResourcesAvailableResource : allAvailableResourcesNode)
									{
										AvailableZone::SupportedEngine::SupportedEditionType::SupportedSeriesType::SupportedEngineVersion::SupportedArchitectureType::SupportedShardNumber::SupportedNodeType::AvailableResource availableResourcesObject;
										if(!allSupportedNodeTypesNodeAvailableResourcesAvailableResource["InstanceClass"].isNull())
											availableResourcesObject.instanceClass = allSupportedNodeTypesNodeAvailableResourcesAvailableResource["InstanceClass"].asString();
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

