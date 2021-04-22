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

#include <alibabacloud/ecs/model/DescribeDedicatedBlockStorageClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDedicatedBlockStorageClustersResult::DescribeDedicatedBlockStorageClustersResult() :
	ServiceResult()
{}

DescribeDedicatedBlockStorageClustersResult::DescribeDedicatedBlockStorageClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedBlockStorageClustersResult::~DescribeDedicatedBlockStorageClustersResult()
{}

void DescribeDedicatedBlockStorageClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedBlockStorageClustersNode = value["DedicatedBlockStorageClusters"]["DedicatedBlockStorageCluster"];
	for (auto valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster : allDedicatedBlockStorageClustersNode)
	{
		DedicatedBlockStorageCluster dedicatedBlockStorageClustersObject;
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["DedicatedBlockStorageClusterId"].isNull())
			dedicatedBlockStorageClustersObject.dedicatedBlockStorageClusterId = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["DedicatedBlockStorageClusterId"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["DedicatedBlockStorageClusterName"].isNull())
			dedicatedBlockStorageClustersObject.dedicatedBlockStorageClusterName = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["DedicatedBlockStorageClusterName"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Description"].isNull())
			dedicatedBlockStorageClustersObject.description = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Description"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["ZoneId"].isNull())
			dedicatedBlockStorageClustersObject.zoneId = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["ZoneId"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Status"].isNull())
			dedicatedBlockStorageClustersObject.status = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Status"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Category"].isNull())
			dedicatedBlockStorageClustersObject.category = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["Category"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["PerformanceLevel"].isNull())
			dedicatedBlockStorageClustersObject.performanceLevel = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["PerformanceLevel"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["ExpiredTime"].isNull())
			dedicatedBlockStorageClustersObject.expiredTime = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["ExpiredTime"].asString();
		if(!valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["CreateTime"].isNull())
			dedicatedBlockStorageClustersObject.createTime = valueDedicatedBlockStorageClustersDedicatedBlockStorageCluster["CreateTime"].asString();
		auto dedicatedBlockStorageClusterCapacityNode = value["DedicatedBlockStorageClusterCapacity"];
		if(!dedicatedBlockStorageClusterCapacityNode["AvailableCapacity"].isNull())
			dedicatedBlockStorageClustersObject.dedicatedBlockStorageClusterCapacity.availableCapacity = std::stol(dedicatedBlockStorageClusterCapacityNode["AvailableCapacity"].asString());
		if(!dedicatedBlockStorageClusterCapacityNode["TotalCapacity"].isNull())
			dedicatedBlockStorageClustersObject.dedicatedBlockStorageClusterCapacity.totalCapacity = std::stol(dedicatedBlockStorageClusterCapacityNode["TotalCapacity"].asString());
		dedicatedBlockStorageClusters_.push_back(dedicatedBlockStorageClustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeDedicatedBlockStorageClustersResult::DedicatedBlockStorageCluster> DescribeDedicatedBlockStorageClustersResult::getDedicatedBlockStorageClusters()const
{
	return dedicatedBlockStorageClusters_;
}

std::string DescribeDedicatedBlockStorageClustersResult::getNextToken()const
{
	return nextToken_;
}

