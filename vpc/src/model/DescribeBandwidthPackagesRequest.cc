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

#include <alibabacloud/vpc/model/DescribeBandwidthPackagesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeBandwidthPackagesRequest;

DescribeBandwidthPackagesRequest::DescribeBandwidthPackagesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeBandwidthPackages")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBandwidthPackagesRequest::~DescribeBandwidthPackagesRequest()
{}

long DescribeBandwidthPackagesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBandwidthPackagesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeBandwidthPackagesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBandwidthPackagesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeBandwidthPackagesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBandwidthPackagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeBandwidthPackagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBandwidthPackagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBandwidthPackagesRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void DescribeBandwidthPackagesRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setParameter("NatGatewayId", natGatewayId);
}

std::string DescribeBandwidthPackagesRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void DescribeBandwidthPackagesRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string DescribeBandwidthPackagesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBandwidthPackagesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBandwidthPackagesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBandwidthPackagesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeBandwidthPackagesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBandwidthPackagesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

