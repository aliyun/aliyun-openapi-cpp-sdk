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

#include <alibabacloud/vpc/model/CreateNqaRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateNqaRequest::CreateNqaRequest() :
	VpcRequest("CreateNqa")
{}

CreateNqaRequest::~CreateNqaRequest()
{}

std::string CreateNqaRequest::getDestinationIp()const
{
	return destinationIp_;
}

void CreateNqaRequest::setDestinationIp(const std::string& destinationIp)
{
	destinationIp_ = destinationIp;
	setParameter("DestinationIp", destinationIp);
}

long CreateNqaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNqaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNqaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNqaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNqaRequest::getRegionId()const
{
	return regionId_;
}

void CreateNqaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateNqaRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNqaRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateNqaRequest::getRouterId()const
{
	return routerId_;
}

void CreateNqaRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string CreateNqaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNqaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateNqaRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNqaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

