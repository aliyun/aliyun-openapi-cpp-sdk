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

#include <alibabacloud/dds/model/DescribeSlowLogRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeSlowLogRecordsRequest;

DescribeSlowLogRecordsRequest::DescribeSlowLogRecordsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeSlowLogRecords")
{}

DescribeSlowLogRecordsRequest::~DescribeSlowLogRecordsRequest()
{}

long DescribeSlowLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeSlowLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setCoreParameter("SQLId", sQLId);
}

long DescribeSlowLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSlowLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSlowLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSlowLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSlowLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSlowLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSlowLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSlowLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeSlowLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSlowLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeSlowLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeSlowLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSlowLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSlowLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeSlowLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string DescribeSlowLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSlowLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeSlowLogRecordsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSlowLogRecordsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeSlowLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSlowLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSlowLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSlowLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSlowLogRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeSlowLogRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

