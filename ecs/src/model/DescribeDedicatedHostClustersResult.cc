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
		if(!valueDedicatedHostClustersDedicatedHostCluster["Description"].isNull())
			dedicatedHostClustersObject.description = valueDedicatedHostClustersDedicatedHostCluster["Description"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterId"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterId = valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["ResourceGroupId"].isNull())
			dedicatedHostClustersObject.resourceGroupId = valueDedicatedHostClustersDedicatedHostCluster["ResourceGroupId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["ZoneId"].isNull())
			dedicatedHostClustersObject.zoneId = valueDedicatedHostClustersDedicatedHostCluster["ZoneId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["RegionId"].isNull())
			dedicatedHostClustersObject.regionId = valueDedicatedHostClustersDedicatedHostCluster["RegionId"].asString();
		if(!valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterName"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterName = valueDedicatedHostClustersDedicatedHostCluster["DedicatedHostClusterName"].asString();
		auto allTagsNode = valueDedicatedHostClustersDedicatedHostCluster["Tags"]["Tag"];
		for (auto valueDedicatedHostClustersDedicatedHostClusterTagsTag : allTagsNode)
		{
			DedicatedHostCluster::Tag tagsObject;
			if(!valueDedicatedHostClustersDedicatedHostClusterTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueDedicatedHostClustersDedicatedHostClusterTagsTag["TagValue"].asString();
			if(!valueDedicatedHostClustersDedicatedHostClusterTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueDedicatedHostClustersDedicatedHostClusterTagsTag["TagKey"].asString();
			dedicatedHostClustersObject.tags.push_back(tagsObject);
		}
		auto dedicatedHostClusterCapacityNode = value["DedicatedHostClusterCapacity"];
		if(!dedicatedHostClusterCapacityNode["AvailableVcpus"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.availableVcpus = std::stoi(dedicatedHostClusterCapacityNode["AvailableVcpus"].asString());
		if(!dedicatedHostClusterCapacityNode["AvailableMemory"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.availableMemory = std::stoi(dedicatedHostClusterCapacityNode["AvailableMemory"].asString());
		if(!dedicatedHostClusterCapacityNode["TotalMemory"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.totalMemory = std::stoi(dedicatedHostClusterCapacityNode["TotalMemory"].asString());
		if(!dedicatedHostClusterCapacityNode["TotalVcpus"].isNull())
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.totalVcpus = std::stoi(dedicatedHostClusterCapacityNode["TotalVcpus"].asString());
		auto allLocalStorageCapacitiesNode = dedicatedHostClusterCapacityNode["LocalStorageCapacities"]["LocalStorageCapacity"];
		for (auto dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity : allLocalStorageCapacitiesNode)
		{
			DedicatedHostCluster::DedicatedHostClusterCapacity::LocalStorageCapacity localStorageCapacityObject;
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["DataDiskCategory"].isNull())
				localStorageCapacityObject.dataDiskCategory = dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["DataDiskCategory"].asString();
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["AvailableDisk"].isNull())
				localStorageCapacityObject.availableDisk = std::stoi(dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["AvailableDisk"].asString());
			if(!dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["TotalDisk"].isNull())
				localStorageCapacityObject.totalDisk = std::stoi(dedicatedHostClusterCapacityNodeLocalStorageCapacitiesLocalStorageCapacity["TotalDisk"].asString());
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.localStorageCapacities.push_back(localStorageCapacityObject);
		}
		auto allAvailableInstanceTypesNode = dedicatedHostClusterCapacityNode["AvailableInstanceTypes"]["AvailableInstanceType"];
		for (auto dedicatedHostClusterCapacityNodeAvailableInstanceTypesAvailableInstanceType : allAvailableInstanceTypesNode)
		{
			DedicatedHostCluster::DedicatedHostClusterCapacity::AvailableInstanceType availableInstanceTypeObject;
			if(!dedicatedHostClusterCapacityNodeAvailableInstanceTypesAvailableInstanceType["InstanceType"].isNull())
				availableInstanceTypeObject.instanceType = dedicatedHostClusterCapacityNodeAvailableInstanceTypesAvailableInstanceType["InstanceType"].asString();
			if(!dedicatedHostClusterCapacityNodeAvailableInstanceTypesAvailableInstanceType["AvailableInstanceCapacity"].isNull())
				availableInstanceTypeObject.availableInstanceCapacity = std::stoi(dedicatedHostClusterCapacityNodeAvailableInstanceTypesAvailableInstanceType["AvailableInstanceCapacity"].asString());
			dedicatedHostClustersObject.dedicatedHostClusterCapacity.availableInstanceTypes.push_back(availableInstanceTypeObject);
		}
		auto allDedicatedHostIds = value["DedicatedHostIds"]["DedicatedHostId"];
		for (auto value : allDedicatedHostIds)
			dedicatedHostClustersObject.dedicatedHostIds.push_back(value.asString());
		dedicatedHostClusters_.push_back(dedicatedHostClustersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

