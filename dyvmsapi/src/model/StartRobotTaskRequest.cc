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

#include <alibabacloud/dyvmsapi/model/StartRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::StartRobotTaskRequest;

StartRobotTaskRequest::StartRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "StartRobotTask")
{}

StartRobotTaskRequest::~StartRobotTaskRequest()
{}

long StartRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartRobotTaskRequest::getScheduleTime()const
{
	return scheduleTime_;
}

void StartRobotTaskRequest::setScheduleTime(const std::string& scheduleTime)
{
	scheduleTime_ = scheduleTime;
	setCoreParameter("ScheduleTime", scheduleTime);
}

long StartRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long StartRobotTaskRequest::getTaskId()const
{
	return taskId_;
}

void StartRobotTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string StartRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

