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

#include <alibabacloud/rds/model/DescribeRCSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCSnapshotsResult::DescribeRCSnapshotsResult() :
	ServiceResult()
{}

DescribeRCSnapshotsResult::DescribeRCSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCSnapshotsResult::~DescribeRCSnapshotsResult()
{}

void DescribeRCSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotsNode = value["Snapshots"]["Snapshot"];
	for (auto valueSnapshotsSnapshot : allSnapshotsNode)
	{
		Snapshot snapshotsObject;
		if(!valueSnapshotsSnapshot["Available"].isNull())
			snapshotsObject.available = valueSnapshotsSnapshot["Available"].asString() == "true";
		if(!valueSnapshotsSnapshot["Category"].isNull())
			snapshotsObject.category = valueSnapshotsSnapshot["Category"].asString();
		if(!valueSnapshotsSnapshot["CreationTime"].isNull())
			snapshotsObject.creationTime = valueSnapshotsSnapshot["CreationTime"].asString();
		if(!valueSnapshotsSnapshot["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshot["Description"].asString();
		if(!valueSnapshotsSnapshot["Encrypted"].isNull())
			snapshotsObject.encrypted = valueSnapshotsSnapshot["Encrypted"].asString() == "true";
		if(!valueSnapshotsSnapshot["InstantAccess"].isNull())
			snapshotsObject.instantAccess = valueSnapshotsSnapshot["InstantAccess"].asString() == "true";
		if(!valueSnapshotsSnapshot["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshot["Progress"].asString();
		if(!valueSnapshotsSnapshot["RegionId"].isNull())
			snapshotsObject.regionId = valueSnapshotsSnapshot["RegionId"].asString();
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsSnapshot["SnapshotType"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskId"].isNull())
			snapshotsObject.sourceDiskId = valueSnapshotsSnapshot["SourceDiskId"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskSize"].isNull())
			snapshotsObject.sourceDiskSize = std::stol(valueSnapshotsSnapshot["SourceDiskSize"].asString());
		if(!valueSnapshotsSnapshot["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = valueSnapshotsSnapshot["SourceDiskType"].asString();
		if(!valueSnapshotsSnapshot["SourceStorageType"].isNull())
			snapshotsObject.sourceStorageType = valueSnapshotsSnapshot["SourceStorageType"].asString();
		if(!valueSnapshotsSnapshot["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshot["Status"].asString();
		if(!valueSnapshotsSnapshot["Usage"].isNull())
			snapshotsObject.usage = valueSnapshotsSnapshot["Usage"].asString();
		if(!valueSnapshotsSnapshot["ResourceGroupId"].isNull())
			snapshotsObject.resourceGroupId = valueSnapshotsSnapshot["ResourceGroupId"].asString();
		auto allTagNode = valueSnapshotsSnapshot["Tag"]["tagItem"];
		for (auto valueSnapshotsSnapshotTagtagItem : allTagNode)
		{
			Snapshot::TagItem tagObject;
			if(!valueSnapshotsSnapshotTagtagItem["TagKey"].isNull())
				tagObject.tagKey = valueSnapshotsSnapshotTagtagItem["TagKey"].asString();
			if(!valueSnapshotsSnapshotTagtagItem["TagValue"].isNull())
				tagObject.tagValue = valueSnapshotsSnapshotTagtagItem["TagValue"].asString();
			snapshotsObject.tag.push_back(tagObject);
		}
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeRCSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeRCSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRCSnapshotsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRCSnapshotsResult::Snapshot> DescribeRCSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

