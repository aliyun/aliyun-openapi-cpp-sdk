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

#include <alibabacloud/r-kvstore/model/DescribeRunningLogRecordsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeRunningLogRecordsRequest;

DescribeRunningLogRecordsRequest::DescribeRunningLogRecordsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeRunningLogRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRunningLogRecordsRequest::~DescribeRunningLogRecordsRequest()
{}

long DescribeRunningLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRunningLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRunningLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeRunningLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRunningLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRunningLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRunningLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRunningLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRunningLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeRunningLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRunningLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRunningLogRecordsRequest::getRoleType()const
{
	return roleType_;
}

void DescribeRunningLogRecordsRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setParameter("RoleType", roleType);
}

std::string DescribeRunningLogRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeRunningLogRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

long DescribeRunningLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeRunningLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setParameter("SQLId", std::to_string(sQLId));
}

std::string DescribeRunningLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRunningLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRunningLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRunningLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRunningLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRunningLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeRunningLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRunningLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRunningLogRecordsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeRunningLogRecordsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeRunningLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeRunningLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

