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

#include <alibabacloud/mts/model/UpdateTerrorismPipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdateTerrorismPipelineRequest;

UpdateTerrorismPipelineRequest::UpdateTerrorismPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateTerrorismPipeline")
{}

UpdateTerrorismPipelineRequest::~UpdateTerrorismPipelineRequest()
{}

long UpdateTerrorismPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateTerrorismPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateTerrorismPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateTerrorismPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateTerrorismPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateTerrorismPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UpdateTerrorismPipelineRequest::getName()const
{
	return name_;
}

void UpdateTerrorismPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateTerrorismPipelineRequest::getState()const
{
	return state_;
}

void UpdateTerrorismPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string UpdateTerrorismPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void UpdateTerrorismPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", notifyConfig);
}

long UpdateTerrorismPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateTerrorismPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int UpdateTerrorismPipelineRequest::getPriority()const
{
	return priority_;
}

void UpdateTerrorismPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string UpdateTerrorismPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateTerrorismPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateTerrorismPipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void UpdateTerrorismPipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setCoreParameter("PipelineId", pipelineId);
}

