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

#include <alibabacloud/ecs/model/DescribeSnapshotGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotGroupsResult::DescribeSnapshotGroupsResult() :
	ServiceResult()
{}

DescribeSnapshotGroupsResult::DescribeSnapshotGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotGroupsResult::~DescribeSnapshotGroupsResult()
{}

void DescribeSnapshotGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotGroupsNode = value["SnapshotGroups"]["SnapshotGroup"];
	for (auto valueSnapshotGroupsSnapshotGroup : allSnapshotGroupsNode)
	{
		SnapshotGroup snapshotGroupsObject;
		if(!valueSnapshotGroupsSnapshotGroup["InstanceId"].isNull())
			snapshotGroupsObject.instanceId = valueSnapshotGroupsSnapshotGroup["InstanceId"].asString();
		if(!valueSnapshotGroupsSnapshotGroup["SnapshotGroupId"].isNull())
			snapshotGroupsObject.snapshotGroupId = valueSnapshotGroupsSnapshotGroup["SnapshotGroupId"].asString();
		if(!valueSnapshotGroupsSnapshotGroup["Status"].isNull())
			snapshotGroupsObject.status = valueSnapshotGroupsSnapshotGroup["Status"].asString();
		if(!valueSnapshotGroupsSnapshotGroup["Name"].isNull())
			snapshotGroupsObject.name = valueSnapshotGroupsSnapshotGroup["Name"].asString();
		if(!valueSnapshotGroupsSnapshotGroup["Description"].isNull())
			snapshotGroupsObject.description = valueSnapshotGroupsSnapshotGroup["Description"].asString();
		if(!valueSnapshotGroupsSnapshotGroup["CreationTime"].isNull())
			snapshotGroupsObject.creationTime = valueSnapshotGroupsSnapshotGroup["CreationTime"].asString();
		auto allSnapshotsNode = valueSnapshotGroupsSnapshotGroup["Snapshots"]["Snapshot"];
		for (auto valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot : allSnapshotsNode)
		{
			SnapshotGroup::Snapshot snapshotsObject;
			if(!valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SnapshotId"].isNull())
				snapshotsObject.snapshotId = valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SnapshotId"].asString();
			if(!valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["Progress"].isNull())
				snapshotsObject.progress = valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["Progress"].asString();
			if(!valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SourceDiskId"].isNull())
				snapshotsObject.sourceDiskId = valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SourceDiskId"].asString();
			if(!valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SourceDiskType"].isNull())
				snapshotsObject.sourceDiskType = valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["SourceDiskType"].asString();
			if(!valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["InstantAccess"].isNull())
				snapshotsObject.instantAccess = valueSnapshotGroupsSnapshotGroupSnapshotsSnapshot["InstantAccess"].asString() == "true";
			snapshotGroupsObject.snapshots.push_back(snapshotsObject);
		}
		snapshotGroups_.push_back(snapshotGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeSnapshotGroupsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeSnapshotGroupsResult::SnapshotGroup> DescribeSnapshotGroupsResult::getSnapshotGroups()const
{
	return snapshotGroups_;
}

