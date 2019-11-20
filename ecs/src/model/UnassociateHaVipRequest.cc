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

#include <alibabacloud/ecs/model/UnassociateHaVipRequest.h>

using AlibabaCloud::Ecs::Model::UnassociateHaVipRequest;

UnassociateHaVipRequest::UnassociateHaVipRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "UnassociateHaVip")
{
	setMethod(HttpRequest::Method::Post);
}

UnassociateHaVipRequest::~UnassociateHaVipRequest()
{}

long UnassociateHaVipRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateHaVipRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateHaVipRequest::getClientToken()const
{
	return clientToken_;
}

void UnassociateHaVipRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string UnassociateHaVipRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateHaVipRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateHaVipRequest::getHaVipId()const
{
	return haVipId_;
}

void UnassociateHaVipRequest::setHaVipId(const std::string& haVipId)
{
	haVipId_ = haVipId;
	setCoreParameter("HaVipId", haVipId);
}

std::string UnassociateHaVipRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateHaVipRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateHaVipRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateHaVipRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnassociateHaVipRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateHaVipRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnassociateHaVipRequest::getInstanceId()const
{
	return instanceId_;
}

void UnassociateHaVipRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string UnassociateHaVipRequest::getForce()const
{
	return force_;
}

void UnassociateHaVipRequest::setForce(const std::string& force)
{
	force_ = force;
	setCoreParameter("Force", force);
}

