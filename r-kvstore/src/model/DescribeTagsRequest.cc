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

#include <alibabacloud/r-kvstore/model/DescribeTagsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTags")
{}

DescribeTagsRequest::~DescribeTagsRequest()
{}

long DescribeTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
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

std::string DescribeTagsRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeTagsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setCoreParameter("NextToken", nextToken);
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

long DescribeTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTagsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

