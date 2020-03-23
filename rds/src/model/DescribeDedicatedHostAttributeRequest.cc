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

#include <alibabacloud/rds/model/DescribeDedicatedHostAttributeRequest.h>

using AlibabaCloud::Rds::Model::DescribeDedicatedHostAttributeRequest;

DescribeDedicatedHostAttributeRequest::DescribeDedicatedHostAttributeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDedicatedHostAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDedicatedHostAttributeRequest::~DescribeDedicatedHostAttributeRequest()
{}

long DescribeDedicatedHostAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDedicatedHostAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDedicatedHostAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDedicatedHostAttributeRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void DescribeDedicatedHostAttributeRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setParameter("DedicatedHostId", dedicatedHostId);
}

long DescribeDedicatedHostAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDedicatedHostAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDedicatedHostAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDedicatedHostAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDedicatedHostAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDedicatedHostAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDedicatedHostAttributeRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void DescribeDedicatedHostAttributeRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

