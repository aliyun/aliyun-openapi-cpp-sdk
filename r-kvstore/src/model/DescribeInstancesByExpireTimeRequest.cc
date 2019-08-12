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

#include <alibabacloud/r-kvstore/model/DescribeInstancesByExpireTimeRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstancesByExpireTimeRequest;

DescribeInstancesByExpireTimeRequest::DescribeInstancesByExpireTimeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstancesByExpireTime")
{}

DescribeInstancesByExpireTimeRequest::~DescribeInstancesByExpireTimeRequest()
{}

long DescribeInstancesByExpireTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesByExpireTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstancesByExpireTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstancesByExpireTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstancesByExpireTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesByExpireTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeInstancesByExpireTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesByExpireTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeInstancesByExpireTimeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesByExpireTimeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesByExpireTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstancesByExpireTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstancesByExpireTimeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstancesByExpireTimeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInstancesByExpireTimeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesByExpireTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeInstancesByExpireTimeRequest::getHasExpiredRes()const
{
	return hasExpiredRes_;
}

void DescribeInstancesByExpireTimeRequest::setHasExpiredRes(bool hasExpiredRes)
{
	hasExpiredRes_ = hasExpiredRes;
	setCoreParameter("HasExpiredRes", hasExpiredRes ? "true" : "false");
}

int DescribeInstancesByExpireTimeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesByExpireTimeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesByExpireTimeRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstancesByExpireTimeRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

int DescribeInstancesByExpireTimeRequest::getExpirePeriod()const
{
	return expirePeriod_;
}

void DescribeInstancesByExpireTimeRequest::setExpirePeriod(int expirePeriod)
{
	expirePeriod_ = expirePeriod;
	setCoreParameter("ExpirePeriod", std::to_string(expirePeriod));
}

