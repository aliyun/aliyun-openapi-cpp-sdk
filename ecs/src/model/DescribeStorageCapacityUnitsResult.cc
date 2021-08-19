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

#include <alibabacloud/ecs/model/DescribeStorageCapacityUnitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeStorageCapacityUnitsResult::DescribeStorageCapacityUnitsResult() :
	ServiceResult()
{}

DescribeStorageCapacityUnitsResult::DescribeStorageCapacityUnitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageCapacityUnitsResult::~DescribeStorageCapacityUnitsResult()
{}

void DescribeStorageCapacityUnitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageCapacityUnitsNode = value["StorageCapacityUnits"]["StorageCapacityUnit"];
	for (auto valueStorageCapacityUnitsStorageCapacityUnit : allStorageCapacityUnitsNode)
	{
		StorageCapacityUnit storageCapacityUnitsObject;
		if(!valueStorageCapacityUnitsStorageCapacityUnit["CreationTime"].isNull())
			storageCapacityUnitsObject.creationTime = valueStorageCapacityUnitsStorageCapacityUnit["CreationTime"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["Status"].isNull())
			storageCapacityUnitsObject.status = valueStorageCapacityUnitsStorageCapacityUnit["Status"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["StartTime"].isNull())
			storageCapacityUnitsObject.startTime = valueStorageCapacityUnitsStorageCapacityUnit["StartTime"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["Capacity"].isNull())
			storageCapacityUnitsObject.capacity = std::stoi(valueStorageCapacityUnitsStorageCapacityUnit["Capacity"].asString());
		if(!valueStorageCapacityUnitsStorageCapacityUnit["Description"].isNull())
			storageCapacityUnitsObject.description = valueStorageCapacityUnitsStorageCapacityUnit["Description"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["AllocationStatus"].isNull())
			storageCapacityUnitsObject.allocationStatus = valueStorageCapacityUnitsStorageCapacityUnit["AllocationStatus"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["ExpiredTime"].isNull())
			storageCapacityUnitsObject.expiredTime = valueStorageCapacityUnitsStorageCapacityUnit["ExpiredTime"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["StorageCapacityUnitId"].isNull())
			storageCapacityUnitsObject.storageCapacityUnitId = valueStorageCapacityUnitsStorageCapacityUnit["StorageCapacityUnitId"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["Name"].isNull())
			storageCapacityUnitsObject.name = valueStorageCapacityUnitsStorageCapacityUnit["Name"].asString();
		if(!valueStorageCapacityUnitsStorageCapacityUnit["RegionId"].isNull())
			storageCapacityUnitsObject.regionId = valueStorageCapacityUnitsStorageCapacityUnit["RegionId"].asString();
		auto allTagsNode = valueStorageCapacityUnitsStorageCapacityUnit["Tags"]["Tag"];
		for (auto valueStorageCapacityUnitsStorageCapacityUnitTagsTag : allTagsNode)
		{
			StorageCapacityUnit::Tag tagsObject;
			if(!valueStorageCapacityUnitsStorageCapacityUnitTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueStorageCapacityUnitsStorageCapacityUnitTagsTag["TagValue"].asString();
			if(!valueStorageCapacityUnitsStorageCapacityUnitTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueStorageCapacityUnitsStorageCapacityUnitTagsTag["TagKey"].asString();
			storageCapacityUnitsObject.tags.push_back(tagsObject);
		}
		storageCapacityUnits_.push_back(storageCapacityUnitsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeStorageCapacityUnitsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeStorageCapacityUnitsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStorageCapacityUnitsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStorageCapacityUnitsResult::StorageCapacityUnit> DescribeStorageCapacityUnitsResult::getStorageCapacityUnits()const
{
	return storageCapacityUnits_;
}

