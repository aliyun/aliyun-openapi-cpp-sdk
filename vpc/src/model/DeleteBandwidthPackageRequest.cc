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

#include <alibabacloud/vpc/model/DeleteBandwidthPackageRequest.h>

using AlibabaCloud::Vpc::Model::DeleteBandwidthPackageRequest;

DeleteBandwidthPackageRequest::DeleteBandwidthPackageRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteBandwidthPackage")
{}

DeleteBandwidthPackageRequest::~DeleteBandwidthPackageRequest()
{}

long DeleteBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteBandwidthPackageRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void DeleteBandwidthPackageRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string DeleteBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteBandwidthPackageRequest::getRegionId()const
{
	return regionId_;
}

void DeleteBandwidthPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool DeleteBandwidthPackageRequest::getForce()const
{
	return force_;
}

void DeleteBandwidthPackageRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", std::to_string(force));
}

long DeleteBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

