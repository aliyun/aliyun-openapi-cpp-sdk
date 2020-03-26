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

#include <alibabacloud/mts/model/UpdateAsrPipelineRequest.h>

using AlibabaCloud::Mts::Model::UpdateAsrPipelineRequest;

UpdateAsrPipelineRequest::UpdateAsrPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "UpdateAsrPipeline")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAsrPipelineRequest::~UpdateAsrPipelineRequest()
{}

long UpdateAsrPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateAsrPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateAsrPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateAsrPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateAsrPipelineRequest::getState()const
{
	return state_;
}

void UpdateAsrPipelineRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string UpdateAsrPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateAsrPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateAsrPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateAsrPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string UpdateAsrPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void UpdateAsrPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setParameter("NotifyConfig", notifyConfig);
}

long UpdateAsrPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateAsrPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int UpdateAsrPipelineRequest::getPriority()const
{
	return priority_;
}

void UpdateAsrPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string UpdateAsrPipelineRequest::getPipelineId()const
{
	return pipelineId_;
}

void UpdateAsrPipelineRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

std::string UpdateAsrPipelineRequest::getName()const
{
	return name_;
}

void UpdateAsrPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

