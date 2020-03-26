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

#include <alibabacloud/dyvmsapi/model/StopRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::StopRobotTaskRequest;

StopRobotTaskRequest::StopRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "StopRobotTask")
{
	setMethod(HttpRequest::Method::Post);
}

StopRobotTaskRequest::~StopRobotTaskRequest()
{}

long StopRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StopRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long StopRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StopRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long StopRobotTaskRequest::getTaskId()const
{
	return taskId_;
}

void StopRobotTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

