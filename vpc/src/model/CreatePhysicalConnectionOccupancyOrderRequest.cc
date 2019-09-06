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

#include <alibabacloud/vpc/model/CreatePhysicalConnectionOccupancyOrderRequest.h>

using AlibabaCloud::Vpc::Model::CreatePhysicalConnectionOccupancyOrderRequest;

CreatePhysicalConnectionOccupancyOrderRequest::CreatePhysicalConnectionOccupancyOrderRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreatePhysicalConnectionOccupancyOrder")
{}

CreatePhysicalConnectionOccupancyOrderRequest::~CreatePhysicalConnectionOccupancyOrderRequest()
{}

long CreatePhysicalConnectionOccupancyOrderRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getClientToken()const
{
	return clientToken_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getRegionId()const
{
	return regionId_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

int CreatePhysicalConnectionOccupancyOrderRequest::getPeriod()const
{
	return period_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool CreatePhysicalConnectionOccupancyOrderRequest::getAutoPay()const
{
	return autoPay_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreatePhysicalConnectionOccupancyOrderRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", physicalConnectionId);
}

std::string CreatePhysicalConnectionOccupancyOrderRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreatePhysicalConnectionOccupancyOrderRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

