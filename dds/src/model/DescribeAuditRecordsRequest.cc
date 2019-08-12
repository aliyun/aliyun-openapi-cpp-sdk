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

#include <alibabacloud/dds/model/DescribeAuditRecordsRequest.h>

using AlibabaCloud::Dds::Model::DescribeAuditRecordsRequest;

DescribeAuditRecordsRequest::DescribeAuditRecordsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAuditRecords")
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
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeAuditRecordsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAuditRecordsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeAuditRecordsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAuditRecordsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeAuditRecordsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAuditRecordsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
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
	setCoreParameter("QueryKeywords", std::to_string(queryKeywords));
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
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeAuditRecordsRequest::getDatabase()const
{
	return database_;
}

void DescribeAuditRecordsRequest::setDatabase(const std::string& database)
{
	database_ = database;
	setCoreParameter("Database", std::to_string(database));
}

std::string DescribeAuditRecordsRequest::getForm()const
{
	return form_;
}

void DescribeAuditRecordsRequest::setForm(const std::string& form)
{
	form_ = form;
	setCoreParameter("Form", std::to_string(form));
}

std::string DescribeAuditRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuditRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeAuditRecordsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAuditRecordsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
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

std::string DescribeAuditRecordsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAuditRecordsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeAuditRecordsRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeAuditRecordsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string DescribeAuditRecordsRequest::getUser()const
{
	return user_;
}

void DescribeAuditRecordsRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", std::to_string(user));
}

