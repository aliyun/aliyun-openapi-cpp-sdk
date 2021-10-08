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
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["CreationTime"].isNull())
			disksObject.creationTime = valueDisksDisk["CreationTime"].asString();
		if(!valueDisksDisk["DiskName"].isNull())
			disksObject.diskName = valueDisksDisk["DiskName"].asString();
		if(!valueDisksDisk["ZoneId"].isNull())
			disksObject.zoneId = valueDisksDisk["ZoneId"].asString();
		if(!valueDisksDisk["StorageSetId"].isNull())
			disksObject.storageSetId = valueDisksDisk["StorageSetId"].asString();
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["Category"].isNull())
			disksObject.category = valueDisksDisk["Category"].asString();
		if(!valueDisksDisk["StorageSetPartitionNumber"].isNull())
			disksObject.storageSetPartitionNumber = std::stoi(valueDisksDisk["StorageSetPartitionNumber"].asString());
		if(!valueDisksDisk["RegionId"].isNull())
			disksObject.regionId = valueDisksDisk["RegionId"].asString();
		disks_.push_back(disksObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

