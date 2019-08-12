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

#include <alibabacloud/dyvmsapi/model/QueryRobotTaskListRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRobotTaskListRequest;

QueryRobotTaskListRequest::QueryRobotTaskListRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRobotTaskList")
{}

QueryRobotTaskListRequest::~QueryRobotTaskListRequest()
{}

long QueryRobotTaskListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRobotTaskListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryRobotTaskListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRobotTaskListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int QueryRobotTaskListRequest::getPageNo()const
{
	return pageNo_;
}

void QueryRobotTaskListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

int QueryRobotTaskListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryRobotTaskListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryRobotTaskListRequest::getTaskName()const
{
	return taskName_;
}

void QueryRobotTaskListRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", std::to_string(taskName));
}

std::string QueryRobotTaskListRequest::getTime()const
{
	return time_;
}

void QueryRobotTaskListRequest::setTime(const std::string& time)
{
	time_ = time;
	setCoreParameter("Time", std::to_string(time));
}

long QueryRobotTaskListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRobotTaskListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryRobotTaskListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRobotTaskListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string QueryRobotTaskListRequest::getStatus()const
{
	return status_;
}

void QueryRobotTaskListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

