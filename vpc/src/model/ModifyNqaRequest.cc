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

#include <alibabacloud/vpc/model/ModifyNqaRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNqaRequest;

ModifyNqaRequest::ModifyNqaRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyNqa")
{}

ModifyNqaRequest::~ModifyNqaRequest()
{}

std::string ModifyNqaRequest::getDestinationIp()const
{
	return destinationIp_;
}

void ModifyNqaRequest::setDestinationIp(const std::string& destinationIp)
{
	destinationIp_ = destinationIp;
	setParameter("DestinationIp", destinationIp);
}

long ModifyNqaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNqaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNqaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNqaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNqaRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNqaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyNqaRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNqaRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyNqaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNqaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyNqaRequest::getNqaId()const
{
	return nqaId_;
}

void ModifyNqaRequest::setNqaId(const std::string& nqaId)
{
	nqaId_ = nqaId;
	setParameter("NqaId", nqaId);
}

long ModifyNqaRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNqaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

