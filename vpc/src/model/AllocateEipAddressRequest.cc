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

#include <alibabacloud/vpc/model/AllocateEipAddressRequest.h>

using AlibabaCloud::Vpc::Model::AllocateEipAddressRequest;

AllocateEipAddressRequest::AllocateEipAddressRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AllocateEipAddress")
{}

AllocateEipAddressRequest::~AllocateEipAddressRequest()
{}

long AllocateEipAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateEipAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int AllocateEipAddressRequest::getPeriod()const
{
	return period_;
}

void AllocateEipAddressRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

bool AllocateEipAddressRequest::getAutoPay()const
{
	return autoPay_;
}

void AllocateEipAddressRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay);
}

std::string AllocateEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateEipAddressRequest::getBandwidth()const
{
	return bandwidth_;
}

void AllocateEipAddressRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string AllocateEipAddressRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateEipAddressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string AllocateEipAddressRequest::getISP()const
{
	return iSP_;
}

void AllocateEipAddressRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setCoreParameter("ISP", iSP);
}

std::string AllocateEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AllocateEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateEipAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long AllocateEipAddressRequest::getActivityId()const
{
	return activityId_;
}

void AllocateEipAddressRequest::setActivityId(long activityId)
{
	activityId_ = activityId;
	setCoreParameter("ActivityId", activityId);
}

std::string AllocateEipAddressRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateEipAddressRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string AllocateEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void AllocateEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AllocateEipAddressRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void AllocateEipAddressRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string AllocateEipAddressRequest::getNetmode()const
{
	return netmode_;
}

void AllocateEipAddressRequest::setNetmode(const std::string& netmode)
{
	netmode_ = netmode;
	setCoreParameter("Netmode", netmode);
}

std::string AllocateEipAddressRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void AllocateEipAddressRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", pricingCycle);
}

std::string AllocateEipAddressRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void AllocateEipAddressRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

