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

#include <alibabacloud/vpc/model/DescribeBgpGroupsRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBgpGroupsRequest::DescribeBgpGroupsRequest() :
	VpcRequest("DescribeBgpGroups")
{}

DescribeBgpGroupsRequest::~DescribeBgpGroupsRequest()
{}

long DescribeBgpGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBgpGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBgpGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBgpGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBgpGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBgpGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBgpGroupsRequest::getRouterId()const
{
	return routerId_;
}

void DescribeBgpGroupsRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string DescribeBgpGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBgpGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeBgpGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBgpGroupsRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void DescribeBgpGroupsRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setParameter("BgpGroupId", bgpGroupId);
}

bool DescribeBgpGroupsRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeBgpGroupsRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setParameter("IsDefault", std::to_string(isDefault));
}

long DescribeBgpGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBgpGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBgpGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

