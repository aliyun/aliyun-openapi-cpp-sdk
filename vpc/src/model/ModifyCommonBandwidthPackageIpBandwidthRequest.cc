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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackageIpBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCommonBandwidthPackageIpBandwidthRequest;

ModifyCommonBandwidthPackageIpBandwidthRequest::ModifyCommonBandwidthPackageIpBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyCommonBandwidthPackageIpBandwidth")
{}

ModifyCommonBandwidthPackageIpBandwidthRequest::~ModifyCommonBandwidthPackageIpBandwidthRequest()
{}

long ModifyCommonBandwidthPackageIpBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyCommonBandwidthPackageIpBandwidthRequest::getEipId()const
{
	return eipId_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setEipId(const std::string& eipId)
{
	eipId_ = eipId;
	setCoreParameter("EipId", eipId);
}

long ModifyCommonBandwidthPackageIpBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCommonBandwidthPackageIpBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

