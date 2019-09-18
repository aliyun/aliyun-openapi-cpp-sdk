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

#include <alibabacloud/r-kvstore/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeBackupsResult::DescribeBackupsResult() :
	ServiceResult()
{}

DescribeBackupsResult::DescribeBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupsResult::~DescribeBackupsResult()
{}

void DescribeBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackups = value["Backups"]["Backup"];
	for (auto value : allBackups)
	{
		Backup backupsObject;
		if(!value["BackupId"].isNull())
			backupsObject.backupId = std::stoi(value["BackupId"].asString());
		if(!value["BackupDBNames"].isNull())
			backupsObject.backupDBNames = value["BackupDBNames"].asString();
		if(!value["BackupStatus"].isNull())
			backupsObject.backupStatus = value["BackupStatus"].asString();
		if(!value["BackupStartTime"].isNull())
			backupsObject.backupStartTime = value["BackupStartTime"].asString();
		if(!value["BackupEndTime"].isNull())
			backupsObject.backupEndTime = value["BackupEndTime"].asString();
		if(!value["BackupType"].isNull())
			backupsObject.backupType = value["BackupType"].asString();
		if(!value["BackupMode"].isNull())
			backupsObject.backupMode = value["BackupMode"].asString();
		if(!value["BackupMethod"].isNull())
			backupsObject.backupMethod = value["BackupMethod"].asString();
		if(!value["BackupDownloadURL"].isNull())
			backupsObject.backupDownloadURL = value["BackupDownloadURL"].asString();
		if(!value["BackupSize"].isNull())
			backupsObject.backupSize = std::stol(value["BackupSize"].asString());
		if(!value["EngineVersion"].isNull())
			backupsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["NodeInstanceId"].isNull())
			backupsObject.nodeInstanceId = value["NodeInstanceId"].asString();
		if(!value["BackupIntranetDownloadURL"].isNull())
			backupsObject.backupIntranetDownloadURL = value["BackupIntranetDownloadURL"].asString();
		backups_.push_back(backupsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeBackupsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBackupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getBackups()const
{
	return backups_;
}

