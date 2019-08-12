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

#include <alibabacloud/r-kvstore/model/DescribeAuditRecordsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeAuditRecordsRequest;

DescribeAuditRecordsRequest::DescribeAuditRecordsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeAuditRecords")
{}

DescribeAuditRecordsRequest::~DescribeAuditRecordsRequest()
{}

long DescribeAuditRecordsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAuditRecordsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAuditRecordsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAuditRecordsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAuditRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAuditRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAuditRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAuditRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeAuditRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAuditRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeAuditRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAuditRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAuditRecordsRequest::getQueryKeywords()const
{
	return queryKeywords_;
}

void DescribeAuditRecordsRequest::setQueryKeywords(const std::string& queryKeywords)
{
	queryKeywords_ = queryKeywords;
	setCoreParameter("QueryKeywords", queryKeywords);
}

int DescribeAuditRecordsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAuditRecordsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeAuditRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAuditRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAuditRecordsRequest::getHostAddress()const
{
	return hostAddress_;
}

void DescribeAuditRecordsRequest::setHostAddress(const std::string& hostAddress)
{
	hostAddress_ = hostAddress;
	setCoreParameter("HostAddress", hostAddress);
}

std::string DescribeAuditRecordsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAuditRecordsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeAuditRecordsRequest::getAccountName()const
{
	return accountName_;
}

void DescribeAuditRecordsRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string DescribeAuditRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuditRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAuditRecordsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAuditRecordsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAuditRecordsRequest::getDatabaseName()const
{
	return databaseName_;
}

void DescribeAuditRecordsRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setCoreParameter("DatabaseName", databaseName);
}

int DescribeAuditRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuditRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAuditRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeAuditRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

