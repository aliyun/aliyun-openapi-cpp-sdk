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

#include <alibabacloud/ecs/model/DescribeStorageSetDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeStorageSetDetailsResult::DescribeStorageSetDetailsResult() :
	ServiceResult()
{}

DescribeStorageSetDetailsResult::DescribeStorageSetDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageSetDetailsResult::~DescribeStorageSetDetailsResult()
{}

void DescribeStorageSetDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDisks = value["Disks"]["Disk"];
	for (auto value : allDisks)
	{
		Disk disksObject;
		if(!value["DiskId"].isNull())
			disksObject.diskId = value["DiskId"].asString();
		if(!value["DiskName"].isNull())
			disksObject.diskName = value["DiskName"].asString();
		if(!value["Category"].isNull())
			disksObject.category = value["Category"].asString();
		if(!value["StorageSetId"].isNull())
			disksObject.storageSetId = value["StorageSetId"].asString();
		if(!value["CreationTime"].isNull())
			disksObject.creationTime = value["CreationTime"].asString();
		if(!value["StorageSetPartitionNumber"].isNull())
			disksObject.storageSetPartitionNumber = std::stoi(value["StorageSetPartitionNumber"].asString());
		if(!value["RegionId"].isNull())
			disksObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			disksObject.zoneId = value["ZoneId"].asString();
		disks_.push_back(disksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeStorageSetDetailsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeStorageSetDetailsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStorageSetDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStorageSetDetailsResult::Disk> DescribeStorageSetDetailsResult::getDisks()const
{
	return disks_;
}

