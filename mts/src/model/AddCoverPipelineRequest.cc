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

#include <alibabacloud/mts/model/AddCoverPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddCoverPipelineRequest;

AddCoverPipelineRequest::AddCoverPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddCoverPipeline")
{}

AddCoverPipelineRequest::~AddCoverPipelineRequest()
{}

long AddCoverPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddCoverPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddCoverPipelineRequest::getRole()const
{
	return role_;
}

void AddCoverPipelineRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", std::to_string(role));
}

std::string AddCoverPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddCoverPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddCoverPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddCoverPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AddCoverPipelineRequest::getName()const
{
	return name_;
}

void AddCoverPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddCoverPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void AddCoverPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setCoreParameter("NotifyConfig", std::to_string(notifyConfig));
}

long AddCoverPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCoverPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddCoverPipelineRequest::getPriority()const
{
	return priority_;
}

void AddCoverPipelineRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string AddCoverPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddCoverPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

