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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSlowLogRecordsRequest::~DescribeSlowLogRecordsRequest()
{}

long DescribeSlowLogRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSlowLogRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSlowLogRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeSlowLogRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSlowLogRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSlowLogRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSlowLogRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSlowLogRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeSlowLogRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSlowLogRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSlowLogRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSlowLogRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSlowLogRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeSlowLogRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

long DescribeSlowLogRecordsRequest::getSQLId()const
{
	return sQLId_;
}

void DescribeSlowLogRecordsRequest::setSQLId(long sQLId)
{
	sQLId_ = sQLId;
	setParameter("SQLId", std::to_string(sQLId));
}

std::string DescribeSlowLogRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSlowLogRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSlowLogRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSlowLogRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSlowLogRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeSlowLogRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSlowLogRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSlowLogRecordsRequest::getDBName()const
{
	return dBName_;
}

void DescribeSlowLogRecordsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string DescribeSlowLogRecordsRequest::getOrderType()const
{
	return orderType_;
}

void DescribeSlowLogRecordsRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

