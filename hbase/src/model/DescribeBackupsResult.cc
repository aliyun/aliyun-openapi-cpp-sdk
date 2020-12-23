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

#include <alibabacloud/hbase/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

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
		if(!valueBackupsBackup["BackupDBNames"].isNull())
			backupsObject.backupDBNames = valueBackupsBackup["BackupDBNames"].asString();
		if(!valueBackupsBackup["BackupId"].isNull())
			backupsObject.backupId = std::stoi(valueBackupsBackup["BackupId"].asString());
		if(!valueBackupsBackup["BackupStatus"].isNull())
			backupsObject.backupStatus = valueBackupsBackup["BackupStatus"].asString();
		if(!valueBackupsBackup["BackupStartTime"].isNull())
			backupsObject.backupStartTime = valueBackupsBackup["BackupStartTime"].asString();
		if(!valueBackupsBackup["BackupEndTime"].isNull())
			backupsObject.backupEndTime = valueBackupsBackup["BackupEndTime"].asString();
		if(!valueBackupsBackup["BackupType"].isNull())
			backupsObject.backupType = valueBackupsBackup["BackupType"].asString();
		if(!valueBackupsBackup["BackupMode"].isNull())
			backupsObject.backupMode = valueBackupsBackup["BackupMode"].asString();
		if(!valueBackupsBackup["BackupMethod"].isNull())
			backupsObject.backupMethod = valueBackupsBackup["BackupMethod"].asString();
		if(!valueBackupsBackup["BackupDownloadURL"].isNull())
			backupsObject.backupDownloadURL = valueBackupsBackup["BackupDownloadURL"].asString();
		if(!valueBackupsBackup["BackupSize"].isNull())
			backupsObject.backupSize = valueBackupsBackup["BackupSize"].asString();
		if(!valueBackupsBackup["BackupStartTimeUTC"].isNull())
			backupsObject.backupStartTimeUTC = valueBackupsBackup["BackupStartTimeUTC"].asString();
		if(!valueBackupsBackup["BackupEndTimeUTC"].isNull())
			backupsObject.backupEndTimeUTC = valueBackupsBackup["BackupEndTimeUTC"].asString();
		backups_.push_back(backupsObject);
	}
	if(!value["EnableStatus"].isNull())
		enableStatus_ = value["EnableStatus"].asString();
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

std::string DescribeBackupsResult::getEnableStatus()const
{
	return enableStatus_;
}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getBackups()const
{
	return backups_;
}

