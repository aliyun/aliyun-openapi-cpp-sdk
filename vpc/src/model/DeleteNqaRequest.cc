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

#include <alibabacloud/vpc/model/DeleteNqaRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DeleteNqaRequest::DeleteNqaRequest() :
	VpcRequest("DeleteNqa")
{}

DeleteNqaRequest::~DeleteNqaRequest()
{}

long DeleteNqaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNqaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteNqaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNqaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNqaRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNqaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteNqaRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteNqaRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteNqaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNqaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteNqaRequest::getNqaId()const
{
	return nqaId_;
}

void DeleteNqaRequest::setNqaId(const std::string& nqaId)
{
	nqaId_ = nqaId;
	setParameter("NqaId", nqaId);
}

long DeleteNqaRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNqaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

