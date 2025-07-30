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
	auto allBackupsNode = value["Backups"]["Backup"];
	for (auto valueBackupsBackup : allBackupsNode)
	{
		Backup backupsObject;
		if(!valueBackupsBackup["BackupStatus"].isNull())
			backupsObject.backupStatus = valueBackupsBackup["BackupStatus"].asString();
		if(!valueBackupsBackup["BackupStartTime"].isNull())
			backupsObject.backupStartTime = valueBackupsBackup["BackupStartTime"].asString();
		if(!valueBackupsBackup["BackupType"].isNull())
			backupsObject.backupType = valueBackupsBackup["BackupType"].asString();
		if(!valueBackupsBackup["BackupDownloadURL"].isNull())
			backupsObject.backupDownloadURL = valueBackupsBackup["BackupDownloadURL"].asString();
		if(!valueBackupsBackup["NodeInstanceId"].isNull())
			backupsObject.nodeInstanceId = valueBackupsBackup["NodeInstanceId"].asString();
		if(!valueBackupsBackup["BackupEndTime"].isNull())
			backupsObject.backupEndTime = valueBackupsBackup["BackupEndTime"].asString();
		if(!valueBackupsBackup["BackupId"].isNull())
			backupsObject.backupId = std::stol(valueBackupsBackup["BackupId"].asString());
		if(!valueBackupsBackup["BackupDBNames"].isNull())
			backupsObject.backupDBNames = valueBackupsBackup["BackupDBNames"].asString();
		if(!valueBackupsBackup["EngineVersion"].isNull())
			backupsObject.engineVersion = valueBackupsBackup["EngineVersion"].asString();
		if(!valueBackupsBackup["BackupIntranetDownloadURL"].isNull())
			backupsObject.backupIntranetDownloadURL = valueBackupsBackup["BackupIntranetDownloadURL"].asString();
		if(!valueBackupsBackup["BackupSize"].isNull())
			backupsObject.backupSize = std::stol(valueBackupsBackup["BackupSize"].asString());
		if(!valueBackupsBackup["BackupMode"].isNull())
			backupsObject.backupMode = valueBackupsBackup["BackupMode"].asString();
		if(!valueBackupsBackup["BackupMethod"].isNull())
			backupsObject.backupMethod = valueBackupsBackup["BackupMethod"].asString();
		if(!valueBackupsBackup["BackupJobID"].isNull())
			backupsObject.backupJobID = std::stol(valueBackupsBackup["BackupJobID"].asString());
		if(!valueBackupsBackup["RecoverConfigMode"].isNull())
			backupsObject.recoverConfigMode = valueBackupsBackup["RecoverConfigMode"].asString();
		if(!valueBackupsBackup["ExpectExpireTime"].isNull())
			backupsObject.expectExpireTime = valueBackupsBackup["ExpectExpireTime"].asString();
		backups_.push_back(backupsObject);
	}
	auto accessDeniedDetailNode = value["AccessDeniedDetail"];
	if(!accessDeniedDetailNode["AuthAction"].isNull())
		accessDeniedDetail_.authAction = accessDeniedDetailNode["AuthAction"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalDisplayName"].isNull())
		accessDeniedDetail_.authPrincipalDisplayName = accessDeniedDetailNode["AuthPrincipalDisplayName"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalOwnerId"].isNull())
		accessDeniedDetail_.authPrincipalOwnerId = accessDeniedDetailNode["AuthPrincipalOwnerId"].asString();
	if(!accessDeniedDetailNode["AuthPrincipalType"].isNull())
		accessDeniedDetail_.authPrincipalType = accessDeniedDetailNode["AuthPrincipalType"].asString();
	if(!accessDeniedDetailNode["EncodedDiagnosticMessage"].isNull())
		accessDeniedDetail_.encodedDiagnosticMessage = accessDeniedDetailNode["EncodedDiagnosticMessage"].asString();
	if(!accessDeniedDetailNode["NoPermissionType"].isNull())
		accessDeniedDetail_.noPermissionType = accessDeniedDetailNode["NoPermissionType"].asString();
	if(!accessDeniedDetailNode["PolicyType"].isNull())
		accessDeniedDetail_.policyType = accessDeniedDetailNode["PolicyType"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["FullStorageSize"].isNull())
		fullStorageSize_ = std::stol(value["FullStorageSize"].asString());
	if(!value["LogStorageSize"].isNull())
		logStorageSize_ = std::stol(value["LogStorageSize"].asString());
	if(!value["FreeSize"].isNull())
		freeSize_ = std::stol(value["FreeSize"].asString());

}

DescribeBackupsResult::AccessDeniedDetail DescribeBackupsResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
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

long DescribeBackupsResult::getFreeSize()const
{
	return freeSize_;
}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getBackups()const
{
	return backups_;
}

long DescribeBackupsResult::getFullStorageSize()const
{
	return fullStorageSize_;
}

long DescribeBackupsResult::getLogStorageSize()const
{
	return logStorageSize_;
}

