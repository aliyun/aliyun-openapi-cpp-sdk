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

#include <alibabacloud/mts/model/AddPornPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddPornPipelineRequest;

AddPornPipelineRequest::AddPornPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddPornPipeline")
{}

AddPornPipelineRequest::~AddPornPipelineRequest()
{}

long AddPornPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddPornPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddPornPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddPornPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddPornPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddPornPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AddPornPipelineRequest::getName()const
{
	return name_;
}

void AddPornPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddPornPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void AddPornPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", std::to_string(notifyConfig));
}

long AddPornPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void AddPornPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int AddPornPipelineRequest::getPriority()const
{
	return priority_;
}

void AddPornPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string AddPornPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddPornPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

