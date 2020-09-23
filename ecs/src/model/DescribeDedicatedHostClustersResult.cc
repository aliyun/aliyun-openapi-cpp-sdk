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

#include <alibabacloud/ecs/model/DescribeDedicatedHostClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDedicatedHostClustersResult::DescribeDedicatedHostClustersResult() :
	ServiceResult()
{}

DescribeDedicatedHostClustersResult::DescribeDedicatedHostClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostClustersResult::~DescribeDedicatedHostClustersResult()
{}

void DescribeDedicatedHostClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedHostClustersNode = value["DedicatedHostClusters"]["DedicatedHostCluster"];
	for (auto valueDedicatedHostClustersDedicatedHostCluster : allDedicatedHostClustersNode)
	{
		DedicatedHostCluster dedicatedHostClustersObject;
		if(!valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterId"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterId = valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["RegionId"].isNull())
			dedicatedHostClustersObject.regionId = valueDedicatedHostClustersDedicatedHostCluster["RegionId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["ZoneId"].isNull())
			dedicatedHostClustersObject.zoneId = valueDedicatedHostClustersDedicatedHostCluster["ZoneId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterName"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterName = valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterName"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["Description"].isNull())
			dedicatedHostClustersObject.description = valueDedicatedHostClustersDedicatedHostCluster["Description"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["ResourceGroupId"].isNull())
			dedicatedHostClustersObject.resourceGroupId = valueDedicatedHostClustersDedicatedHostCluster["ResourceGroupId"].asString();
		auto allTagsNode = allDedicatedHostClustersNode["Tags"]["Tag"];
		for (auto allDedicatedHostClustersNodeTagsTag : allTagsNode)
		{
			DedicatedHostCluster::Tag tagsObject;
			if(!allDedicatedHostClustersNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allDedicatedHostClustersNodeTagsTag["TagKey"].asString();
			if(!allDedicatedHostClustersNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allDedicatedHostClustersNodeTagsTag["TagValue"].asString();
			dedicatedHostClustersObject.tags.push_back(tagsObject);
		}
		auto dedicatedHostClusterCapacityNode = value["DedicatedHostClusterCapacity"];
		if(!dedicatedHostClusterCapacityNode["TotalVcpus"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.totalVcpus = std::stoi(dedicatedHostClusterCapacityNode["TotalVcpus"].asString());
		if(!dedicatedHostClusterCapacityNode["AvailableVcpus"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.availableVcpus = std::stoi(dedicatedHostClusterCapacityNode["AvailableVcpus"].asString());
		if(!dedicatedHostClusterCapacityNode["TotalMemory"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.totalMemory = std::stoi(dedicatedHostClusterCapacityNode["TotalMemory"].asString());
		if(!dedicatedHostClusterCapacityNode["AvailableMemory"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.availableMemory = std::stoi(dedicatedHostClusterCapacityNode["AvailableMemory"].asString());
		auto allLocalStorageCapacitiesNode = dedicatedHostClusterCapacityNode["LocalStorageCapacities"]["LocalStorageCapacity"];
		for (auto dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity : allLocalStorageCapacitiesNode)
		{
			DedicatedHostCluster::DedicatedHostClusterCapacity::LocalStorageCapacity localStorageCapacityObject;
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["TotalDisk"].isNull())
				localStorageCapacityObject.totalDisk = std::stoi(dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["TotalDisk"].asString());
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["AvailableDisk"].isNull())
				localStorageCapacityObject.availableDisk = std::stoi(dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["AvailableDisk"].asString());
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["DataDiskCategory"].isNull())
				localStorageCapacityObject.dataDiskCategory = dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["DataDiskCategory"].asString();
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.localStorageCapacities.push_back(localStorageCapacityObject);
		}
		auto allDedicatedHostIds = value["DedicatedHostIds"]["DedicatedHostId"];
		for (auto value : allDedicatedHostIds)
			dedicatedHostClustersObject.dedicatedHostIds.push_back(value.asString());
		dedicatedHostClusters_.push_back(dedicatedHostClustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeDedicatedHostClustersResult::DedicatedHostCluster> DescribeDedicatedHostClustersResult::getDedicatedHostClusters()const
{
	return dedicatedHostClusters_;
}

int DescribeDedicatedHostClustersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDedicatedHostClustersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDedicatedHostClustersResult::getPageNumber()const
{
	return pageNumber_;
}

