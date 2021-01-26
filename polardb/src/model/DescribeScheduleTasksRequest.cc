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

#include <alibabacloud/polardb/model/DescribeScheduleTasksRequest.h>

using AlibabaCloud::Polardb::Model::DescribeScheduleTasksRequest;

DescribeScheduleTasksRequest::DescribeScheduleTasksRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeScheduleTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScheduleTasksRequest::~DescribeScheduleTasksRequest()
{}

long DescribeScheduleTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeScheduleTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeScheduleTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScheduleTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScheduleTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScheduleTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScheduleTasksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeScheduleTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeScheduleTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScheduleTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScheduleTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeScheduleTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeScheduleTasksRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeScheduleTasksRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeScheduleTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeScheduleTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeScheduleTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScheduleTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScheduleTasksRequest::getTaskAction()const
{
	return taskAction_;
}

void DescribeScheduleTasksRequest::setTaskAction(const std::string& taskAction)
{
	taskAction_ = taskAction;
	setParameter("TaskAction", taskAction);
}

std::string DescribeScheduleTasksRequest::getStatus()const
{
	return status_;
}

void DescribeScheduleTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

