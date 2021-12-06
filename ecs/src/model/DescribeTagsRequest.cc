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

#include <alibabacloud/ecs/model/DescribeTagsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeTags")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTagsRequest::~DescribeTagsRequest()
{}

long DescribeTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeTagsRequest::Tag> DescribeTagsRequest::getTag()const
{
	return tag_;
}

void DescribeTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeTagsRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeTagsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTagsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeTagsRequest::getCategory()const
{
	return category_;
}

void DescribeTagsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

