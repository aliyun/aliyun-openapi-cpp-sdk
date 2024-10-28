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

#include <alibabacloud/nas/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

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
		if(!valueSnapshotsSnapshot["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshot["Status"].asString();
		if(!valueSnapshotsSnapshot["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshot["Progress"].asString();
		if(!valueSnapshotsSnapshot["CreateTime"].isNull())
			snapshotsObject.createTime = valueSnapshotsSnapshot["CreateTime"].asString();
		if(!valueSnapshotsSnapshot["SourceFileSystemId"].isNull())
			snapshotsObject.sourceFileSystemId = valueSnapshotsSnapshot["SourceFileSystemId"].asString();
		if(!valueSnapshotsSnapshot["RetentionDays"].isNull())
			snapshotsObject.retentionDays = std::stoi(valueSnapshotsSnapshot["RetentionDays"].asString());
		if(!valueSnapshotsSnapshot["RemainTime"].isNull())
			snapshotsObject.remainTime = std::stoi(valueSnapshotsSnapshot["RemainTime"].asString());
		if(!valueSnapshotsSnapshot["SourceFileSystemSize"].isNull())
			snapshotsObject.sourceFileSystemSize = std::stol(valueSnapshotsSnapshot["SourceFileSystemSize"].asString());
		if(!valueSnapshotsSnapshot["SourceFileSystemVersion"].isNull())
			snapshotsObject.sourceFileSystemVersion = valueSnapshotsSnapshot["SourceFileSystemVersion"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["EncryptType"].isNull())
			snapshotsObject.encryptType = std::stoi(valueSnapshotsSnapshot["EncryptType"].asString());
		if(!valueSnapshotsSnapshot["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshot["Description"].asString();
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["FileSystemType"].isNull())
			snapshotsObject.fileSystemType = valueSnapshotsSnapshot["FileSystemType"].asString();
		if(!valueSnapshotsSnapshot["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsSnapshot["SnapshotType"].asString();
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

