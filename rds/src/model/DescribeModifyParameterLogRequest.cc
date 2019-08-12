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

#include <alibabacloud/rds/model/DescribeModifyParameterLogRequest.h>

using AlibabaCloud::Rds::Model::DescribeModifyParameterLogRequest;

DescribeModifyParameterLogRequest::DescribeModifyParameterLogRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeModifyParameterLog")
{}

DescribeModifyParameterLogRequest::~DescribeModifyParameterLogRequest()
{}

long DescribeModifyParameterLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeModifyParameterLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeModifyParameterLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeModifyParameterLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeModifyParameterLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeModifyParameterLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeModifyParameterLogRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeModifyParameterLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeModifyParameterLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeModifyParameterLogRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeModifyParameterLogRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeModifyParameterLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeModifyParameterLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeModifyParameterLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeModifyParameterLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeModifyParameterLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeModifyParameterLogRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeModifyParameterLogRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeModifyParameterLogRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

