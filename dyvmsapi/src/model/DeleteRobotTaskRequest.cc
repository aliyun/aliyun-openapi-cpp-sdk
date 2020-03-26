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

#include <alibabacloud/dyvmsapi/model/DeleteRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::DeleteRobotTaskRequest;

DeleteRobotTaskRequest::DeleteRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "DeleteRobotTask")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRobotTaskRequest::~DeleteRobotTaskRequest()
{}

long DeleteRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DeleteRobotTaskRequest::getTaskId()const
{
	return taskId_;
}

void DeleteRobotTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

