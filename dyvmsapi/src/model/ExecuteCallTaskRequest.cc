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

#include <alibabacloud/dyvmsapi/model/ExecuteCallTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ExecuteCallTaskRequest;

ExecuteCallTaskRequest::ExecuteCallTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ExecuteCallTask")
{
	setMethod(HttpRequest::Method::Post);
}

ExecuteCallTaskRequest::~ExecuteCallTaskRequest()
{}

long ExecuteCallTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExecuteCallTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExecuteCallTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExecuteCallTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long ExecuteCallTaskRequest::getTaskId()const
{
	return taskId_;
}

void ExecuteCallTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

std::string ExecuteCallTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExecuteCallTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ExecuteCallTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void ExecuteCallTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExecuteCallTaskRequest::getFireTime()const
{
	return fireTime_;
}

void ExecuteCallTaskRequest::setFireTime(const std::string& fireTime)
{
	fireTime_ = fireTime;
	setParameter("FireTime", fireTime);
}

std::string ExecuteCallTaskRequest::getStatus()const
{
	return status_;
}

void ExecuteCallTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

