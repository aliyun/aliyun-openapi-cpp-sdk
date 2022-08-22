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

#include <alibabacloud/dbfs/model/ListSnapshotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListSnapshotResult::ListSnapshotResult() :
	ServiceResult()
{}

ListSnapshotResult::ListSnapshotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSnapshotResult::~ListSnapshotResult()
{}

void ListSnapshotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotsNode = value["Snapshots"]["SnapshotsItem"];
	for (auto valueSnapshotsSnapshotsItem : allSnapshotsNode)
	{
		SnapshotsItem snapshotsObject;
		if(!valueSnapshotsSnapshotsItem["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshotsItem["Status"].asString();
		if(!valueSnapshotsSnapshotsItem["CreationTime"].isNull())
			snapshotsObject.creationTime = valueSnapshotsSnapshotsItem["CreationTime"].asString();
		if(!valueSnapshotsSnapshotsItem["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshotsItem["Progress"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceFsSize"].isNull())
			snapshotsObject.sourceFsSize = std::stoi(valueSnapshotsSnapshotsItem["SourceFsSize"].asString());
		if(!valueSnapshotsSnapshotsItem["RetentionDays"].isNull())
			snapshotsObject.retentionDays = std::stoi(valueSnapshotsSnapshotsItem["RetentionDays"].asString());
		if(!valueSnapshotsSnapshotsItem["RemainTime"].isNull())
			snapshotsObject.remainTime = std::stoi(valueSnapshotsSnapshotsItem["RemainTime"].asString());
		if(!valueSnapshotsSnapshotsItem["LastModifiedTime"].isNull())
			snapshotsObject.lastModifiedTime = valueSnapshotsSnapshotsItem["LastModifiedTime"].asString();
		if(!valueSnapshotsSnapshotsItem["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsSnapshotsItem["SnapshotType"].asString();
		if(!valueSnapshotsSnapshotsItem["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshotsItem["SnapshotName"].asString();
		if(!valueSnapshotsSnapshotsItem["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshotsItem["Description"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceFsId"].isNull())
			snapshotsObject.sourceFsId = valueSnapshotsSnapshotsItem["SourceFsId"].asString();
		if(!valueSnapshotsSnapshotsItem["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshotsItem["SnapshotId"].asString();
		if(!valueSnapshotsSnapshotsItem["Category"].isNull())
			snapshotsObject.category = valueSnapshotsSnapshotsItem["Category"].asString();
		if(!valueSnapshotsSnapshotsItem["SourceFsStripeWidth"].isNull())
			snapshotsObject.sourceFsStripeWidth = std::stoi(valueSnapshotsSnapshotsItem["SourceFsStripeWidth"].asString());
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListSnapshotResult::getTotalCount()const
{
	return totalCount_;
}

int ListSnapshotResult::getPageSize()const
{
	return pageSize_;
}

int ListSnapshotResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListSnapshotResult::SnapshotsItem> ListSnapshotResult::getSnapshots()const
{
	return snapshots_;
}

