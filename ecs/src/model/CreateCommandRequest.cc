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

#include <alibabacloud/ecs/model/CreateCommandRequest.h>

using AlibabaCloud::Ecs::Model::CreateCommandRequest;

CreateCommandRequest::CreateCommandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateCommand")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCommandRequest::~CreateCommandRequest()
{}

long CreateCommandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCommandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCommandRequest::getWorkingDir()const
{
	return workingDir_;
}

void CreateCommandRequest::setWorkingDir(const std::string& workingDir)
{
	workingDir_ = workingDir;
	setParameter("WorkingDir", workingDir);
}

std::string CreateCommandRequest::getDescription()const
{
	return description_;
}

void CreateCommandRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateCommandRequest::getType()const
{
	return type_;
}

void CreateCommandRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateCommandRequest::getCommandContent()const
{
	return commandContent_;
}

void CreateCommandRequest::setCommandContent(const std::string& commandContent)
{
	commandContent_ = commandContent;
	setParameter("CommandContent", commandContent);
}

long CreateCommandRequest::getTimeout()const
{
	return timeout_;
}

void CreateCommandRequest::setTimeout(long timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

std::string CreateCommandRequest::getRegionId()const
{
	return regionId_;
}

void CreateCommandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateCommandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCommandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCommandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCommandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateCommandRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCommandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCommandRequest::getName()const
{
	return name_;
}

void CreateCommandRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool CreateCommandRequest::getEnableParameter()const
{
	return enableParameter_;
}

void CreateCommandRequest::setEnableParameter(bool enableParameter)
{
	enableParameter_ = enableParameter;
	setParameter("EnableParameter", enableParameter ? "true" : "false");
}

