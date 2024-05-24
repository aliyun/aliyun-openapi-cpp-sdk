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

#include <alibabacloud/dds/model/DescribeBackupTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeBackupTasksResult::DescribeBackupTasksResult() :
	ServiceResult()
{}

DescribeBackupTasksResult::DescribeBackupTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupTasksResult::~DescribeBackupTasksResult()
{}

void DescribeBackupTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupJobsNode = value["BackupJobs"]["BackupTask"];
	for (auto valueBackupJobsBackupTask : allBackupJobsNode)
	{
		BackupTask backupJobsObject;
		if(!valueBackupJobsBackupTask["BackupjobId"].isNull())
			backupJobsObject.backupjobId = valueBackupJobsBackupTask["BackupjobId"].asString();
		if(!valueBackupJobsBackupTask["BackupSetStatus"].isNull())
			backupJobsObject.backupSetStatus = valueBackupJobsBackupTask["BackupSetStatus"].asString();
		if(!valueBackupJobsBackupTask["BackupStartTime"].isNull())
			backupJobsObject.backupStartTime = valueBackupJobsBackupTask["BackupStartTime"].asString();
		if(!valueBackupJobsBackupTask["Progress"].isNull())
			backupJobsObject.progress = valueBackupJobsBackupTask["Progress"].asString();
		if(!valueBackupJobsBackupTask["JobMode"].isNull())
			backupJobsObject.jobMode = valueBackupJobsBackupTask["JobMode"].asString();
		backupJobs_.push_back(backupJobsObject);
	}

}

std::vector<DescribeBackupTasksResult::BackupTask> DescribeBackupTasksResult::getBackupJobs()const
{
	return backupJobs_;
}

