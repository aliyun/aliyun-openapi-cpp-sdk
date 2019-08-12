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

#include <alibabacloud/mts/model/UpdateCensorPipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdateCensorPipelineRequest;

UpdateCensorPipelineRequest::UpdateCensorPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateCensorPipeline")
{}

UpdateCensorPipelineRequest::~UpdateCensorPipelineRequest()
{}

long UpdateCensorPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateCensorPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateCensorPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateCensorPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateCensorPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateCensorPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string UpdateCensorPipelineRequest::getName()const
{
	return name_;
}

void UpdateCensorPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string UpdateCensorPipelineRequest::getState()const
{
	return state_;
}

void UpdateCensorPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string UpdateCensorPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void UpdateCensorPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", std::to_string(notifyConfig));
}

long UpdateCensorPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCensorPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int UpdateCensorPipelineRequest::getPriority()const
{
	return priority_;
}

void UpdateCensorPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string UpdateCensorPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateCensorPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateCensorPipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void UpdateCensorPipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

