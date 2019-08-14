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

#include <alibabacloud/vpc/model/DescribeBgpNetworksRequest.h>

using AlibabaCloud::Vpc::Model::DescribeBgpNetworksRequest;

DescribeBgpNetworksRequest::DescribeBgpNetworksRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeBgpNetworks")
{}

DescribeBgpNetworksRequest::~DescribeBgpNetworksRequest()
{}

long DescribeBgpNetworksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBgpNetworksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBgpNetworksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBgpNetworksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBgpNetworksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBgpNetworksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeBgpNetworksRequest::getRouterId()const
{
	return routerId_;
}

void DescribeBgpNetworksRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string DescribeBgpNetworksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBgpNetworksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeBgpNetworksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpNetworksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeBgpNetworksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBgpNetworksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBgpNetworksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpNetworksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

