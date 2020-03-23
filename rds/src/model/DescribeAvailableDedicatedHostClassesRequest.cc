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

#include <alibabacloud/rds/model/DescribeAvailableDedicatedHostClassesRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableDedicatedHostClassesRequest;

DescribeAvailableDedicatedHostClassesRequest::DescribeAvailableDedicatedHostClassesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableDedicatedHostClasses")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableDedicatedHostClassesRequest::~DescribeAvailableDedicatedHostClassesRequest()
{}

long DescribeAvailableDedicatedHostClassesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableDedicatedHostClassesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableDedicatedHostClassesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableDedicatedHostClassesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeAvailableDedicatedHostClassesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableDedicatedHostClassesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableDedicatedHostClassesRequest::getStorageType()const
{
	return storageType_;
}

void DescribeAvailableDedicatedHostClassesRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setParameter("StorageType", storageType);
}

std::string DescribeAvailableDedicatedHostClassesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableDedicatedHostClassesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableDedicatedHostClassesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableDedicatedHostClassesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeAvailableDedicatedHostClassesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableDedicatedHostClassesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

