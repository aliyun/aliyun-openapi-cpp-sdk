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

#include <alibabacloud/r-kvstore/model/DescribeSecurityIpsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeSecurityIpsRequest;

DescribeSecurityIpsRequest::DescribeSecurityIpsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeSecurityIps")
{}

DescribeSecurityIpsRequest::~DescribeSecurityIpsRequest()
{}

long DescribeSecurityIpsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityIpsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSecurityIpsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSecurityIpsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeSecurityIpsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSecurityIpsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeSecurityIpsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityIpsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSecurityIpsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityIpsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeSecurityIpsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityIpsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeSecurityIpsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityIpsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeSecurityIpsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSecurityIpsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

