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

#include <alibabacloud/cbn/model/CreateCenRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenRequest;

CreateCenRequest::CreateCenRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateCen")
{}

CreateCenRequest::~CreateCenRequest()
{}

std::string CreateCenRequest::getProtectionLevel()const
{
	return protectionLevel_;
}

void CreateCenRequest::setProtectionLevel(const std::string& protectionLevel)
{
	protectionLevel_ = protectionLevel;
	setCoreParameter("ProtectionLevel", protectionLevel);
}

long CreateCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCenRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateCenRequest::getName()const
{
	return name_;
}

void CreateCenRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateCenRequest::getDescription()const
{
	return description_;
}

void CreateCenRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateCenRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

