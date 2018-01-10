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

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
	SlbRequest("CreateLoadBalancer")
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
	setParameter("Access_key_id", access_key_id);
}

long CreateLoadBalancerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateLoadBalancerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateLoadBalancerRequest::getMasterZoneId()const
{
	return masterZoneId_;
}

void CreateLoadBalancerRequest::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
	setParameter("MasterZoneId", masterZoneId);
}

std::string CreateLoadBalancerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLoadBalancerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int CreateLoadBalancerRequest::getDuration()const
{
	return duration_;
}

void CreateLoadBalancerRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string CreateLoadBalancerRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLoadBalancerRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void CreateLoadBalancerRequest::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
	setParameter("LoadBalancerName", loadBalancerName);
}

std::string CreateLoadBalancerRequest::getRegionId()const
{
	return regionId_;
}

void CreateLoadBalancerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLoadBalancerRequest::getAddressType()const
{
	return addressType_;
}

void CreateLoadBalancerRequest::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
	setParameter("AddressType", addressType);
}

std::string CreateLoadBalancerRequest::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void CreateLoadBalancerRequest::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
	setParameter("SlaveZoneId", slaveZoneId);
}

std::string CreateLoadBalancerRequest::getLoadBalancerSpec()const
{
	return loadBalancerSpec_;
}

void CreateLoadBalancerRequest::setLoadBalancerSpec(const std::string& loadBalancerSpec)
{
	loadBalancerSpec_ = loadBalancerSpec;
	setParameter("LoadBalancerSpec", loadBalancerSpec);
}

bool CreateLoadBalancerRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateLoadBalancerRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", std::to_string(autoPay));
}

std::string CreateLoadBalancerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateLoadBalancerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateLoadBalancerRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateLoadBalancerRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateLoadBalancerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateLoadBalancerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateLoadBalancerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLoadBalancerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLoadBalancerRequest::getTags()const
{
	return tags_;
}

void CreateLoadBalancerRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateLoadBalancerRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLoadBalancerRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateLoadBalancerRequest::getEnableVpcVipFlow()const
{
	return enableVpcVipFlow_;
}

void CreateLoadBalancerRequest::setEnableVpcVipFlow(const std::string& enableVpcVipFlow)
{
	enableVpcVipFlow_ = enableVpcVipFlow;
	setParameter("EnableVpcVipFlow", enableVpcVipFlow);
}

std::string CreateLoadBalancerRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateLoadBalancerRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateLoadBalancerRequest::getVpcId()const
{
	return vpcId_;
}

void CreateLoadBalancerRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateLoadBalancerRequest::getPayType()const
{
	return payType_;
}

void CreateLoadBalancerRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string CreateLoadBalancerRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateLoadBalancerRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

