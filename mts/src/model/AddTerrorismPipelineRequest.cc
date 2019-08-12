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

#include <alibabacloud/mts/model/AddTerrorismPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddTerrorismPipelineRequest;

AddTerrorismPipelineRequest::AddTerrorismPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddTerrorismPipeline")
{}

AddTerrorismPipelineRequest::~AddTerrorismPipelineRequest()
{}

long AddTerrorismPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddTerrorismPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddTerrorismPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddTerrorismPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddTerrorismPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddTerrorismPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddTerrorismPipelineRequest::getName()const
{
	return name_;
}

void AddTerrorismPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string AddTerrorismPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void AddTerrorismPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", notifyConfig);
}

long AddTerrorismPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void AddTerrorismPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int AddTerrorismPipelineRequest::getPriority()const
{
	return priority_;
}

void AddTerrorismPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string AddTerrorismPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddTerrorismPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

