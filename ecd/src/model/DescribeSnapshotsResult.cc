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

#include <alibabacloud/ecd/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

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
		if(!valueSnapshotsSnapshot["CreationTime"].isNull())
			snapshotsObject.creationTime = valueSnapshotsSnapshot["CreationTime"].asString();
		if(!valueSnapshotsSnapshot["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshot["Status"].asString();
		if(!valueSnapshotsSnapshot["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsSnapshot["SnapshotType"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshot["Progress"].asString();
		if(!valueSnapshotsSnapshot["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshot["Description"].asString();
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["RemainTime"].isNull())
			snapshotsObject.remainTime = std::stoi(valueSnapshotsSnapshot["RemainTime"].asString());
		if(!valueSnapshotsSnapshot["SourceDiskSize"].isNull())
			snapshotsObject.sourceDiskSize = valueSnapshotsSnapshot["SourceDiskSize"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = valueSnapshotsSnapshot["SourceDiskType"].asString();
		if(!valueSnapshotsSnapshot["DesktopId"].isNull())
			snapshotsObject.desktopId = valueSnapshotsSnapshot["DesktopId"].asString();
		if(!valueSnapshotsSnapshot["DesktopName"].isNull())
			snapshotsObject.desktopName = valueSnapshotsSnapshot["DesktopName"].asString();
		if(!valueSnapshotsSnapshot["DesktopStatus"].isNull())
			snapshotsObject.desktopStatus = valueSnapshotsSnapshot["DesktopStatus"].asString();
		if(!valueSnapshotsSnapshot["Creator"].isNull())
			snapshotsObject.creator = valueSnapshotsSnapshot["Creator"].asString();
		if(!valueSnapshotsSnapshot["ProtocolType"].isNull())
			snapshotsObject.protocolType = valueSnapshotsSnapshot["ProtocolType"].asString();
		if(!valueSnapshotsSnapshot["VolumeEncryptionEnabled"].isNull())
			snapshotsObject.volumeEncryptionEnabled = valueSnapshotsSnapshot["VolumeEncryptionEnabled"].asString() == "true";
		if(!valueSnapshotsSnapshot["VolumeEncryptionKey"].isNull())
			snapshotsObject.volumeEncryptionKey = valueSnapshotsSnapshot["VolumeEncryptionKey"].asString();
		if(!valueSnapshotsSnapshot["DeletionTime"].isNull())
			snapshotsObject.deletionTime = valueSnapshotsSnapshot["DeletionTime"].asString();
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeSnapshotsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeSnapshotsResult::Snapshot> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

