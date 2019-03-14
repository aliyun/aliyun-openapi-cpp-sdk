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

#include <alibabacloud/cbn/model/ModifyCenAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenAttributeRequest;

ModifyCenAttributeRequest::ModifyCenAttributeRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ModifyCenAttribute")
{}

ModifyCenAttributeRequest::~ModifyCenAttributeRequest()
{}

std::string ModifyCenAttributeRequest::getProtectionLevel()const
{
	return protectionLevel_;
}

void ModifyCenAttributeRequest::setProtectionLevel(const std::string& protectionLevel)
{
	protectionLevel_ = protectionLevel;
	setParameter("ProtectionLevel", protectionLevel);
}

long ModifyCenAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCenAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCenAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCenAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCenAttributeRequest::getCenId()const
{
	return cenId_;
}

void ModifyCenAttributeRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string ModifyCenAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCenAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyCenAttributeRequest::getName()const
{
	return name_;
}

void ModifyCenAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyCenAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyCenAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long ModifyCenAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCenAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

