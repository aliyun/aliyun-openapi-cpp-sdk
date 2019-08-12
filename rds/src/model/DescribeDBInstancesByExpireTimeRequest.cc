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

#include <alibabacloud/rds/model/DescribeDBInstancesByExpireTimeRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesByExpireTimeRequest;

DescribeDBInstancesByExpireTimeRequest::DescribeDBInstancesByExpireTimeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancesByExpireTime")
{}

DescribeDBInstancesByExpireTimeRequest::~DescribeDBInstancesByExpireTimeRequest()
{}

long DescribeDBInstancesByExpireTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancesByExpireTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstancesByExpireTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancesByExpireTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstancesByExpireTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstancesByExpireTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstancesByExpireTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancesByExpireTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeDBInstancesByExpireTimeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstancesByExpireTimeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDBInstancesByExpireTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancesByExpireTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstancesByExpireTimeRequest::getTags()const
{
	return tags_;
}

void DescribeDBInstancesByExpireTimeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

bool DescribeDBInstancesByExpireTimeRequest::getExpired()const
{
	return expired_;
}

void DescribeDBInstancesByExpireTimeRequest::setExpired(bool expired)
{
	expired_ = expired;
	setCoreParameter("Expired", expired);
}

std::string DescribeDBInstancesByExpireTimeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancesByExpireTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeDBInstancesByExpireTimeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDBInstancesByExpireTimeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeDBInstancesByExpireTimeRequest::getExpirePeriod()const
{
	return expirePeriod_;
}

void DescribeDBInstancesByExpireTimeRequest::setExpirePeriod(int expirePeriod)
{
	expirePeriod_ = expirePeriod;
	setCoreParameter("ExpirePeriod", expirePeriod);
}

std::string DescribeDBInstancesByExpireTimeRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeDBInstancesByExpireTimeRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setCoreParameter("ProxyId", proxyId);
}

