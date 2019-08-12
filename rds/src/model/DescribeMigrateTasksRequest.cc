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

#include <alibabacloud/rds/model/DescribeMigrateTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeMigrateTasksRequest;

DescribeMigrateTasksRequest::DescribeMigrateTasksRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeMigrateTasks")
{}

DescribeMigrateTasksRequest::~DescribeMigrateTasksRequest()
{}

long DescribeMigrateTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMigrateTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMigrateTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMigrateTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int DescribeMigrateTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMigrateTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMigrateTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeMigrateTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeMigrateTasksRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeMigrateTasksRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeMigrateTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeMigrateTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeMigrateTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMigrateTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeMigrateTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMigrateTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeMigrateTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMigrateTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

