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

#include <alibabacloud/rds/model/DescribeSQLInjectionInfosRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLInjectionInfosRequest;

DescribeSQLInjectionInfosRequest::DescribeSQLInjectionInfosRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLInjectionInfos")
{}

DescribeSQLInjectionInfosRequest::~DescribeSQLInjectionInfosRequest()
{}

long DescribeSQLInjectionInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLInjectionInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSQLInjectionInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLInjectionInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSQLInjectionInfosRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLInjectionInfosRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeSQLInjectionInfosRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLInjectionInfosRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSQLInjectionInfosRequest::getEndTime()const
{
	return endTime_;
}

void DescribeSQLInjectionInfosRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeSQLInjectionInfosRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLInjectionInfosRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSQLInjectionInfosRequest::getStartTime()const
{
	return startTime_;
}

void DescribeSQLInjectionInfosRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeSQLInjectionInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLInjectionInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSQLInjectionInfosRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLInjectionInfosRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSQLInjectionInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLInjectionInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

