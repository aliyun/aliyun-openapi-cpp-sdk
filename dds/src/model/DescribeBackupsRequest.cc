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

#include <alibabacloud/dds/model/DescribeBackupsRequest.h>

using AlibabaCloud::Dds::Model::DescribeBackupsRequest;

DescribeBackupsRequest::DescribeBackupsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeBackups")
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

std::string DescribeBackupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBackupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
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

std::string DescribeBackupsRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupsRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
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

std::string DescribeBackupsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBackupsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
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

std::string DescribeBackupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeBackupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeBackupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBackupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
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

std::string DescribeBackupsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeBackupsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

