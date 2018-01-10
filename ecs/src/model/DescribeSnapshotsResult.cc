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
		Snapshot snapshotObject;
		snapshotObject.snapshotId = value["SnapshotId"].asString();
		snapshotObject.snapshotName = value["SnapshotName"].asString();
		snapshotObject.progress = value["Progress"].asString();
		snapshotObject.productCode = value["ProductCode"].asString();
		snapshotObject.sourceDiskId = value["SourceDiskId"].asString();
		snapshotObject.sourceDiskType = value["SourceDiskType"].asString();
		snapshotObject.retentionDays = std::stoi(value["RetentionDays"].asString());
		snapshotObject.encrypted = std::stoi(value["Encrypted"].asString());
		snapshotObject.sourceDiskSize = value["SourceDiskSize"].asString();
		snapshotObject.description = value["Description"].asString();
		snapshotObject.creationTime = value["CreationTime"].asString();
		snapshotObject.status = value["Status"].asString();
		snapshotObject.usage = value["Usage"].asString();
		snapshotObject.sourceStorageType = value["SourceStorageType"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Snapshot::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			snapshotObject.tags.push_back(tagObject);
		}
		snapshots_.push_back(snapshotObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeSnapshotsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeSnapshotsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

