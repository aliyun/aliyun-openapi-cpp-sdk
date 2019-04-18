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

#include <alibabacloud/dds/model/DescribeBackupDBsRequest.h>

using AlibabaCloud::Dds::Model::DescribeBackupDBsRequest;

DescribeBackupDBsRequest::DescribeBackupDBsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeBackupDBs")
{}

DescribeBackupDBsRequest::~DescribeBackupDBsRequest()
{}

long DescribeBackupDBsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBackupDBsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBackupDBsRequest::getRestoreTime()const
{
	return restoreTime_;
}

void DescribeBackupDBsRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", restoreTime);
}

std::string DescribeBackupDBsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBackupDBsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeBackupDBsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupDBsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBackupDBsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBackupDBsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeBackupDBsRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupDBsRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

int DescribeBackupDBsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupDBsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupDBsRequest::getSourceDBInstance()const
{
	return sourceDBInstance_;
}

void DescribeBackupDBsRequest::setSourceDBInstance(const std::string& sourceDBInstance)
{
	sourceDBInstance_ = sourceDBInstance;
	setCoreParameter("SourceDBInstance", sourceDBInstance);
}

long DescribeBackupDBsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBackupDBsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBackupDBsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupDBsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBackupDBsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeBackupDBsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

