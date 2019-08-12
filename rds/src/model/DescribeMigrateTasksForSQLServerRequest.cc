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

#include <alibabacloud/rds/model/DescribeMigrateTasksForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::DescribeMigrateTasksForSQLServerRequest;

DescribeMigrateTasksForSQLServerRequest::DescribeMigrateTasksForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeMigrateTasksForSQLServer")
{}

DescribeMigrateTasksForSQLServerRequest::~DescribeMigrateTasksForSQLServerRequest()
{}

long DescribeMigrateTasksForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMigrateTasksForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeMigrateTasksForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMigrateTasksForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int DescribeMigrateTasksForSQLServerRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMigrateTasksForSQLServerRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeMigrateTasksForSQLServerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeMigrateTasksForSQLServerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeMigrateTasksForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeMigrateTasksForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeMigrateTasksForSQLServerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeMigrateTasksForSQLServerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeMigrateTasksForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMigrateTasksForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeMigrateTasksForSQLServerRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMigrateTasksForSQLServerRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeMigrateTasksForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMigrateTasksForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

