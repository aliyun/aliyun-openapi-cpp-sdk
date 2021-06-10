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

#include <alibabacloud/vpc/model/ModifyInstanceAutoRenewalAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyInstanceAutoRenewalAttributeRequest;

ModifyInstanceAutoRenewalAttributeRequest::ModifyInstanceAutoRenewalAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyInstanceAutoRenewalAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAutoRenewalAttributeRequest::~ModifyInstanceAutoRenewalAttributeRequest()
{}

long ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int ModifyInstanceAutoRenewalAttributeRequest::getDuration()const
{
	return duration_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setParameter("RenewalStatus", renewalStatus);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyInstanceAutoRenewalAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyInstanceAutoRenewalAttributeRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void ModifyInstanceAutoRenewalAttributeRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

