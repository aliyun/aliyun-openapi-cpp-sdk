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

#include <alibabacloud/rds/model/DescribeImportsForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::DescribeImportsForSQLServerRequest;

DescribeImportsForSQLServerRequest::DescribeImportsForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeImportsForSQLServer")
{}

DescribeImportsForSQLServerRequest::~DescribeImportsForSQLServerRequest()
{}

long DescribeImportsForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImportsForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeImportsForSQLServerRequest::getImportId()const
{
	return importId_;
}

void DescribeImportsForSQLServerRequest::setImportId(int importId)
{
	importId_ = importId;
	setParameter("ImportId", std::to_string(importId));
}

std::string DescribeImportsForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImportsForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImportsForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeImportsForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeImportsForSQLServerRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImportsForSQLServerRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeImportsForSQLServerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeImportsForSQLServerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeImportsForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeImportsForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeImportsForSQLServerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeImportsForSQLServerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeImportsForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImportsForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeImportsForSQLServerRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeImportsForSQLServerRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeImportsForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeImportsForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

