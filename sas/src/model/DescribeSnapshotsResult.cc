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

#include <alibabacloud/sas/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

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
	auto allSnapshotsNode = value["Snapshots"]["BackupSnapshots"];
	for (auto valueSnapshotsBackupSnapshots : allSnapshotsNode)
	{
		BackupSnapshots snapshotsObject;
		if(!valueSnapshotsBackupSnapshots["ContainerSnapshotId"].isNull())
			snapshotsObject.containerSnapshotId = valueSnapshotsBackupSnapshots["ContainerSnapshotId"].asString();
		if(!valueSnapshotsBackupSnapshots["Status"].isNull())
			snapshotsObject.status = valueSnapshotsBackupSnapshots["Status"].asString();
		if(!valueSnapshotsBackupSnapshots["SnapshotHash"].isNull())
			snapshotsObject.snapshotHash = valueSnapshotsBackupSnapshots["SnapshotHash"].asString();
		if(!valueSnapshotsBackupSnapshots["ErrorMessage"].isNull())
			snapshotsObject.errorMessage = valueSnapshotsBackupSnapshots["ErrorMessage"].asString();
		if(!valueSnapshotsBackupSnapshots["ActualItems"].isNull())
			snapshotsObject.actualItems = std::stol(valueSnapshotsBackupSnapshots["ActualItems"].asString());
		if(!valueSnapshotsBackupSnapshots["VaultId"].isNull())
			snapshotsObject.vaultId = valueSnapshotsBackupSnapshots["VaultId"].asString();
		if(!valueSnapshotsBackupSnapshots["ActualBytes"].isNull())
			snapshotsObject.actualBytes = std::stol(valueSnapshotsBackupSnapshots["ActualBytes"].asString());
		if(!valueSnapshotsBackupSnapshots["SourceType"].isNull())
			snapshotsObject.sourceType = valueSnapshotsBackupSnapshots["SourceType"].asString();
		if(!valueSnapshotsBackupSnapshots["ExitCode"].isNull())
			snapshotsObject.exitCode = valueSnapshotsBackupSnapshots["ExitCode"].asString();
		if(!valueSnapshotsBackupSnapshots["ClientId"].isNull())
			snapshotsObject.clientId = valueSnapshotsBackupSnapshots["ClientId"].asString();
		if(!valueSnapshotsBackupSnapshots["ItemsDone"].isNull())
			snapshotsObject.itemsDone = std::stol(valueSnapshotsBackupSnapshots["ItemsDone"].asString());
		if(!valueSnapshotsBackupSnapshots["BytesTotal"].isNull())
			snapshotsObject.bytesTotal = std::stol(valueSnapshotsBackupSnapshots["BytesTotal"].asString());
		if(!valueSnapshotsBackupSnapshots["Retention"].isNull())
			snapshotsObject.retention = std::stol(valueSnapshotsBackupSnapshots["Retention"].asString());
		if(!valueSnapshotsBackupSnapshots["ErrorType"].isNull())
			snapshotsObject.errorType = valueSnapshotsBackupSnapshots["ErrorType"].asString();
		if(!valueSnapshotsBackupSnapshots["CreatedTime"].isNull())
			snapshotsObject.createdTime = std::stol(valueSnapshotsBackupSnapshots["CreatedTime"].asString());
		if(!valueSnapshotsBackupSnapshots["ParentSnapshotHash"].isNull())
			snapshotsObject.parentSnapshotHash = valueSnapshotsBackupSnapshots["ParentSnapshotHash"].asString();
		if(!valueSnapshotsBackupSnapshots["InstanceId"].isNull())
			snapshotsObject.instanceId = valueSnapshotsBackupSnapshots["InstanceId"].asString();
		if(!valueSnapshotsBackupSnapshots["PlanId"].isNull())
			snapshotsObject.planId = valueSnapshotsBackupSnapshots["PlanId"].asString();
		if(!valueSnapshotsBackupSnapshots["Source"].isNull())
			snapshotsObject.source = valueSnapshotsBackupSnapshots["Source"].asString();
		if(!valueSnapshotsBackupSnapshots["RegionId"].isNull())
			snapshotsObject.regionId = valueSnapshotsBackupSnapshots["RegionId"].asString();
		if(!valueSnapshotsBackupSnapshots["ParentHash"].isNull())
			snapshotsObject.parentHash = valueSnapshotsBackupSnapshots["ParentHash"].asString();
		if(!valueSnapshotsBackupSnapshots["Uuid"].isNull())
			snapshotsObject.uuid = valueSnapshotsBackupSnapshots["Uuid"].asString();
		if(!valueSnapshotsBackupSnapshots["ErrorFile"].isNull())
			snapshotsObject.errorFile = valueSnapshotsBackupSnapshots["ErrorFile"].asString();
		if(!valueSnapshotsBackupSnapshots["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsBackupSnapshots["SnapshotType"].asString();
		if(!valueSnapshotsBackupSnapshots["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsBackupSnapshots["SnapshotName"].asString();
		if(!valueSnapshotsBackupSnapshots["SnapshotOption"].isNull())
			snapshotsObject.snapshotOption = valueSnapshotsBackupSnapshots["SnapshotOption"].asString();
		if(!valueSnapshotsBackupSnapshots["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsBackupSnapshots["SnapshotId"].asString();
		if(!valueSnapshotsBackupSnapshots["JobId"].isNull())
			snapshotsObject.jobId = valueSnapshotsBackupSnapshots["JobId"].asString();
		if(!valueSnapshotsBackupSnapshots["Size"].isNull())
			snapshotsObject.size = std::stol(valueSnapshotsBackupSnapshots["Size"].asString());
		if(!valueSnapshotsBackupSnapshots["Path"].isNull())
			snapshotsObject.path = valueSnapshotsBackupSnapshots["Path"].asString();
		if(!valueSnapshotsBackupSnapshots["ErrorCount"].isNull())
			snapshotsObject.errorCount = std::stol(valueSnapshotsBackupSnapshots["ErrorCount"].asString());
		if(!valueSnapshotsBackupSnapshots["Duration"].isNull())
			snapshotsObject.duration = std::stol(valueSnapshotsBackupSnapshots["Duration"].asString());
		if(!valueSnapshotsBackupSnapshots["ItemsTotal"].isNull())
			snapshotsObject.itemsTotal = std::stol(valueSnapshotsBackupSnapshots["ItemsTotal"].asString());
		if(!valueSnapshotsBackupSnapshots["BytesDone"].isNull())
			snapshotsObject.bytesDone = std::stol(valueSnapshotsBackupSnapshots["BytesDone"].asString());
		if(!valueSnapshotsBackupSnapshots["ClientVersion"].isNull())
			snapshotsObject.clientVersion = valueSnapshotsBackupSnapshots["ClientVersion"].asString();
		auto allPaths = value["Paths"]["StringItem"];
		for (auto value : allPaths)
			snapshotsObject.paths.push_back(value.asString());
		snapshots_.push_back(snapshotsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["NextToken"].isNull())
		pageInfo_.nextToken = pageInfoNode["NextToken"].asString();
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeSnapshotsResult::PageInfo DescribeSnapshotsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeSnapshotsResult::BackupSnapshots> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

