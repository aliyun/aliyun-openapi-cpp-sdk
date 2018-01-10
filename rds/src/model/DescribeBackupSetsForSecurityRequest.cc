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

#include <alibabacloud/rds/model/DescribeBackupSetsForSecurityRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupSetsForSecurityRequest::DescribeBackupSetsForSecurityRequest() :
	RdsRequest("DescribeBackupSetsForSecurity")
{}

DescribeBackupSetsForSecurityRequest::~DescribeBackupSetsForSecurityRequest()
{}

long DescribeBackupSetsForSecurityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupSetsForSecurityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupSetsForSecurityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupSetsForSecurityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupSetsForSecurityRequest::getTargetAliBid()const
{
	return targetAliBid_;
}

void DescribeBackupSetsForSecurityRequest::setTargetAliBid(const std::string& targetAliBid)
{
	targetAliBid_ = targetAliBid;
	setParameter("TargetAliBid", targetAliBid);
}

std::string DescribeBackupSetsForSecurityRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupSetsForSecurityRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string DescribeBackupSetsForSecurityRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupSetsForSecurityRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupSetsForSecurityRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBackupSetsForSecurityRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeBackupSetsForSecurityRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBackupSetsForSecurityRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeBackupSetsForSecurityRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupSetsForSecurityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBackupSetsForSecurityRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupSetsForSecurityRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBackupSetsForSecurityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupSetsForSecurityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeBackupSetsForSecurityRequest::getBackupStatus()const
{
	return backupStatus_;
}

void DescribeBackupSetsForSecurityRequest::setBackupStatus(const std::string& backupStatus)
{
	backupStatus_ = backupStatus;
	setParameter("BackupStatus", backupStatus);
}

std::string DescribeBackupSetsForSecurityRequest::getBackupLocation()const
{
	return backupLocation_;
}

void DescribeBackupSetsForSecurityRequest::setBackupLocation(const std::string& backupLocation)
{
	backupLocation_ = backupLocation;
	setParameter("BackupLocation", backupLocation);
}

std::string DescribeBackupSetsForSecurityRequest::getTargetAliUid()const
{
	return targetAliUid_;
}

void DescribeBackupSetsForSecurityRequest::setTargetAliUid(const std::string& targetAliUid)
{
	targetAliUid_ = targetAliUid;
	setParameter("TargetAliUid", targetAliUid);
}

int DescribeBackupSetsForSecurityRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupSetsForSecurityRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupSetsForSecurityRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeBackupSetsForSecurityRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeBackupSetsForSecurityRequest::getBackupMode()const
{
	return backupMode_;
}

void DescribeBackupSetsForSecurityRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setParameter("BackupMode", backupMode);
}

