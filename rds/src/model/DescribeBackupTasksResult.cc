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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["BackupJob"];
	for (auto value : allItems)
	{
		BackupJob itemsObject;
		if(!value["BackupProgressStatus"].isNull())
			itemsObject.backupProgressStatus = value["BackupProgressStatus"].asString();
		if(!value["BackupStatus"].isNull())
			itemsObject.backupStatus = value["BackupStatus"].asString();
		if(!value["JobMode"].isNull())
			itemsObject.jobMode = value["JobMode"].asString();
		if(!value["Process"].isNull())
			itemsObject.process = value["Process"].asString();
		if(!value["TaskAction"].isNull())
			itemsObject.taskAction = value["TaskAction"].asString();
		if(!value["BackupJobId"].isNull())
			itemsObject.backupJobId = value["BackupJobId"].asString();
		if(!value["BackupId"].isNull())
			itemsObject.backupId = value["BackupId"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeBackupTasksResult::BackupJob> DescribeBackupTasksResult::getItems()const
{
	return items_;
}

