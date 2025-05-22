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

#include <alibabacloud/rds/model/DescribeBackupTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItemsNode = value["Items"]["BackupJob"];
	for (auto valueItemsBackupJob : allItemsNode)
	{
		BackupJob itemsObject;
		if(!valueItemsBackupJob["BackupId"].isNull())
			itemsObject.backupId = valueItemsBackupJob["BackupId"].asString();
		if(!valueItemsBackupJob["BackupJobId"].isNull())
			itemsObject.backupJobId = valueItemsBackupJob["BackupJobId"].asString();
		if(!valueItemsBackupJob["BackupProgressStatus"].isNull())
			itemsObject.backupProgressStatus = valueItemsBackupJob["BackupProgressStatus"].asString();
		if(!valueItemsBackupJob["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsBackupJob["BackupStatus"].asString();
		if(!valueItemsBackupJob["JobMode"].isNull())
			itemsObject.jobMode = valueItemsBackupJob["JobMode"].asString();
		if(!valueItemsBackupJob["Process"].isNull())
			itemsObject.process = valueItemsBackupJob["Process"].asString();
		if(!valueItemsBackupJob["TaskAction"].isNull())
			itemsObject.taskAction = valueItemsBackupJob["TaskAction"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeBackupTasksResult::BackupJob> DescribeBackupTasksResult::getItems()const
{
	return items_;
}

