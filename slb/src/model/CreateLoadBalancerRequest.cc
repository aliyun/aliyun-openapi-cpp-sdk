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
{
	setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerRequest::~CreateLoadBalancerRequest()
{}

long CreateLoadBalancerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLoadBalancerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLoadBalancerRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void CreateLoadBalancerRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setParameter("AddressIPVersion", addressIPVersion);
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

std::string CreateLoadBalancerRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateLoadBalancerRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

std::string CreateLoadBalancerRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateLoadBalancerRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

std::string CreateLoadBalancerRequest::getModificationProtectionReason()const
{
	return modificationProtectionReason_;
}

void CreateLoadBalancerRequest::setModificationProtectionReason(const std::string& modificationProtectionReason)
{
	modificationProtectionReason_ = modificationProtectionReason;
	setParameter("ModificationProtectionReason", modificationProtectionReason);
}

bool CreateLoadBalancerRequest::getSupportPrivateLink()const
{
	return supportPrivateLink_;
}

void CreateLoadBalancerRequest::setSupportPrivateLink(bool supportPrivateLink)
{
	supportPrivateLink_ = supportPrivateLink;
	setParameter("SupportPrivateLink", supportPrivateLink ? "true" : "false");
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

std::string CreateLoadBalancerRequest::getCloudType()const
{
	return cloudType_;
}

void CreateLoadBalancerRequest::setCloudType(const std::string& cloudType)
{
	cloudType_ = cloudType;
	setParameter("CloudType", cloudType);
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

std::string CreateLoadBalancerRequest::getDeleteProtection()const
{
	return deleteProtection_;
}

void CreateLoadBalancerRequest::setDeleteProtection(const std::string& deleteProtection)
{
	deleteProtection_ = deleteProtection;
	setParameter("DeleteProtection", deleteProtection);
}

bool CreateLoadBalancerRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateLoadBalancerRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateLoadBalancerRequest::getAddress()const
{
	return address_;
}

void CreateLoadBalancerRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
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

std::string CreateLoadBalancerRequest::getModificationProtectionStatus()const
{
	return modificationProtectionStatus_;
}

void CreateLoadBalancerRequest::setModificationProtectionStatus(const std::string& modificationProtectionStatus)
{
	modificationProtectionStatus_ = modificationProtectionStatus;
	setParameter("ModificationProtectionStatus", modificationProtectionStatus);
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

int CreateLoadBalancerRequest::getRatio()const
{
	return ratio_;
}

void CreateLoadBalancerRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", std::to_string(ratio));
}

