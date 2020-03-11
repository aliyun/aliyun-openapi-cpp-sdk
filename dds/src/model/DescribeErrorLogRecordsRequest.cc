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

#include <alibabacloud/dds/model/DescribeErrorLogRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeErrorLogRecordsRequest;

DescribeErrorLogRecordsRequest::DescribeErrorLogRecordsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeErrorLogRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeErrorLogRecordsRequest::~DescribeErrorLogRecordsRequest()
{}

long DescribeErrorLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeErrorLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeErrorLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeErrorLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeErrorLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeErrorLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeErrorLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeErrorLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeErrorLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeErrorLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeErrorLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeErrorLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeErrorLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeErrorLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeErrorLogRecordsRequest::getRoleType()const
{
	return roleType_;
}

void DescribeErrorLogRecordsRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setParameter("RoleType", roleType);
}

std::string DescribeErrorLogRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeErrorLogRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

long DescribeErrorLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeErrorLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setParameter("SQLId", std::to_string(sQLId));
}

std::string DescribeErrorLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeErrorLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeErrorLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeErrorLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeErrorLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeErrorLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeErrorLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeErrorLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeErrorLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeErrorLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

