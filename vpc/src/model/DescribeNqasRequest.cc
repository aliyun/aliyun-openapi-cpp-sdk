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

#include <alibabacloud/vpc/model/DescribeNqasRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNqasRequest;

DescribeNqasRequest::DescribeNqasRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeNqas")
{}

DescribeNqasRequest::~DescribeNqasRequest()
{}

long DescribeNqasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNqasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNqasRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNqasRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNqasRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNqasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeNqasRequest::getRouterId()const
{
	return routerId_;
}

void DescribeNqasRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string DescribeNqasRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNqasRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeNqasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNqasRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNqasRequest::getNqaId()const
{
	return nqaId_;
}

void DescribeNqasRequest::setNqaId(const std::string& nqaId)
{
	nqaId_ = nqaId;
	setParameter("NqaId", nqaId);
}

bool DescribeNqasRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeNqasRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setParameter("IsDefault", std::to_string(isDefault));
}

long DescribeNqasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNqasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeNqasRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNqasRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

