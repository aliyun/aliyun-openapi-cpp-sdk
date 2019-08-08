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

#include <alibabacloud/dds/model/DescribeRunningLogRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeRunningLogRecordsRequest;

DescribeRunningLogRecordsRequest::DescribeRunningLogRecordsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeRunningLogRecords")
{}

DescribeRunningLogRecordsRequest::~DescribeRunningLogRecordsRequest()
{}

long DescribeRunningLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeRunningLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setCoreParameter("SQLId", std::to_string(sQLId));
}

long DescribeRunningLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRunningLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRunningLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRunningLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRunningLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRunningLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRunningLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRunningLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeRunningLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRunningLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRunningLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRunningLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRunningLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRunningLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRunningLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeRunningLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string DescribeRunningLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRunningLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRunningLogRecordsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRunningLogRecordsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeRunningLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRunningLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRunningLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeRunningLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeRunningLogRecordsRequest::getRoleType()const
{
	return roleType_;
}

void DescribeRunningLogRecordsRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setCoreParameter("RoleType", roleType);
}

std::string DescribeRunningLogRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeRunningLogRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

