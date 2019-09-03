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

#include <alibabacloud/rds/model/DescribeBackupsRequest.h>

using AlibabaCloud::Rds::Model::DescribeBackupsRequest;

DescribeBackupsRequest::DescribeBackupsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeBackups")
{}

DescribeBackupsRequest::~DescribeBackupsRequest()
{}

long DescribeBackupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBackupsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeBackupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBackupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBackupsRequest::getBackupLocation()const
{
	return backupLocation_;
}

void DescribeBackupsRequest::setBackupLocation(const std::string& backupLocation)
{
	backupLocation_ = backupLocation;
	setCoreParameter("BackupLocation", backupLocation);
}

int DescribeBackupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeBackupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupsRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupsRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string DescribeBackupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBackupsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeBackupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeBackupsRequest::getBackupStatus()const
{
	return backupStatus_;
}

void DescribeBackupsRequest::setBackupStatus(const std::string& backupStatus)
{
	backupStatus_ = backupStatus;
	setCoreParameter("BackupStatus", backupStatus);
}

std::string DescribeBackupsRequest::getBackupMode()const
{
	return backupMode_;
}

void DescribeBackupsRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setCoreParameter("BackupMode", backupMode);
}

