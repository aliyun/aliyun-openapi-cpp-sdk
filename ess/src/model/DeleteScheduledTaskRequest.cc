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

#include <alibabacloud/ess/model/DeleteScheduledTaskRequest.h>

using AlibabaCloud::Ess::Model::DeleteScheduledTaskRequest;

DeleteScheduledTaskRequest::DeleteScheduledTaskRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DeleteScheduledTask")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteScheduledTaskRequest::~DeleteScheduledTaskRequest()
{}

std::string DeleteScheduledTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteScheduledTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteScheduledTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteScheduledTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteScheduledTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScheduledTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteScheduledTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScheduledTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteScheduledTaskRequest::getScheduledTaskId()const
{
	return scheduledTaskId_;
}

void DeleteScheduledTaskRequest::setScheduledTaskId(const std::string& scheduledTaskId)
{
	scheduledTaskId_ = scheduledTaskId;
	setCoreParameter("ScheduledTaskId", scheduledTaskId);
}

