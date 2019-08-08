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

#include <alibabacloud/dyvmsapi/model/CancelOrderRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CancelOrderRobotTaskRequest;

CancelOrderRobotTaskRequest::CancelOrderRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CancelOrderRobotTask")
{}

CancelOrderRobotTaskRequest::~CancelOrderRobotTaskRequest()
{}

long CancelOrderRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelOrderRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelOrderRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelOrderRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CancelOrderRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelOrderRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long CancelOrderRobotTaskRequest::getTaskId()const
{
	return taskId_;
}

void CancelOrderRobotTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string CancelOrderRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelOrderRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

