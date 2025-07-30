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

#include <alibabacloud/r-kvstore/model/DescribeClusterBackupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeClusterBackupListResult::DescribeClusterBackupListResult() :
	ServiceResult()
{}

DescribeClusterBackupListResult::DescribeClusterBackupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterBackupListResult::~DescribeClusterBackupListResult()
{}

void DescribeClusterBackupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterBackupsNode = value["ClusterBackups"]["clusterBackup"];
	for (auto valueClusterBackupsclusterBackup : allClusterBackupsNode)
	{
		ClusterBackup clusterBackupsObject;
		if(!valueClusterBackupsclusterBackup["IsAvail"].isNull())
			clusterBackupsObject.isAvail = std::stoi(valueClusterBackupsclusterBackup["IsAvail"].asString());
		if(!valueClusterBackupsclusterBackup["ClusterBackupId"].isNull())
			clusterBackupsObject.clusterBackupId = valueClusterBackupsclusterBackup["ClusterBackupId"].asString();
		if(!valueClusterBackupsclusterBackup["ClusterBackupStatus"].isNull())
			clusterBackupsObject.clusterBackupStatus = valueClusterBackupsclusterBackup["ClusterBackupStatus"].asString();
		if(!valueClusterBackupsclusterBackup["ClusterBackupSize"].isNull())
			clusterBackupsObject.clusterBackupSize = valueClusterBackupsclusterBackup["ClusterBackupSize"].asString();
		if(!valueClusterBackupsclusterBackup["ClusterBackupStartTime"].isNull())
			clusterBackupsObject.clusterBackupStartTime = valueClusterBackupsclusterBackup["ClusterBackupStartTime"].asString();
		if(!valueClusterBackupsclusterBackup["ClusterBackupEndTime"].isNull())
			clusterBackupsObject.clusterBackupEndTime = valueClusterBackupsclusterBackup["ClusterBackupEndTime"].asString();
		if(!valueClusterBackupsclusterBackup["ClusterBackupMode"].isNull())
			clusterBackupsObject.clusterBackupMode = valueClusterBackupsclusterBackup["ClusterBackupMode"].asString();
		if(!valueClusterBackupsclusterBackup["ShardClassMemory"].isNull())
			clusterBackupsObject.shardClassMemory = std::stoi(valueClusterBackupsclusterBackup["ShardClassMemory"].asString());
		if(!valueClusterBackupsclusterBackup["Progress"].isNull())
			clusterBackupsObject.progress = valueClusterBackupsclusterBackup["Progress"].asString();
		if(!valueClusterBackupsclusterBackup["ExpectExpireTime"].isNull())
			clusterBackupsObject.expectExpireTime = valueClusterBackupsclusterBackup["ExpectExpireTime"].asString();
		auto allBackupsNode = valueClusterBackupsclusterBackup["Backups"]["backup"];
		for (auto valueClusterBackupsclusterBackupBackupsbackup : allBackupsNode)
		{
			ClusterBackup::Backup backupsObject;
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupId"].isNull())
				backupsObject.backupId = valueClusterBackupsclusterBackupBackupsbackup["BackupId"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["InstanceName"].isNull())
				backupsObject.instanceName = valueClusterBackupsclusterBackupBackupsbackup["InstanceName"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupDownloadURL"].isNull())
				backupsObject.backupDownloadURL = valueClusterBackupsclusterBackupBackupsbackup["BackupDownloadURL"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupIntranetDownloadURL"].isNull())
				backupsObject.backupIntranetDownloadURL = valueClusterBackupsclusterBackupBackupsbackup["BackupIntranetDownloadURL"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["RecoverConfigMode"].isNull())
				backupsObject.recoverConfigMode = valueClusterBackupsclusterBackupBackupsbackup["RecoverConfigMode"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupStartTime"].isNull())
				backupsObject.backupStartTime = valueClusterBackupsclusterBackupBackupsbackup["BackupStartTime"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupEndTime"].isNull())
				backupsObject.backupEndTime = valueClusterBackupsclusterBackupBackupsbackup["BackupEndTime"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupSize"].isNull())
				backupsObject.backupSize = valueClusterBackupsclusterBackupBackupsbackup["BackupSize"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["IsAvail"].isNull())
				backupsObject.isAvail = valueClusterBackupsclusterBackupBackupsbackup["IsAvail"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupStatus"].isNull())
				backupsObject.backupStatus = valueClusterBackupsclusterBackupBackupsbackup["BackupStatus"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["BackupName"].isNull())
				backupsObject.backupName = valueClusterBackupsclusterBackupBackupsbackup["BackupName"].asString();
			if(!valueClusterBackupsclusterBackupBackupsbackup["Engine"].isNull())
				backupsObject.engine = valueClusterBackupsclusterBackupBackupsbackup["Engine"].asString();
			auto extraInfo1Node = value["ExtraInfo"];
			if(!extraInfo1Node["CustinsLevelId"].isNull())
				backupsObject.extraInfo1.custinsLevelId = std::stoi(extraInfo1Node["CustinsLevelId"].asString());
			if(!extraInfo1Node["CustinsDbVersion"].isNull())
				backupsObject.extraInfo1.custinsDbVersion = extraInfo1Node["CustinsDbVersion"].asString();
			if(!extraInfo1Node["CustinsName"].isNull())
				backupsObject.extraInfo1.custinsName = extraInfo1Node["CustinsName"].asString();
			if(!extraInfo1Node["CustinsId"].isNull())
				backupsObject.extraInfo1.custinsId = std::stoi(extraInfo1Node["CustinsId"].asString());
			clusterBackupsObject.backups.push_back(backupsObject);
		}
		auto extraInfoNode = value["ExtraInfo"];
		if(!extraInfoNode["RegistryFromHistory"].isNull())
			clusterBackupsObject.extraInfo.registryFromHistory = extraInfoNode["RegistryFromHistory"].asString();
		clusterBackups_.push_back(clusterBackupsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["FullStorageSize"].isNull())
		fullStorageSize_ = std::stol(value["FullStorageSize"].asString());
	if(!value["LogStorageSize"].isNull())
		logStorageSize_ = std::stol(value["LogStorageSize"].asString());
	if(!value["FreeSize"].isNull())
		freeSize_ = std::stol(value["FreeSize"].asString());

}

std::vector<DescribeClusterBackupListResult::ClusterBackup> DescribeClusterBackupListResult::getClusterBackups()const
{
	return clusterBackups_;
}

int DescribeClusterBackupListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeClusterBackupListResult::getPageNumber()const
{
	return pageNumber_;
}

long DescribeClusterBackupListResult::getFreeSize()const
{
	return freeSize_;
}

int DescribeClusterBackupListResult::getMaxResults()const
{
	return maxResults_;
}

long DescribeClusterBackupListResult::getFullStorageSize()const
{
	return fullStorageSize_;
}

long DescribeClusterBackupListResult::getLogStorageSize()const
{
	return logStorageSize_;
}

