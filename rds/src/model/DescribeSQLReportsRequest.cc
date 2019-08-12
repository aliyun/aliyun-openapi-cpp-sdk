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

#include <alibabacloud/rds/model/DescribeSQLReportsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLReportsRequest;

DescribeSQLReportsRequest::DescribeSQLReportsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLReports")
{}

DescribeSQLReportsRequest::~DescribeSQLReportsRequest()
{}

long DescribeSQLReportsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLReportsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSQLReportsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLReportsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSQLReportsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLReportsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeSQLReportsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLReportsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSQLReportsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLReportsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeSQLReportsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLReportsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeSQLReportsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLReportsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeSQLReportsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLReportsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeSQLReportsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLReportsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeSQLReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

