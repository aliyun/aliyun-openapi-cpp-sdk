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

#include <alibabacloud/vpc/model/CreateBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::CreateBandwidthPackageRequest;

CreateBandwidthPackageRequest::CreateBandwidthPackageRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateBandwidthPackage")
{}

CreateBandwidthPackageRequest::~CreateBandwidthPackageRequest()
{}

long CreateBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

int CreateBandwidthPackageRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateBandwidthPackageRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string CreateBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateBandwidthPackageRequest::getISP()const
{
	return iSP_;
}

void CreateBandwidthPackageRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setCoreParameter("ISP", std::to_string(iSP));
}

std::string CreateBandwidthPackageRequest::getDescription()const
{
	return description_;
}

void CreateBandwidthPackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long CreateBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void CreateBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateBandwidthPackageRequest::getZone()const
{
	return zone_;
}

void CreateBandwidthPackageRequest::setZone(const std::string& zone)
{
	zone_ = zone;
	setCoreParameter("Zone", std::to_string(zone));
}

std::string CreateBandwidthPackageRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateBandwidthPackageRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string CreateBandwidthPackageRequest::getName()const
{
	return name_;
}

void CreateBandwidthPackageRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateBandwidthPackageRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void CreateBandwidthPackageRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setCoreParameter("NatGatewayId", std::to_string(natGatewayId));
}

int CreateBandwidthPackageRequest::getIpCount()const
{
	return ipCount_;
}

void CreateBandwidthPackageRequest::setIpCount(int ipCount)
{
	ipCount_ = ipCount;
	setCoreParameter("IpCount", ipCount);
}

