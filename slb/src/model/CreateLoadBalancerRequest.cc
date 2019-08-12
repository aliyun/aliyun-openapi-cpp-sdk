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

#include <alibabacloud/slb/model/CreateLoadBalancerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerRequest;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancer")
{}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest()
{}

std::string CreateLoadBalancerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long CreateLoadBalancerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateLoadBalancerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateLoadBalancerRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void CreateLoadBalancerRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setCoreParameter("AddressIPVersion", std::to_string(addressIPVersion));
}

std::string CreateLoadBalancerRequest::getMasterZoneId()const
{
	return masterZoneId_;
}

void CreateLoadBalancerRequest::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
	setCoreParameter("MasterZoneId", std::to_string(masterZoneId));
}

int CreateLoadBalancerRequest::getDuration()const
{
	return duration_;
}

void CreateLoadBalancerRequest::setDuration(int duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

std::string CreateLoadBalancerRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLoadBalancerRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateLoadBalancerRequest::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
	setCoreParameter("LoadBalancerName", std::to_string(loadBalancerName));
}

std::string CreateLoadBalancerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateLoadBalancerRequest::getAddressType()const
{
	return addressType_;
}

void CreateLoadBalancerRequest::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
	setCoreParameter("AddressType", std::to_string(addressType));
}

std::string CreateLoadBalancerRequest::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void CreateLoadBalancerRequest::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
	setCoreParameter("SlaveZoneId", std::to_string(slaveZoneId));
}

std::string CreateLoadBalancerRequest::getDeleteProtection()const
{
	return deleteProtection_;
}

void CreateLoadBalancerRequest::setDeleteProtection(const std::string& deleteProtection)
{
	deleteProtection_ = deleteProtection;
	setCoreParameter("DeleteProtection", std::to_string(deleteProtection));
}

std::string CreateLoadBalancerRequest::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

void CreateLoadBalancerRequest::setLoadBalancerSpec(const std::string& loadBalancerSpec)
{
	loadBalancerSpec_ = loadBalancerSpec;
	setCoreParameter("LoadBalancerSpec", std::to_string(loadBalancerSpec));
}

bool CreateLoadBalancerRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateLoadBalancerRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateLoadBalancerRequest::getAddress()const
{
	return address_;
}

void CreateLoadBalancerRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string CreateLoadBalancerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

int CreateLoadBalancerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string CreateLoadBalancerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long CreateLoadBalancerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateLoadBalancerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string CreateLoadBalancerRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLoadBalancerRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string CreateLoadBalancerRequest::getEnableVpcVipFlow()const
{
	return enableVpcVipFlow_;
}

void CreateLoadBalancerRequest::setEnableVpcVipFlow(const std::string& enableVpcVipFlow)
{
	enableVpcVipFlow_ = enableVpcVipFlow;
	setCoreParameter("EnableVpcVipFlow", std::to_string(enableVpcVipFlow));
}

std::string CreateLoadBalancerRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLoadBalancerRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string CreateLoadBalancerRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLoadBalancerRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string CreateLoadBalancerRequest::getPayType()const
{
	return payType_;
}

void CreateLoadBalancerRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

std::string CreateLoadBalancerRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateLoadBalancerRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", std::to_string(pricingCycle));
}

int CreateLoadBalancerRequest::getRatio()const
{
	return ratio_;
}

void CreateLoadBalancerRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setCoreParameter("Ratio", ratio);
}

