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

#include <alibabacloud/vpc/model/CreateNatGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateNatGatewayRequest;

CreateNatGatewayRequest::CreateNatGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateNatGateway")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNatGatewayRequest::~CreateNatGatewayRequest()
{}

long CreateNatGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNatGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNatGatewayRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNatGatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateNatGatewayRequest::getDescription()const
{
	return description_;
}

void CreateNatGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateNatGatewayRequest::getSpec()const
{
	return spec_;
}

void CreateNatGatewayRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

std::string CreateNatGatewayRequest::getDuration()const
{
	return duration_;
}

void CreateNatGatewayRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setParameter("Duration", duration);
}

std::string CreateNatGatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateNatGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateNatGatewayRequest::getNatType()const
{
	return natType_;
}

void CreateNatGatewayRequest::setNatType(const std::string& natType)
{
	natType_ = natType;
	setParameter("NatType", natType);
}

std::vector<CreateNatGatewayRequest::BandwidthPackage> CreateNatGatewayRequest::getBandwidthPackage()const
{
	return bandwidthPackage_;
}

void CreateNatGatewayRequest::setBandwidthPackage(const std::vector<BandwidthPackage>& bandwidthPackage)
{
	bandwidthPackage_ = bandwidthPackage;
	for(int dep1 = 0; dep1!= bandwidthPackage.size(); dep1++) {
		auto bandwidthPackageObj = bandwidthPackage.at(dep1);
		std::string bandwidthPackageObjStr = "BandwidthPackage." + std::to_string(dep1 + 1);
		setParameter(bandwidthPackageObjStr + ".Bandwidth", std::to_string(bandwidthPackageObj.bandwidth));
		setParameter(bandwidthPackageObjStr + ".Zone", bandwidthPackageObj.zone);
		setParameter(bandwidthPackageObjStr + ".InternetChargeType", bandwidthPackageObj.internetChargeType);
		setParameter(bandwidthPackageObjStr + ".ISP", bandwidthPackageObj.iSP);
		setParameter(bandwidthPackageObjStr + ".IpCount", std::to_string(bandwidthPackageObj.ipCount));
	}
}

std::string CreateNatGatewayRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateNatGatewayRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

bool CreateNatGatewayRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateNatGatewayRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateNatGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNatGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNatGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNatGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateNatGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNatGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateNatGatewayRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateNatGatewayRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateNatGatewayRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateNatGatewayRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string CreateNatGatewayRequest::getVpcId()const
{
	return vpcId_;
}

void CreateNatGatewayRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateNatGatewayRequest::getName()const
{
	return name_;
}

void CreateNatGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateNatGatewayRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateNatGatewayRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

