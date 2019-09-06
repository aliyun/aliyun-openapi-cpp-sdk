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

#include <alibabacloud/ecs/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotsResult::DescribeSnapshotsResult() :
	ServiceResult()
{}

DescribeSnapshotsResult::DescribeSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotsResult::~DescribeSnapshotsResult()
{}

void DescribeSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshots = value["Snapshots"]["Snapshot"];
	for (auto value : allSnapshots)
	{
		Snapshot snapshotsObject;
		if(!value["SnapshotId"].isNull())
			snapshotsObject.snapshotId = value["SnapshotId"].asString();
		if(!value["SnapshotName"].isNull())
			snapshotsObject.snapshotName = value["SnapshotName"].asString();
		if(!value["Progress"].isNull())
			snapshotsObject.progress = value["Progress"].asString();
		if(!value["ProductCode"].isNull())
			snapshotsObject.productCode = value["ProductCode"].asString();
		if(!value["SourceDiskId"].isNull())
			snapshotsObject.sourceDiskId = value["SourceDiskId"].asString();
		if(!value["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = value["SourceDiskType"].asString();
		if(!value["RetentionDays"].isNull())
			snapshotsObject.retentionDays = std::stoi(value["RetentionDays"].asString());
		if(!value["Encrypted"].isNull())
			snapshotsObject.encrypted = value["Encrypted"].asString() == "true";
		if(!value["SourceDiskSize"].isNull())
			snapshotsObject.sourceDiskSize = value["SourceDiskSize"].asString();
		if(!value["Description"].isNull())
			snapshotsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			snapshotsObject.creationTime = value["CreationTime"].asString();
		if(!value["LastModifiedTime"].isNull())
			snapshotsObject.lastModifiedTime = value["LastModifiedTime"].asString();
		if(!value["Status"].isNull())
			snapshotsObject.status = value["Status"].asString();
		if(!value["Usage"].isNull())
			snapshotsObject.usage = value["Usage"].asString();
		if(!value["SourceStorageType"].isNull())
			snapshotsObject.sourceStorageType = value["SourceStorageType"].asString();
		if(!value["RemainTime"].isNull())
			snapshotsObject.remainTime = std::stoi(value["RemainTime"].asString());
		if(!value["ResourceGroupId"].isNull())
			snapshotsObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["KMSKeyId"].isNull())
			snapshotsObject.kMSKeyId = value["KMSKeyId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Snapshot::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			snapshotsObject.tags.push_back(tagsObject);
		}
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSnapshotsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSnapshotsResult::Snapshot> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

