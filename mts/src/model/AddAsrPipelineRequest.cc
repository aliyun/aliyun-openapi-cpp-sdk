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

#include <alibabacloud/mts/model/AddAsrPipelineRequest.h>

using AlibabaCloud::Mts::Model::AddAsrPipelineRequest;

AddAsrPipelineRequest::AddAsrPipelineRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddAsrPipeline")
{}

AddAsrPipelineRequest::~AddAsrPipelineRequest()
{}

long AddAsrPipelineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddAsrPipelineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddAsrPipelineRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddAsrPipelineRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddAsrPipelineRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddAsrPipelineRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AddAsrPipelineRequest::getName()const
{
	return name_;
}

void AddAsrPipelineRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AddAsrPipelineRequest::getNotifyConfig()const
{
	return notifyConfig_;
}

void AddAsrPipelineRequest::setNotifyConfig(const std::string& notifyConfig)
{
	notifyConfig_ = notifyConfig;
	setParameter("NotifyConfig", notifyConfig);
}

long AddAsrPipelineRequest::getOwnerId()const
{
	return ownerId_;
}

void AddAsrPipelineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int AddAsrPipelineRequest::getPriority()const
{
	return priority_;
}

void AddAsrPipelineRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string AddAsrPipelineRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddAsrPipelineRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

