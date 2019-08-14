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

#include <alibabacloud/ecs/model/ModifyBandwidthPackageSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyBandwidthPackageSpecRequest;

ModifyBandwidthPackageSpecRequest::ModifyBandwidthPackageSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyBandwidthPackageSpec")
{}

ModifyBandwidthPackageSpecRequest::~ModifyBandwidthPackageSpecRequest()
{}

long ModifyBandwidthPackageSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBandwidthPackageSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyBandwidthPackageSpecRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyBandwidthPackageSpecRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string ModifyBandwidthPackageSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBandwidthPackageSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBandwidthPackageSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyBandwidthPackageSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyBandwidthPackageSpecRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyBandwidthPackageSpecRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string ModifyBandwidthPackageSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBandwidthPackageSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyBandwidthPackageSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBandwidthPackageSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

