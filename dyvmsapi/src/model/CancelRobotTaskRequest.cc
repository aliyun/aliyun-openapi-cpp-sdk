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

#include <alibabacloud/dyvmsapi/model/CancelRobotTaskRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CancelRobotTaskRequest;

CancelRobotTaskRequest::CancelRobotTaskRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CancelRobotTask")
{}

CancelRobotTaskRequest::~CancelRobotTaskRequest()
{}

long CancelRobotTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelRobotTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CancelRobotTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelRobotTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long CancelRobotTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelRobotTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long CancelRobotTaskRequest::getTaskId()const
{
	return taskId_;
}

void CancelRobotTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string CancelRobotTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelRobotTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

