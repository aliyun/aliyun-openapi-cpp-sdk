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
	auto allSnapshotsNode = value["Snapshots"]["Snapshot"];
	for (auto valueSnapshotsSnapshot : allSnapshotsNode)
	{
		Snapshot snapshotsObject;
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["SnapshotSN"].isNull())
			snapshotsObject.snapshotSN = valueSnapshotsSnapshot["SnapshotSN"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshot["Progress"].asString();
		if(!valueSnapshotsSnapshot["ProductCode"].isNull())
			snapshotsObject.productCode = valueSnapshotsSnapshot["ProductCode"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskId"].isNull())
			snapshotsObject.sourceDiskId = valueSnapshotsSnapshot["SourceDiskId"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = valueSnapshotsSnapshot["SourceDiskType"].asString();
		if(!valueSnapshotsSnapshot["RetentionDays"].isNull())
			snapshotsObject.retentionDays = std::stoi(valueSnapshotsSnapshot["RetentionDays"].asString());
		if(!valueSnapshotsSnapshot["Encrypted"].isNull())
			snapshotsObject.encrypted = valueSnapshotsSnapshot["Encrypted"].asString() == "true";
		if(!valueSnapshotsSnapshot["SourceDiskSize"].isNull())
			snapshotsObject.sourceDiskSize = valueSnapshotsSnapshot["SourceDiskSize"].asString();
		if(!valueSnapshotsSnapshot["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshot["Description"].asString();
		if(!valueSnapshotsSnapshot["CreationTime"].isNull())
			snapshotsObject.creationTime = valueSnapshotsSnapshot["CreationTime"].asString();
		if(!valueSnapshotsSnapshot["LastModifiedTime"].isNull())
			snapshotsObject.lastModifiedTime = valueSnapshotsSnapshot["LastModifiedTime"].asString();
		if(!valueSnapshotsSnapshot["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshot["Status"].asString();
		if(!valueSnapshotsSnapshot["Usage"].isNull())
			snapshotsObject.usage = valueSnapshotsSnapshot["Usage"].asString();
		if(!valueSnapshotsSnapshot["SourceStorageType"].isNull())
			snapshotsObject.sourceStorageType = valueSnapshotsSnapshot["SourceStorageType"].asString();
		if(!valueSnapshotsSnapshot["RemainTime"].isNull())
			snapshotsObject.remainTime = std::stoi(valueSnapshotsSnapshot["RemainTime"].asString());
		if(!valueSnapshotsSnapshot["ResourceGroupId"].isNull())
			snapshotsObject.resourceGroupId = valueSnapshotsSnapshot["ResourceGroupId"].asString();
		if(!valueSnapshotsSnapshot["KMSKeyId"].isNull())
			snapshotsObject.kMSKeyId = valueSnapshotsSnapshot["KMSKeyId"].asString();
		if(!valueSnapshotsSnapshot["Category"].isNull())
			snapshotsObject.category = valueSnapshotsSnapshot["Category"].asString();
		auto allTagsNode = allSnapshotsNode["Tags"]["Tag"];
		for (auto allSnapshotsNodeTagsTag : allTagsNode)
		{
			Snapshot::Tag tagsObject;
			if(!allSnapshotsNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allSnapshotsNodeTagsTag["TagKey"].asString();
			if(!allSnapshotsNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allSnapshotsNodeTagsTag["TagValue"].asString();
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

