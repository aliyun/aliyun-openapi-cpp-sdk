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

#include <alibabacloud/rds/model/DescribeDedicatedHostImageCategoriesRequest.h>

using AlibabaCloud::Rds::Model::DescribeDedicatedHostImageCategoriesRequest;

DescribeDedicatedHostImageCategoriesRequest::DescribeDedicatedHostImageCategoriesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDedicatedHostImageCategories")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostImageCategoriesRequest::~DescribeDedicatedHostImageCategoriesRequest()
{}

long DescribeDedicatedHostImageCategoriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostImageCategoriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostImageCategoriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostImageCategoriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDedicatedHostImageCategoriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostImageCategoriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostImageCategoriesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedHostImageCategoriesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedHostImageCategoriesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostImageCategoriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDedicatedHostImageCategoriesRequest::getHostGroup()const
{
	return hostGroup_;
}

void DescribeDedicatedHostImageCategoriesRequest::setHostGroup(const std::string& hostGroup)
{
	hostGroup_ = hostGroup;
	setParameter("HostGroup", hostGroup);
}

