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

#include <alibabacloud/ecs/model/DeleteHaVipRequest.h>

using AlibabaCloud::Ecs::Model::DeleteHaVipRequest;

DeleteHaVipRequest::DeleteHaVipRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteHaVip")
{}

DeleteHaVipRequest::~DeleteHaVipRequest()
{}

std::string DeleteHaVipRequest::getHaVipId()const
{
	return haVipId_;
}

void DeleteHaVipRequest::setHaVipId(const std::string& haVipId)
{
	haVipId_ = haVipId;
	setCoreParameter("HaVipId", haVipId);
}

long DeleteHaVipRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHaVipRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteHaVipRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHaVipRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteHaVipRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteHaVipRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteHaVipRequest::getRegionId()const
{
	return regionId_;
}

void DeleteHaVipRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteHaVipRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHaVipRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteHaVipRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHaVipRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

