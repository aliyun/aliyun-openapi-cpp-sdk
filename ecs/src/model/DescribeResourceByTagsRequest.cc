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

using AlibabaCloud::Ecs::Model::DescribeResourceByTagsRequest;

DescribeResourceByTagsRequest::DescribeResourceByTagsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeResourceByTags")
{}

DescribeResourceByTagsRequest::~DescribeResourceByTagsRequest()
{}

std::string DescribeResourceByTagsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeResourceByTagsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeResourceByTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeResourceByTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeResourceByTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeResourceByTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeResourceByTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeResourceByTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeResourceByTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeResourceByTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeResourceByTagsRequest::Tag> DescribeResourceByTagsRequest::getTag()const
{
	return tag_;
}

void DescribeResourceByTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

long DescribeResourceByTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeResourceByTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeResourceByTagsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeResourceByTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

int DescribeResourceByTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeResourceByTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

