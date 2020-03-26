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

#include <alibabacloud/vpc/model/ModifySnatEntryRequest.h>

using AlibabaCloud::Vpc::Model::ModifySnatEntryRequest;

ModifySnatEntryRequest::ModifySnatEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifySnatEntry")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySnatEntryRequest::~ModifySnatEntryRequest()
{}

long ModifySnatEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySnatEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySnatEntryRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySnatEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifySnatEntryRequest::getSnatIp()const
{
	return snatIp_;
}

void ModifySnatEntryRequest::setSnatIp(const std::string& snatIp)
{
	snatIp_ = snatIp;
	setParameter("SnatIp", snatIp);
}

std::string ModifySnatEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifySnatEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySnatEntryRequest::getSnatEntryId()const
{
	return snatEntryId_;
}

void ModifySnatEntryRequest::setSnatEntryId(const std::string& snatEntryId)
{
	snatEntryId_ = snatEntryId;
	setParameter("SnatEntryId", snatEntryId);
}

std::string ModifySnatEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySnatEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySnatEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySnatEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifySnatEntryRequest::getSnatTableId()const
{
	return snatTableId_;
}

void ModifySnatEntryRequest::setSnatTableId(const std::string& snatTableId)
{
	snatTableId_ = snatTableId;
	setParameter("SnatTableId", snatTableId);
}

long ModifySnatEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySnatEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySnatEntryRequest::getSnatEntryName()const
{
	return snatEntryName_;
}

void ModifySnatEntryRequest::setSnatEntryName(const std::string& snatEntryName)
{
	snatEntryName_ = snatEntryName;
	setParameter("SnatEntryName", snatEntryName);
}

