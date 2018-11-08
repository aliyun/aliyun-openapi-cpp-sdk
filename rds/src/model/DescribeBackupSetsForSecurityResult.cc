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

#include <alibabacloud/rds/model/DescribeBackupSetsForSecurityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupSetsForSecurityResult::DescribeBackupSetsForSecurityResult() :
	ServiceResult()
{}

DescribeBackupSetsForSecurityResult::DescribeBackupSetsForSecurityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetsForSecurityResult::~DescribeBackupSetsForSecurityResult()
{}

void DescribeBackupSetsForSecurityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Backup"];
	for (auto value : allItems)
	{
		Backup itemsObject;
		if(!value["BackupId"].isNull())
			itemsObject.backupId = value["BackupId"].asString();
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["BackupStatus"].isNull())
			itemsObject.backupStatus = value["BackupStatus"].asString();
		if(!value["BackupStartTime"].isNull())
			itemsObject.backupStartTime = value["BackupStartTime"].asString();
		if(!value["BackupEndTime"].isNull())
			itemsObject.backupEndTime = value["BackupEndTime"].asString();
		if(!value["BackupType"].isNull())
			itemsObject.backupType = value["BackupType"].asString();
		if(!value["BackupMode"].isNull())
			itemsObject.backupMode = value["BackupMode"].asString();
		if(!value["BackupMethod"].isNull())
			itemsObject.backupMethod = value["BackupMethod"].asString();
		if(!value["BackupDownloadURL"].isNull())
			itemsObject.backupDownloadURL = value["BackupDownloadURL"].asString();
		if(!value["BackupIntranetDownloadURL"].isNull())
			itemsObject.backupIntranetDownloadURL = value["BackupIntranetDownloadURL"].asString();
		if(!value["BackupLocation"].isNull())
			itemsObject.backupLocation = value["BackupLocation"].asString();
		if(!value["BackupExtractionStatus"].isNull())
			itemsObject.backupExtractionStatus = value["BackupExtractionStatus"].asString();
		if(!value["BackupScale"].isNull())
			itemsObject.backupScale = value["BackupScale"].asString();
		if(!value["BackupDBNames"].isNull())
			itemsObject.backupDBNames = value["BackupDBNames"].asString();
		if(!value["TotalBackupSize"].isNull())
			itemsObject.totalBackupSize = std::stol(value["TotalBackupSize"].asString());
		if(!value["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(value["BackupSize"].asString());
		if(!value["HostInstanceID"].isNull())
			itemsObject.hostInstanceID = value["HostInstanceID"].asString();
		if(!value["StoreStatus"].isNull())
			itemsObject.storeStatus = value["StoreStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();
	if(!value["TotalBackupSize"].isNull())
		totalBackupSize_ = std::stol(value["TotalBackupSize"].asString());

}

std::string DescribeBackupSetsForSecurityResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeBackupSetsForSecurityResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeBackupSetsForSecurityResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackupSetsForSecurityResult::Backup> DescribeBackupSetsForSecurityResult::getItems()const
{
	return items_;
}

long DescribeBackupSetsForSecurityResult::getTotalBackupSize()const
{
	return totalBackupSize_;
}

