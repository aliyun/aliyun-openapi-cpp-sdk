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

#include <alibabacloud/dds/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	auto allBackupsNode = value["Backups"]["Backup"];
	for (auto valueBackupsBackup : allBackupsNode)
	{
		Backup backupsObject;
		if(!valueBackupsBackup["BackupStatus"].isNull())
			backupsObject.backupStatus = valueBackupsBackup["BackupStatus"].asString();
		if(!valueBackupsBackup["BackupType"].isNull())
			backupsObject.backupType = valueBackupsBackup["BackupType"].asString();
		if(!valueBackupsBackup["BackupStartTime"].isNull())
			backupsObject.backupStartTime = valueBackupsBackup["BackupStartTime"].asString();
		if(!valueBackupsBackup["BackupIntranetDownloadURL"].isNull())
			backupsObject.backupIntranetDownloadURL = valueBackupsBackup["BackupIntranetDownloadURL"].asString();
		if(!valueBackupsBackup["BackupSize"].isNull())
			backupsObject.backupSize = std::stol(valueBackupsBackup["BackupSize"].asString());
		if(!valueBackupsBackup["BackupDownloadURL"].isNull())
			backupsObject.backupDownloadURL = valueBackupsBackup["BackupDownloadURL"].asString();
		if(!valueBackupsBackup["BackupMode"].isNull())
			backupsObject.backupMode = valueBackupsBackup["BackupMode"].asString();
		if(!valueBackupsBackup["BackupEndTime"].isNull())
			backupsObject.backupEndTime = valueBackupsBackup["BackupEndTime"].asString();
		if(!valueBackupsBackup["BackupId"].isNull())
			backupsObject.backupId = valueBackupsBackup["BackupId"].asString();
		if(!valueBackupsBackup["BackupDBNames"].isNull())
			backupsObject.backupDBNames = valueBackupsBackup["BackupDBNames"].asString();
		if(!valueBackupsBackup["BackupMethod"].isNull())
			backupsObject.backupMethod = valueBackupsBackup["BackupMethod"].asString();
		if(!valueBackupsBackup["BackupJobId"].isNull())
			backupsObject.backupJobId = valueBackupsBackup["BackupJobId"].asString();
		if(!valueBackupsBackup["BackupName"].isNull())
			backupsObject.backupName = valueBackupsBackup["BackupName"].asString();
		if(!valueBackupsBackup["BackupScale"].isNull())
			backupsObject.backupScale = valueBackupsBackup["BackupScale"].asString();
		if(!valueBackupsBackup["IsAvail"].isNull())
			backupsObject.isAvail = valueBackupsBackup["IsAvail"].asString() == "true";
		if(!valueBackupsBackup["EngineVersion"].isNull())
			backupsObject.engineVersion = valueBackupsBackup["EngineVersion"].asString();
		if(!valueBackupsBackup["BackupExpireTime"].isNull())
			backupsObject.backupExpireTime = valueBackupsBackup["BackupExpireTime"].asString();
		backups_.push_back(backupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

