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

#include <alibabacloud/vpc/model/DeleteCommonBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::DeleteCommonBandwidthPackageRequest;

DeleteCommonBandwidthPackageRequest::DeleteCommonBandwidthPackageRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteCommonBandwidthPackage")
{}

DeleteCommonBandwidthPackageRequest::~DeleteCommonBandwidthPackageRequest()
{}

long DeleteCommonBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCommonBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteCommonBandwidthPackageRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void DeleteCommonBandwidthPackageRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setCoreParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string DeleteCommonBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteCommonBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteCommonBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCommonBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteCommonBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteCommonBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteCommonBandwidthPackageRequest::getForce()const
{
	return force_;
}

void DeleteCommonBandwidthPackageRequest::setForce(const std::string& force)
{
	force_ = force;
	setCoreParameter("Force", force);
}

long DeleteCommonBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCommonBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

