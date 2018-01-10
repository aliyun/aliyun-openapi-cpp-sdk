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

#include <alibabacloud/rds/model/DescribeRealtimeDiagnosesRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRealtimeDiagnosesRequest::DescribeRealtimeDiagnosesRequest() :
	RdsRequest("DescribeRealtimeDiagnoses")
{}

DescribeRealtimeDiagnosesRequest::~DescribeRealtimeDiagnosesRequest()
{}

long DescribeRealtimeDiagnosesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRealtimeDiagnosesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRealtimeDiagnosesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRealtimeDiagnosesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRealtimeDiagnosesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRealtimeDiagnosesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeRealtimeDiagnosesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRealtimeDiagnosesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRealtimeDiagnosesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRealtimeDiagnosesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeRealtimeDiagnosesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeRealtimeDiagnosesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeRealtimeDiagnosesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRealtimeDiagnosesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeRealtimeDiagnosesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRealtimeDiagnosesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRealtimeDiagnosesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRealtimeDiagnosesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRealtimeDiagnosesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRealtimeDiagnosesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

