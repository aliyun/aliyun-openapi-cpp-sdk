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

#include <alibabacloud/rds/model/DescribeErrorLogsRequest.h>

using AlibabaCloud::Rds::Model::DescribeErrorLogsRequest;

DescribeErrorLogsRequest::DescribeErrorLogsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeErrorLogs")
{}

DescribeErrorLogsRequest::~DescribeErrorLogsRequest()
{}

long DescribeErrorLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeErrorLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeErrorLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeErrorLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeErrorLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeErrorLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeErrorLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeErrorLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeErrorLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeErrorLogsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeErrorLogsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeErrorLogsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeErrorLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeErrorLogsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeErrorLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeErrorLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeErrorLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeErrorLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeErrorLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeErrorLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

