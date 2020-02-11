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

#include <alibabacloud/ecs/model/DeleteDemandRequest.h>

using AlibabaCloud::Ecs::Model::DeleteDemandRequest;

DeleteDemandRequest::DeleteDemandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteDemand")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDemandRequest::~DeleteDemandRequest()
{}

std::string DeleteDemandRequest::getReason()const
{
	return reason_;
}

void DeleteDemandRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setParameter("Reason", reason);
}

long DeleteDemandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDemandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDemandRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteDemandRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteDemandRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDemandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDemandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDemandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDemandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDemandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteDemandRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDemandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDemandRequest::getDemandId()const
{
	return demandId_;
}

void DeleteDemandRequest::setDemandId(const std::string& demandId)
{
	demandId_ = demandId;
	setParameter("DemandId", demandId);
}

