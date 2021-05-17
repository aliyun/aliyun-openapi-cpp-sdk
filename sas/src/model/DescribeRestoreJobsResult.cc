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

#include <alibabacloud/sas/model/DescribeRestoreJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRestoreJobsResult::DescribeRestoreJobsResult() :
	ServiceResult()
{}

DescribeRestoreJobsResult::DescribeRestoreJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreJobsResult::~DescribeRestoreJobsResult()
{}

void DescribeRestoreJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRestoreJobsNode = value["RestoreJobs"]["RestoreJob"];
	for (auto valueRestoreJobsRestoreJob : allRestoreJobsNode)
	{
		RestoreJob restoreJobsObject;
		if(!valueRestoreJobsRestoreJob["Id"].isNull())
			restoreJobsObject.id = std::stol(valueRestoreJobsRestoreJob["Id"].asString());
		if(!valueRestoreJobsRestoreJob["CreatedTime"].isNull())
			restoreJobsObject.createdTime = std::stol(valueRestoreJobsRestoreJob["CreatedTime"].asString());
		if(!valueRestoreJobsRestoreJob["UpdatedTime"].isNull())
			restoreJobsObject.updatedTime = std::stol(valueRestoreJobsRestoreJob["UpdatedTime"].asString());
		if(!valueRestoreJobsRestoreJob["Uuid"].isNull())
			restoreJobsObject.uuid = valueRestoreJobsRestoreJob["Uuid"].asString();
		if(!valueRestoreJobsRestoreJob["Message"].isNull())
			restoreJobsObject.message = valueRestoreJobsRestoreJob["Message"].asString();
		if(!valueRestoreJobsRestoreJob["RestoreId"].isNull())
			restoreJobsObject.restoreId = valueRestoreJobsRestoreJob["RestoreId"].asString();
		if(!valueRestoreJobsRestoreJob["ClientId"].isNull())
			restoreJobsObject.clientId = valueRestoreJobsRestoreJob["ClientId"].asString();
		if(!valueRestoreJobsRestoreJob["VaultId"].isNull())
			restoreJobsObject.vaultId = valueRestoreJobsRestoreJob["VaultId"].asString();
		if(!valueRestoreJobsRestoreJob["SnapshotId"].isNull())
			restoreJobsObject.snapshotId = valueRestoreJobsRestoreJob["SnapshotId"].asString();
		if(!valueRestoreJobsRestoreJob["SnapshotHash"].isNull())
			restoreJobsObject.snapshotHash = valueRestoreJobsRestoreJob["SnapshotHash"].asString();
		if(!valueRestoreJobsRestoreJob["Source"].isNull())
			restoreJobsObject.source = valueRestoreJobsRestoreJob["Source"].asString();
		if(!valueRestoreJobsRestoreJob["Target"].isNull())
			restoreJobsObject.target = valueRestoreJobsRestoreJob["Target"].asString();
		if(!valueRestoreJobsRestoreJob["Status"].isNull())
			restoreJobsObject.status = valueRestoreJobsRestoreJob["Status"].asString();
		if(!valueRestoreJobsRestoreJob["RestoreType"].isNull())
			restoreJobsObject.restoreType = valueRestoreJobsRestoreJob["RestoreType"].asString();
		if(!valueRestoreJobsRestoreJob["Speed"].isNull())
			restoreJobsObject.speed = std::stol(valueRestoreJobsRestoreJob["Speed"].asString());
		if(!valueRestoreJobsRestoreJob["CompleteTime"].isNull())
			restoreJobsObject.completeTime = std::stol(valueRestoreJobsRestoreJob["CompleteTime"].asString());
		if(!valueRestoreJobsRestoreJob["Eta"].isNull())
			restoreJobsObject.eta = std::stol(valueRestoreJobsRestoreJob["Eta"].asString());
		if(!valueRestoreJobsRestoreJob["ErrorCount"].isNull())
			restoreJobsObject.errorCount = std::stol(valueRestoreJobsRestoreJob["ErrorCount"].asString());
		if(!valueRestoreJobsRestoreJob["BytesDone"].isNull())
			restoreJobsObject.bytesDone = std::stol(valueRestoreJobsRestoreJob["BytesDone"].asString());
		if(!valueRestoreJobsRestoreJob["BytesTotal"].isNull())
			restoreJobsObject.bytesTotal = std::stol(valueRestoreJobsRestoreJob["BytesTotal"].asString());
		if(!valueRestoreJobsRestoreJob["ItemsDone"].isNull())
			restoreJobsObject.itemsDone = std::stol(valueRestoreJobsRestoreJob["ItemsDone"].asString());
		if(!valueRestoreJobsRestoreJob["ItemsTotal"].isNull())
			restoreJobsObject.itemsTotal = std::stol(valueRestoreJobsRestoreJob["ItemsTotal"].asString());
		if(!valueRestoreJobsRestoreJob["ActualBytes"].isNull())
			restoreJobsObject.actualBytes = std::stol(valueRestoreJobsRestoreJob["ActualBytes"].asString());
		if(!valueRestoreJobsRestoreJob["Percentage"].isNull())
			restoreJobsObject.percentage = std::stoi(valueRestoreJobsRestoreJob["Percentage"].asString());
		if(!valueRestoreJobsRestoreJob["ErrorType"].isNull())
			restoreJobsObject.errorType = valueRestoreJobsRestoreJob["ErrorType"].asString();
		if(!valueRestoreJobsRestoreJob["SourceClientId"].isNull())
			restoreJobsObject.sourceClientId = valueRestoreJobsRestoreJob["SourceClientId"].asString();
		if(!valueRestoreJobsRestoreJob["SnapshotVersion"].isNull())
			restoreJobsObject.snapshotVersion = valueRestoreJobsRestoreJob["SnapshotVersion"].asString();
		if(!valueRestoreJobsRestoreJob["InstanceName"].isNull())
			restoreJobsObject.instanceName = valueRestoreJobsRestoreJob["InstanceName"].asString();
		if(!valueRestoreJobsRestoreJob["InternetIp"].isNull())
			restoreJobsObject.internetIp = valueRestoreJobsRestoreJob["InternetIp"].asString();
		if(!valueRestoreJobsRestoreJob["IntranetIp"].isNull())
			restoreJobsObject.intranetIp = valueRestoreJobsRestoreJob["IntranetIp"].asString();
		if(!valueRestoreJobsRestoreJob["ErrorFile"].isNull())
			restoreJobsObject.errorFile = valueRestoreJobsRestoreJob["ErrorFile"].asString();
		if(!valueRestoreJobsRestoreJob["ErrorFileUrl"].isNull())
			restoreJobsObject.errorFileUrl = valueRestoreJobsRestoreJob["ErrorFileUrl"].asString();
		if(!valueRestoreJobsRestoreJob["RequestId"].isNull())
			restoreJobsObject.requestId = valueRestoreJobsRestoreJob["RequestId"].asString();
		if(!valueRestoreJobsRestoreJob["RestoreName"].isNull())
			restoreJobsObject.restoreName = valueRestoreJobsRestoreJob["RestoreName"].asString();
		if(!valueRestoreJobsRestoreJob["InstanceId"].isNull())
			restoreJobsObject.instanceId = valueRestoreJobsRestoreJob["InstanceId"].asString();
		if(!valueRestoreJobsRestoreJob["Extra"].isNull())
			restoreJobsObject.extra = valueRestoreJobsRestoreJob["Extra"].asString();
		if(!valueRestoreJobsRestoreJob["Duration"].isNull())
			restoreJobsObject.duration = std::stol(valueRestoreJobsRestoreJob["Duration"].asString());
		if(!valueRestoreJobsRestoreJob["ExitCode"].isNull())
			restoreJobsObject.exitCode = valueRestoreJobsRestoreJob["ExitCode"].asString();
		if(!valueRestoreJobsRestoreJob["ErrorFile"].isNull())
			restoreJobsObject.errorFile1 = valueRestoreJobsRestoreJob["ErrorFile"].asString();
		if(!valueRestoreJobsRestoreJob["GmtCreate"].isNull())
			restoreJobsObject.gmtCreate = valueRestoreJobsRestoreJob["GmtCreate"].asString();
		if(!valueRestoreJobsRestoreJob["GmtModified"].isNull())
			restoreJobsObject.gmtModified = std::stol(valueRestoreJobsRestoreJob["GmtModified"].asString());
		if(!valueRestoreJobsRestoreJob["Excludes"].isNull())
			restoreJobsObject.excludes = valueRestoreJobsRestoreJob["Excludes"].asString();
		if(!valueRestoreJobsRestoreJob["Includes"].isNull())
			restoreJobsObject.includes = valueRestoreJobsRestoreJob["Includes"].asString();
		restoreJobs_.push_back(restoreJobsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

DescribeRestoreJobsResult::PageInfo DescribeRestoreJobsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeRestoreJobsResult::RestoreJob> DescribeRestoreJobsResult::getRestoreJobs()const
{
	return restoreJobs_;
}

