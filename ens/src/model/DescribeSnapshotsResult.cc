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

#include <alibabacloud/ens/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
	auto allSnapshotsNode = value["Snapshots"]["SnapshotsItem"];
	for (auto valueSnapshotsSnapshotsItem : allSnapshotsNode)
	{
		SnapshotsItem snapshotsObject;
		if(!valueSnapshotsSnapshotsItem["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshotsItem["SnapshotId"].asString();
		if(!valueSnapshotsSnapshotsItem["CreationTime"].isNull())
			snapshotsObject.creationTime = valueSnapshotsSnapshotsItem["CreationTime"].asString();
		if(!valueSnapshotsSnapshotsItem["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshotsItem["Status"].asString();
		if(!valueSnapshotsSnapshotsItem["Size"].isNull())
			snapshotsObject.size = valueSnapshotsSnapshotsItem["Size"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceDiskId"].isNull())
			snapshotsObject.sourceDiskId = valueSnapshotsSnapshotsItem["SourceDiskId"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = valueSnapshotsSnapshotsItem["SourceDiskType"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceDiskCategory"].isNull())
			snapshotsObject.sourceDiskCategory = valueSnapshotsSnapshotsItem["SourceDiskCategory"].asString();
		if(!valueSnapshotsSnapshotsItem["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshotsItem["SnapshotName"].asString();
		if(!valueSnapshotsSnapshotsItem["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshotsItem["Description"].asString();
		if(!valueSnapshotsSnapshotsItem["EnsRegionId"].isNull())
			snapshotsObject.ensRegionId = valueSnapshotsSnapshotsItem["EnsRegionId"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceSnapshotId"].isNull())
			snapshotsObject.sourceSnapshotId = valueSnapshotsSnapshotsItem["SourceSnapshotId"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceEnsRegionId"].isNull())
			snapshotsObject.sourceEnsRegionId = valueSnapshotsSnapshotsItem["SourceEnsRegionId"].asString();
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

std::vector<DescribeSnapshotsResult::SnapshotsItem> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

