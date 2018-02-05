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

#include <alibabacloud/rds/model/DescribeBackupsForSecurityRequest.h>

using AlibabaCloud::Rds::Model::DescribeBackupsForSecurityRequest;

DescribeBackupsForSecurityRequest::DescribeBackupsForSecurityRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeBackupsForSecurity")
{}

DescribeBackupsForSecurityRequest::~DescribeBackupsForSecurityRequest()
{}

long DescribeBackupsForSecurityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupsForSecurityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupsForSecurityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupsForSecurityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupsForSecurityRequest::getTargetAliBid()const
{
	return targetAliBid_;
}

void DescribeBackupsForSecurityRequest::setTargetAliBid(const std::string& targetAliBid)
{
	targetAliBid_ = targetAliBid;
	setParameter("TargetAliBid", targetAliBid);
}

std::string DescribeBackupsForSecurityRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupsForSecurityRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string DescribeBackupsForSecurityRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupsForSecurityRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupsForSecurityRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBackupsForSecurityRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeBackupsForSecurityRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBackupsForSecurityRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeBackupsForSecurityRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupsForSecurityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBackupsForSecurityRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupsForSecurityRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBackupsForSecurityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupsForSecurityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBackupsForSecurityRequest::getBackupStatus()const
{
	return backupStatus_;
}

void DescribeBackupsForSecurityRequest::setBackupStatus(const std::string& backupStatus)
{
	backupStatus_ = backupStatus;
	setParameter("BackupStatus", backupStatus);
}

std::string DescribeBackupsForSecurityRequest::getBackupLocation()const
{
	return backupLocation_;
}

void DescribeBackupsForSecurityRequest::setBackupLocation(const std::string& backupLocation)
{
	backupLocation_ = backupLocation;
	setParameter("BackupLocation", backupLocation);
}

std::string DescribeBackupsForSecurityRequest::getTargetAliUid()const
{
	return targetAliUid_;
}

void DescribeBackupsForSecurityRequest::setTargetAliUid(const std::string& targetAliUid)
{
	targetAliUid_ = targetAliUid;
	setParameter("TargetAliUid", targetAliUid);
}

int DescribeBackupsForSecurityRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupsForSecurityRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupsForSecurityRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupsForSecurityRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeBackupsForSecurityRequest::getBackupMode()const
{
	return backupMode_;
}

void DescribeBackupsForSecurityRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setParameter("BackupMode", backupMode);
}

