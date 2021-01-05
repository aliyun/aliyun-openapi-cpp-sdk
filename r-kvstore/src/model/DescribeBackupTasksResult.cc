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

#include <alibabacloud/r-kvstore/model/DescribeBackupTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	auto allBackupJobsNode = value["BackupJobs"]["BackupJob"];
	for (auto valueBackupJobsBackupJob : allBackupJobsNode)
	{
		BackupJob backupJobsObject;
		if(!valueBackupJobsBackupJob["BackupJobID"].isNull())
			backupJobsObject.backupJobID = std::stoi(valueBackupJobsBackupJob["BackupJobID"].asString());
		if(!valueBackupJobsBackupJob["BackupProgressStatus"].isNull())
			backupJobsObject.backupProgressStatus = valueBackupJobsBackupJob["BackupProgressStatus"].asString();
		if(!valueBackupJobsBackupJob["JobMode"].isNull())
			backupJobsObject.jobMode = valueBackupJobsBackupJob["JobMode"].asString();
		if(!valueBackupJobsBackupJob["Process"].isNull())
			backupJobsObject.process = valueBackupJobsBackupJob["Process"].asString();
		if(!valueBackupJobsBackupJob["StartTime"].isNull())
			backupJobsObject.startTime = valueBackupJobsBackupJob["StartTime"].asString();
		if(!valueBackupJobsBackupJob["TaskAction"].isNull())
			backupJobsObject.taskAction = valueBackupJobsBackupJob["TaskAction"].asString();
		backupJobs_.push_back(backupJobsObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeBackupTasksResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<DescribeBackupTasksResult::BackupJob> DescribeBackupTasksResult::getBackupJobs()const
{
	return backupJobs_;
}

