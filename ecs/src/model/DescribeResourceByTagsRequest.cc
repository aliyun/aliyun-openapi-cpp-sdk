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

#include <alibabacloud/ecs/model/DescribeResourceByTagsRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeResourceByTagsRequest::DescribeResourceByTagsRequest() :
	EcsRequest("DescribeResourceByTags")
{}

DescribeResourceByTagsRequest::~DescribeResourceByTagsRequest()
{}

std::string DescribeResourceByTagsRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeResourceByTagsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeResourceByTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeResourceByTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeResourceByTagsRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeResourceByTagsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeResourceByTagsRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeResourceByTagsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeResourceByTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourceByTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeResourceByTagsRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeResourceByTagsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long DescribeResourceByTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourceByTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeResourceByTagsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeResourceByTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeResourceByTagsRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeResourceByTagsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

int DescribeResourceByTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeResourceByTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeResourceByTagsRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeResourceByTagsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeResourceByTagsRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeResourceByTagsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string DescribeResourceByTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeResourceByTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeResourceByTagsRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeResourceByTagsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

int DescribeResourceByTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeResourceByTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeResourceByTagsRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeResourceByTagsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string DescribeResourceByTagsRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeResourceByTagsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

