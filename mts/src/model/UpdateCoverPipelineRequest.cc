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

#include <alibabacloud/mts/model/UpdateCoverPipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdateCoverPipelineRequest;

UpdateCoverPipelineRequest::UpdateCoverPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateCoverPipeline")
{}

UpdateCoverPipelineRequest::~UpdateCoverPipelineRequest()
{}

long UpdateCoverPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateCoverPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateCoverPipelineRequest::getRole()const
{
	return role_;
}

void UpdateCoverPipelineRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", std::to_string(role));
}

std::string UpdateCoverPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateCoverPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpdateCoverPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateCoverPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string UpdateCoverPipelineRequest::getName()const
{
	return name_;
}

void UpdateCoverPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string UpdateCoverPipelineRequest::getState()const
{
	return state_;
}

void UpdateCoverPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", std::to_string(state));
}

std::string UpdateCoverPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void UpdateCoverPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", std::to_string(notifyConfig));
}

long UpdateCoverPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCoverPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int UpdateCoverPipelineRequest::getPriority()const
{
	return priority_;
}

void UpdateCoverPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string UpdateCoverPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateCoverPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateCoverPipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void UpdateCoverPipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", std::to_string(pipelineId));
}

