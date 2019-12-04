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

#include <alibabacloud/rds/model/DescribeDedicatedHostGroupsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDedicatedHostGroupsRequest;

DescribeDedicatedHostGroupsRequest::DescribeDedicatedHostGroupsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDedicatedHostGroups")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostGroupsRequest::~DescribeDedicatedHostGroupsRequest()
{}

long DescribeDedicatedHostGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDedicatedHostGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedHostGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedHostGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDedicatedHostGroupsRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void DescribeDedicatedHostGroupsRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

