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

#include <alibabacloud/vpc/model/RenewInstanceRequest.h>

using AlibabaCloud::Vpc::Model::RenewInstanceRequest;

RenewInstanceRequest::RenewInstanceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "RenewInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewInstanceRequest::~RenewInstanceRequest()
{}

long RenewInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int RenewInstanceRequest::getDuration()const
{
	return duration_;
}

void RenewInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string RenewInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RenewInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RenewInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void RenewInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string RenewInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long RenewInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenewInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void RenewInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

