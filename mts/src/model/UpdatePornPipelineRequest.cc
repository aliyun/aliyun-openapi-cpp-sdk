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

#include <alibabacloud/mts/model/UpdatePornPipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdatePornPipelineRequest;

UpdatePornPipelineRequest::UpdatePornPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdatePornPipeline")
{}

UpdatePornPipelineRequest::~UpdatePornPipelineRequest()
{}

long UpdatePornPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdatePornPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdatePornPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdatePornPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdatePornPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdatePornPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UpdatePornPipelineRequest::getName()const
{
	return name_;
}

void UpdatePornPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdatePornPipelineRequest::getState()const
{
	return state_;
}

void UpdatePornPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string UpdatePornPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void UpdatePornPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", notifyConfig);
}

long UpdatePornPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdatePornPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int UpdatePornPipelineRequest::getPriority()const
{
	return priority_;
}

void UpdatePornPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string UpdatePornPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdatePornPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdatePornPipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void UpdatePornPipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

