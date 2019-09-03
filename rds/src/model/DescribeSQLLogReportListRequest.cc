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

#include <alibabacloud/rds/model/DescribeSQLLogReportListRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLLogReportListRequest;

DescribeSQLLogReportListRequest::DescribeSQLLogReportListRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLLogReportList")
{}

DescribeSQLLogReportListRequest::~DescribeSQLLogReportListRequest()
{}

long DescribeSQLLogReportListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLLogReportListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSQLLogReportListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLLogReportListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeSQLLogReportListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogReportListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSQLLogReportListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogReportListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int DescribeSQLLogReportListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLLogReportListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSQLLogReportListRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogReportListRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSQLLogReportListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLLogReportListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSQLLogReportListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLLogReportListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSQLLogReportListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLLogReportListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeSQLLogReportListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLLogReportListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

