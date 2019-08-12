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

#include <alibabacloud/rds/model/DescribeTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeTasksRequest;

DescribeTasksRequest::DescribeTasksRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeTasks")
{}

DescribeTasksRequest::~DescribeTasksRequest()
{}

long DescribeTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int DescribeTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeTasksRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeTasksRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeTasksRequest::getTaskAction()const
{
	return taskAction_;
}

void DescribeTasksRequest::setTaskAction(const std::string& taskAction)
{
	taskAction_ = taskAction;
	setCoreParameter("TaskAction", std::to_string(taskAction));
}

std::string DescribeTasksRequest::getStatus()const
{
	return status_;
}

void DescribeTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

