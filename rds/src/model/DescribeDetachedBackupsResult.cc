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

#include <alibabacloud/rds/model/DescribeDetachedBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDetachedBackupsResult::DescribeDetachedBackupsResult() :
	ServiceResult()
{}

DescribeDetachedBackupsResult::DescribeDetachedBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDetachedBackupsResult::~DescribeDetachedBackupsResult()
{}

void DescribeDetachedBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Backup"];
	for (auto valueItemsBackup : allItemsNode)
	{
		Backup itemsObject;
		if(!valueItemsBackup["BackupDBNames"].isNull())
			itemsObject.backupDBNames = valueItemsBackup["BackupDBNames"].asString();
		if(!valueItemsBackup["BackupDownloadURL"].isNull())
			itemsObject.backupDownloadURL = valueItemsBackup["BackupDownloadURL"].asString();
		if(!valueItemsBackup["BackupEndTime"].isNull())
			itemsObject.backupEndTime = valueItemsBackup["BackupEndTime"].asString();
		if(!valueItemsBackup["BackupExtractionStatus"].isNull())
			itemsObject.backupExtractionStatus = valueItemsBackup["BackupExtractionStatus"].asString();
		if(!valueItemsBackup["BackupId"].isNull())
			itemsObject.backupId = valueItemsBackup["BackupId"].asString();
		if(!valueItemsBackup["BackupIntranetDownloadURL"].isNull())
			itemsObject.backupIntranetDownloadURL = valueItemsBackup["BackupIntranetDownloadURL"].asString();
		if(!valueItemsBackup["BackupLocation"].isNull())
			itemsObject.backupLocation = valueItemsBackup["BackupLocation"].asString();
		if(!valueItemsBackup["BackupMethod"].isNull())
			itemsObject.backupMethod = valueItemsBackup["BackupMethod"].asString();
		if(!valueItemsBackup["BackupMode"].isNull())
			itemsObject.backupMode = valueItemsBackup["BackupMode"].asString();
		if(!valueItemsBackup["BackupScale"].isNull())
			itemsObject.backupScale = valueItemsBackup["BackupScale"].asString();
		if(!valueItemsBackup["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(valueItemsBackup["BackupSize"].asString());
		if(!valueItemsBackup["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsBackup["BackupStartTime"].asString();
		if(!valueItemsBackup["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsBackup["BackupStatus"].asString();
		if(!valueItemsBackup["BackupType"].isNull())
			itemsObject.backupType = valueItemsBackup["BackupType"].asString();
		if(!valueItemsBackup["ConsistentTime"].isNull())
			itemsObject.consistentTime = std::stol(valueItemsBackup["ConsistentTime"].asString());
		if(!valueItemsBackup["DBInstanceComment"].isNull())
			itemsObject.dBInstanceComment = valueItemsBackup["DBInstanceComment"].asString();
		if(!valueItemsBackup["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsBackup["DBInstanceId"].asString();
		if(!valueItemsBackup["HostInstanceID"].isNull())
			itemsObject.hostInstanceID = valueItemsBackup["HostInstanceID"].asString();
		if(!valueItemsBackup["IsAvail"].isNull())
			itemsObject.isAvail = std::stoi(valueItemsBackup["IsAvail"].asString());
		if(!valueItemsBackup["MetaStatus"].isNull())
			itemsObject.metaStatus = valueItemsBackup["MetaStatus"].asString();
		if(!valueItemsBackup["SlaveStatus"].isNull())
			itemsObject.slaveStatus = valueItemsBackup["SlaveStatus"].asString();
		if(!valueItemsBackup["StoreStatus"].isNull())
			itemsObject.storeStatus = valueItemsBackup["StoreStatus"].asString();
		if(!valueItemsBackup["TotalBackupSize"].isNull())
			itemsObject.totalBackupSize = std::stol(valueItemsBackup["TotalBackupSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();
	if(!value["TotalBackupSize"].isNull())
		totalBackupSize_ = std::stol(value["TotalBackupSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();

}

std::string DescribeDetachedBackupsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeDetachedBackupsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeDetachedBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDetachedBackupsResult::Backup> DescribeDetachedBackupsResult::getItems()const
{
	return items_;
}

long DescribeDetachedBackupsResult::getTotalBackupSize()const
{
	return totalBackupSize_;
}

