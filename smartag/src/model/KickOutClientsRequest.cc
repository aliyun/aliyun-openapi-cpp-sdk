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

#include <alibabacloud/smartag/model/KickOutClientsRequest.h>

using AlibabaCloud::Smartag::Model::KickOutClientsRequest;

KickOutClientsRequest::KickOutClientsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "KickOutClients")
{}

KickOutClientsRequest::~KickOutClientsRequest()
{}

long KickOutClientsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void KickOutClientsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string KickOutClientsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void KickOutClientsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string KickOutClientsRequest::getRegionId()const
{
	return regionId_;
}

void KickOutClientsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string KickOutClientsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void KickOutClientsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string KickOutClientsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void KickOutClientsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long KickOutClientsRequest::getOwnerId()const
{
	return ownerId_;
}

void KickOutClientsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string KickOutClientsRequest::getUsername()const
{
	return username_;
}

void KickOutClientsRequest::setUsername(const std::string& username)
{
	username_ = username;
	setCoreParameter("Username", username);
}

