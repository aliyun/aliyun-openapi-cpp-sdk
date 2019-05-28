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

#include <alibabacloud/rds/model/DescribeSlowLogsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSlowLogsRequest;

DescribeSlowLogsRequest::DescribeSlowLogsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSlowLogs")
{}

DescribeSlowLogsRequest::~DescribeSlowLogsRequest()
{}

long DescribeSlowLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSlowLogsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSlowLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSlowLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSlowLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSlowLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSlowLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSlowLogsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeSlowLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSlowLogsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeSlowLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSlowLogsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSlowLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSlowLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSlowLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSlowLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSlowLogsRequest::getSortKey()const
{
	return sortKey_;
}

void DescribeSlowLogsRequest::setSortKey(const std::string& sortKey)
{
	sortKey_ = sortKey;
	setCoreParameter("SortKey", sortKey);
}

std::string DescribeSlowLogsRequest::getDBName()const
{
	return dBName_;
}

void DescribeSlowLogsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

int DescribeSlowLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSlowLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSlowLogsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSlowLogsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

