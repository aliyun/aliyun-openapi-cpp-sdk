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

using AlibabaCloud::Vpc::Model::DescribeBgpGroupsRequest;

DescribeBgpGroupsRequest::DescribeBgpGroupsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeBgpGroups")
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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeBgpGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBgpGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBgpGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBgpGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeBgpGroupsRequest::getRouterId()const
{
	return routerId_;
}

void DescribeBgpGroupsRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string DescribeBgpGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBgpGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeBgpGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeBgpGroupsRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void DescribeBgpGroupsRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setCoreParameter("BgpGroupId", bgpGroupId);
}

bool DescribeBgpGroupsRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeBgpGroupsRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setCoreParameter("IsDefault", isDefault);
}

long DescribeBgpGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBgpGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeBgpGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

