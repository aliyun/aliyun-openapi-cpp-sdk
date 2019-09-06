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

#include <alibabacloud/vpc/model/CreateCommonBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::CreateCommonBandwidthPackageRequest;

CreateCommonBandwidthPackageRequest::CreateCommonBandwidthPackageRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateCommonBandwidthPackage")
{}

CreateCommonBandwidthPackageRequest::~CreateCommonBandwidthPackageRequest()
{}

long CreateCommonBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCommonBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCommonBandwidthPackageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCommonBandwidthPackageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateCommonBandwidthPackageRequest::getISP()const
{
	return iSP_;
}

void CreateCommonBandwidthPackageRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setCoreParameter("ISP", iSP);
}

std::string CreateCommonBandwidthPackageRequest::getDescription()const
{
	return description_;
}

void CreateCommonBandwidthPackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateCommonBandwidthPackageRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateCommonBandwidthPackageRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateCommonBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void CreateCommonBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateCommonBandwidthPackageRequest::getZone()const
{
	return zone_;
}

void CreateCommonBandwidthPackageRequest::setZone(const std::string& zone)
{
	zone_ = zone;
	setCoreParameter("Zone", zone);
}

std::string CreateCommonBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCommonBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateCommonBandwidthPackageRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateCommonBandwidthPackageRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string CreateCommonBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCommonBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateCommonBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCommonBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCommonBandwidthPackageRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateCommonBandwidthPackageRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string CreateCommonBandwidthPackageRequest::getName()const
{
	return name_;
}

void CreateCommonBandwidthPackageRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int CreateCommonBandwidthPackageRequest::getRatio()const
{
	return ratio_;
}

void CreateCommonBandwidthPackageRequest::setRatio(int ratio)
{
	ratio_ = ratio;
	setCoreParameter("Ratio", std::to_string(ratio));
}

