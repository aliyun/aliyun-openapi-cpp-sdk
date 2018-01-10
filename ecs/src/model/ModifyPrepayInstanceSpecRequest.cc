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

#include <alibabacloud/ecs/model/ModifyPrepayInstanceSpecRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyPrepayInstanceSpecRequest::ModifyPrepayInstanceSpecRequest() :
	EcsRequest("ModifyPrepayInstanceSpec")
{}

ModifyPrepayInstanceSpecRequest::~ModifyPrepayInstanceSpecRequest()
{}

long ModifyPrepayInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyPrepayInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyPrepayInstanceSpecRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPrepayInstanceSpecRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool ModifyPrepayInstanceSpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyPrepayInstanceSpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", std::to_string(autoPay));
}

std::string ModifyPrepayInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyPrepayInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyPrepayInstanceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyPrepayInstanceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyPrepayInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyPrepayInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyPrepayInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyPrepayInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyPrepayInstanceSpecRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyPrepayInstanceSpecRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

long ModifyPrepayInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPrepayInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

