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

#include <alibabacloud/rds/model/DescribeBackupsForSecurityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupsForSecurityResult::DescribeBackupsForSecurityResult() :
	ServiceResult()
{}

DescribeBackupsForSecurityResult::DescribeBackupsForSecurityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupsForSecurityResult::~DescribeBackupsForSecurityResult()
{}

void DescribeBackupsForSecurityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Backup"];
	for (auto value : allItems)
	{
		Backup backupObject;
		backupObject.backupId = value["BackupId"].asString();
		backupObject.dBInstanceId = value["DBInstanceId"].asString();
		backupObject.backupStatus = value["BackupStatus"].asString();
		backupObject.backupStartTime = value["BackupStartTime"].asString();
		backupObject.backupEndTime = value["BackupEndTime"].asString();
		backupObject.backupType = value["BackupType"].asString();
		backupObject.backupMode = value["BackupMode"].asString();
		backupObject.backupMethod = value["BackupMethod"].asString();
		backupObject.backupDownloadURL = value["BackupDownloadURL"].asString();
		backupObject.backupIntranetDownloadURL = value["BackupIntranetDownloadURL"].asString();
		backupObject.backupLocation = value["BackupLocation"].asString();
		backupObject.backupExtractionStatus = value["BackupExtractionStatus"].asString();
		backupObject.backupScale = value["BackupScale"].asString();
		backupObject.backupDBNames = value["BackupDBNames"].asString();
		backupObject.totalBackupSize = std::stol(value["TotalBackupSize"].asString());
		backupObject.backupSize = std::stol(value["BackupSize"].asString());
		backupObject.hostInstanceID = value["HostInstanceID"].asString();
		backupObject.storeStatus = value["StoreStatus"].asString();
		items_.push_back(backupObject);
	}
	totalRecordCount_ = value["TotalRecordCount"].asString();
	pageNumber_ = value["PageNumber"].asString();
	pageRecordCount_ = value["PageRecordCount"].asString();
	totalBackupSize_ = std::stol(value["TotalBackupSize"].asString());

}

std::string DescribeBackupsForSecurityResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeBackupsForSecurityResult::setTotalRecordCount(const std::string& totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

std::string DescribeBackupsForSecurityResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeBackupsForSecurityResult::setPageRecordCount(const std::string& pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeBackupsForSecurityResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupsForSecurityResult::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
}

long DescribeBackupsForSecurityResult::getTotalBackupSize()const
{
	return totalBackupSize_;
}

void DescribeBackupsForSecurityResult::setTotalBackupSize(long totalBackupSize)
{
	totalBackupSize_ = totalBackupSize;
}

