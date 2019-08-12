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

#include <alibabacloud/ecs/model/AssociateHaVipRequest.h>

using AlibabaCloud::Ecs::Model::AssociateHaVipRequest;

AssociateHaVipRequest::AssociateHaVipRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AssociateHaVip")
{}

AssociateHaVipRequest::~AssociateHaVipRequest()
{}

std::string AssociateHaVipRequest::getHaVipId()const
{
	return haVipId_;
}

void AssociateHaVipRequest::setHaVipId(const std::string& haVipId)
{
	haVipId_ = haVipId;
	setCoreParameter("HaVipId", haVipId);
}

bool AssociateHaVipRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateHaVipRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string AssociateHaVipRequest::getInstanceId()const
{
	return instanceId_;
}

void AssociateHaVipRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AssociateHaVipRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateHaVipRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateHaVipRequest::getClientToken()const
{
	return clientToken_;
}

void AssociateHaVipRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string AssociateHaVipRequest::getRegionId()const
{
	return regionId_;
}

void AssociateHaVipRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AssociateHaVipRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateHaVipRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool AssociateHaVipRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateHaVipRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

