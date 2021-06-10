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

#include <alibabacloud/vpc/model/AllocateEipAddressProRequest.h>

using AlibabaCloud::Vpc::Model::AllocateEipAddressProRequest;

AllocateEipAddressProRequest::AllocateEipAddressProRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AllocateEipAddressPro")
{
	setMethod(HttpRequest::Method::Post);
}

AllocateEipAddressProRequest::~AllocateEipAddressProRequest()
{}

std::string AllocateEipAddressProRequest::getIpAddress()const
{
	return ipAddress_;
}

void AllocateEipAddressProRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long AllocateEipAddressProRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateEipAddressProRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateEipAddressProRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateEipAddressProRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AllocateEipAddressProRequest::getISP()const
{
	return iSP_;
}

void AllocateEipAddressProRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setParameter("ISP", iSP);
}

std::string AllocateEipAddressProRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateEipAddressProRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AllocateEipAddressProRequest::getRegionId()const
{
	return regionId_;
}

void AllocateEipAddressProRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AllocateEipAddressProRequest::getNetmode()const
{
	return netmode_;
}

void AllocateEipAddressProRequest::setNetmode(const std::string& netmode)
{
	netmode_ = netmode;
	setParameter("Netmode", netmode);
}

std::string AllocateEipAddressProRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void AllocateEipAddressProRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

int AllocateEipAddressProRequest::getPeriod()const
{
	return period_;
}

void AllocateEipAddressProRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool AllocateEipAddressProRequest::getAutoPay()const
{
	return autoPay_;
}

void AllocateEipAddressProRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string AllocateEipAddressProRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateEipAddressProRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateEipAddressProRequest::getBandwidth()const
{
	return bandwidth_;
}

void AllocateEipAddressProRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string AllocateEipAddressProRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateEipAddressProRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AllocateEipAddressProRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateEipAddressProRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AllocateEipAddressProRequest::getInstanceId()const
{
	return instanceId_;
}

void AllocateEipAddressProRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AllocateEipAddressProRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void AllocateEipAddressProRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string AllocateEipAddressProRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void AllocateEipAddressProRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

