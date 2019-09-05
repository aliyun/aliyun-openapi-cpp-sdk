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

#include <alibabacloud/slb/model/DescribeTagsRequest.h>

using AlibabaCloud::Slb::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeTags")
{}

DescribeTagsRequest::~DescribeTagsRequest()
{}

std::string DescribeTagsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeTagsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long DescribeTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeTagsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTagsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeTagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeTagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool DescribeTagsRequest::getDistinctKey()const
{
	return distinctKey_;
}

void DescribeTagsRequest::setDistinctKey(bool distinctKey)
{
	distinctKey_ = distinctKey;
	setCoreParameter("DistinctKey", distinctKey ? "true" : "false");
}

long DescribeTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTagsRequest::getTags()const
{
	return tags_;
}

void DescribeTagsRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string DescribeTagsRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeTagsRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

