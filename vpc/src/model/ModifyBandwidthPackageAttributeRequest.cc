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

#include <alibabacloud/vpc/model/ModifyBandwidthPackageAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyBandwidthPackageAttributeRequest;

ModifyBandwidthPackageAttributeRequest::ModifyBandwidthPackageAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyBandwidthPackageAttribute")
{}

ModifyBandwidthPackageAttributeRequest::~ModifyBandwidthPackageAttributeRequest()
{}

long ModifyBandwidthPackageAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBandwidthPackageAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyBandwidthPackageAttributeRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void ModifyBandwidthPackageAttributeRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string ModifyBandwidthPackageAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBandwidthPackageAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBandwidthPackageAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyBandwidthPackageAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyBandwidthPackageAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBandwidthPackageAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyBandwidthPackageAttributeRequest::getName()const
{
	return name_;
}

void ModifyBandwidthPackageAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyBandwidthPackageAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyBandwidthPackageAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long ModifyBandwidthPackageAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBandwidthPackageAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

