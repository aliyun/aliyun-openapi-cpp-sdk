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

#include <alibabacloud/dds/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	auto allSupportedDBTypesNode = value["SupportedDBTypes"]["SupportedDBType"];
	for (auto valueSupportedDBTypesSupportedDBType : allSupportedDBTypesNode)
	{
		SupportedDBType supportedDBTypesObject;
		if(!valueSupportedDBTypesSupportedDBType["DbType"].isNull())
			supportedDBTypesObject.dbType = valueSupportedDBTypesSupportedDBType["DbType"].asString();
		auto allAvailableZonesNode = valueSupportedDBTypesSupportedDBType["AvailableZones"]["AvailableZone"];
		for (auto valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone : allAvailableZonesNode)
		{
			SupportedDBType::AvailableZone availableZonesObject;
			if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone["ZoneId"].isNull())
				availableZonesObject.zoneId = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone["ZoneId"].asString();
			if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone["RegionId"].isNull())
				availableZonesObject.regionId = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone["RegionId"].asString();
			auto allSupportedEngineVersionsNode = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone["SupportedEngineVersions"]["SupportedEngineVersion"];
			for (auto valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion : allSupportedEngineVersionsNode)
			{
				SupportedDBType::AvailableZone::SupportedEngineVersion supportedEngineVersionsObject;
				if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion["Version"].isNull())
					supportedEngineVersionsObject.version = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion["Version"].asString();
				auto allSupportedEnginesNode = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion["SupportedEngines"]["SupportedEngine"];
				for (auto valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine : allSupportedEnginesNode)
				{
					SupportedDBType::AvailableZone::SupportedEngineVersion::SupportedEngine supportedEnginesObject;
					if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine["Engine"].isNull())
						supportedEnginesObject.engine = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine["Engine"].asString();
					auto allSupportedNodeTypesNode = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine["SupportedNodeTypes"]["SupportedNodeType"];
					for (auto valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType : allSupportedNodeTypesNode)
					{
						SupportedDBType::AvailableZone::SupportedEngineVersion::SupportedEngine::SupportedNodeType supportedNodeTypesObject;
						if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType["NodeType"].isNull())
							supportedNodeTypesObject.nodeType = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType["NodeType"].asString();
						if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType["NetworkTypes"].isNull())
							supportedNodeTypesObject.networkTypes = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType["NetworkTypes"].asString();
						auto allAvailableResourcesNode = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType["AvailableResources"]["AvailableResource"];
						for (auto valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource : allAvailableResourcesNode)
						{
							SupportedDBType::AvailableZone::SupportedEngineVersion::SupportedEngine::SupportedNodeType::AvailableResource availableResourcesObject;
							if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClassRemark"].isNull())
								availableResourcesObject.instanceClassRemark = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClassRemark"].asString();
							if(!valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClass"].isNull())
								availableResourcesObject.instanceClass = valueSupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource["InstanceClass"].asString();
							auto dBInstanceStorageRangeNode = value["DBInstanceStorageRange"];
							if(!dBInstanceStorageRangeNode["Min"].isNull())
								availableResourcesObject.dBInstanceStorageRange.min = std::stoi(dBInstanceStorageRangeNode["Min"].asString());
							if(!dBInstanceStorageRangeNode["Max"].isNull())
								availableResourcesObject.dBInstanceStorageRange.max = std::stoi(dBInstanceStorageRangeNode["Max"].asString());
							if(!dBInstanceStorageRangeNode["Step"].isNull())
								availableResourcesObject.dBInstanceStorageRange.step = std::stoi(dBInstanceStorageRangeNode["Step"].asString());
							supportedNodeTypesObject.availableResources.push_back(availableResourcesObject);
						}
						supportedEnginesObject.supportedNodeTypes.push_back(supportedNodeTypesObject);
					}
					supportedEngineVersionsObject.supportedEngines.push_back(supportedEnginesObject);
				}
				availableZonesObject.supportedEngineVersions.push_back(supportedEngineVersionsObject);
			}
			supportedDBTypesObject.availableZones.push_back(availableZonesObject);
		}
		supportedDBTypes_.push_back(supportedDBTypesObject);
	}

}

std::vector<DescribeAvailableResourceResult::SupportedDBType> DescribeAvailableResourceResult::getSupportedDBTypes()const
{
	return supportedDBTypes_;
}

