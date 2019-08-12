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

#include <alibabacloud/rds/model/DescribeSQLLogReportsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLLogReportsRequest;

DescribeSQLLogReportsRequest::DescribeSQLLogReportsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLLogReports")
{}

DescribeSQLLogReportsRequest::~DescribeSQLLogReportsRequest()
{}

long DescribeSQLLogReportsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLLogReportsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSQLLogReportsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLLogReportsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSQLLogReportsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLLogReportsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeSQLLogReportsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLLogReportsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSQLLogReportsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLLogReportsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeSQLLogReportsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogReportsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeSQLLogReportsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLLogReportsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeSQLLogReportsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLLogReportsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeSQLLogReportsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogReportsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeSQLLogReportsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogReportsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

