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

#include <alibabacloud/rds/model/DescribeFilesForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::DescribeFilesForSQLServerRequest;

DescribeFilesForSQLServerRequest::DescribeFilesForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeFilesForSQLServer")
{}

DescribeFilesForSQLServerRequest::~DescribeFilesForSQLServerRequest()
{}

long DescribeFilesForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFilesForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeFilesForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFilesForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFilesForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFilesForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeFilesForSQLServerRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeFilesForSQLServerRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeFilesForSQLServerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeFilesForSQLServerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeFilesForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeFilesForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeFilesForSQLServerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeFilesForSQLServerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeFilesForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFilesForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeFilesForSQLServerRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFilesForSQLServerRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeFilesForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFilesForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

