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

#include <alibabacloud/ecs/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAttribute")
{}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest()
{}

long ModifyInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

bool ModifyInstanceAttributeRequest::getRecyclable()const
{
	return recyclable_;
}

void ModifyInstanceAttributeRequest::setRecyclable(bool recyclable)
{
	recyclable_ = recyclable;
	setCoreParameter("Recyclable", recyclable ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyInstanceAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyInstanceAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string ModifyInstanceAttributeRequest::getCreditSpecification()const
{
	return creditSpecification_;
}

void ModifyInstanceAttributeRequest::setCreditSpecification(const std::string& creditSpecification)
{
	creditSpecification_ = creditSpecification;
	setCoreParameter("CreditSpecification", std::to_string(creditSpecification));
}

long ModifyInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyInstanceAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

bool ModifyInstanceAttributeRequest::getDeletionProtection()const
{
	return deletionProtection_;
}

void ModifyInstanceAttributeRequest::setDeletionProtection(bool deletionProtection)
{
	deletionProtection_ = deletionProtection;
	setCoreParameter("DeletionProtection", deletionProtection ? "true" : "false");
}

std::string ModifyInstanceAttributeRequest::getUserData()const
{
	return userData_;
}

void ModifyInstanceAttributeRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setCoreParameter("UserData", std::to_string(userData));
}

std::string ModifyInstanceAttributeRequest::getPassword()const
{
	return password_;
}

void ModifyInstanceAttributeRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", std::to_string(password));
}

std::string ModifyInstanceAttributeRequest::getHostName()const
{
	return hostName_;
}

void ModifyInstanceAttributeRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", std::to_string(hostName));
}

std::string ModifyInstanceAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string ModifyInstanceAttributeRequest::getInstanceName()const
{
	return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", std::to_string(instanceName));
}

