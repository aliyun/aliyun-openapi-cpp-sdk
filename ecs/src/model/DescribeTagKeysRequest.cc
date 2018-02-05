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

#include <alibabacloud/ecs/model/DescribeTagKeysRequest.h>

using AlibabaCloud::Ecs::Model::DescribeTagKeysRequest;

DescribeTagKeysRequest::DescribeTagKeysRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeTagKeys")
{}

DescribeTagKeysRequest::~DescribeTagKeysRequest()
{}

long DescribeTagKeysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTagKeysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTagKeysRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeTagKeysRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeTagKeysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTagKeysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeTagKeysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTagKeysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeTagKeysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagKeysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeTagKeysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagKeysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTagKeysRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeTagKeysRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

int DescribeTagKeysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTagKeysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

