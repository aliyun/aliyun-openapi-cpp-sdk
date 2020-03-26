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

#include <alibabacloud/vpc/model/DescribeCommonBandwidthPackagesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeCommonBandwidthPackagesRequest;

DescribeCommonBandwidthPackagesRequest::DescribeCommonBandwidthPackagesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeCommonBandwidthPackages")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCommonBandwidthPackagesRequest::~DescribeCommonBandwidthPackagesRequest()
{}

long DescribeCommonBandwidthPackagesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCommonBandwidthPackagesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DescribeCommonBandwidthPackagesRequest::getIncludeReservationData()const
{
	return includeReservationData_;
}

void DescribeCommonBandwidthPackagesRequest::setIncludeReservationData(bool includeReservationData)
{
	includeReservationData_ = includeReservationData;
	setParameter("IncludeReservationData", includeReservationData ? "true" : "false");
}

int DescribeCommonBandwidthPackagesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommonBandwidthPackagesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCommonBandwidthPackagesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCommonBandwidthPackagesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeCommonBandwidthPackagesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCommonBandwidthPackagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeCommonBandwidthPackagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCommonBandwidthPackagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCommonBandwidthPackagesRequest::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

void DescribeCommonBandwidthPackagesRequest::setBandwidthPackageId(const std::string& bandwidthPackageId)
{
	bandwidthPackageId_ = bandwidthPackageId;
	setParameter("BandwidthPackageId", bandwidthPackageId);
}

std::string DescribeCommonBandwidthPackagesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCommonBandwidthPackagesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCommonBandwidthPackagesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCommonBandwidthPackagesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCommonBandwidthPackagesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCommonBandwidthPackagesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCommonBandwidthPackagesRequest::getName()const
{
	return name_;
}

void DescribeCommonBandwidthPackagesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

