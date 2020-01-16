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

#include <alibabacloud/r-kvstore/model/DescribeRedisLogConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeRedisLogConfigRequest;

DescribeRedisLogConfigRequest::DescribeRedisLogConfigRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeRedisLogConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRedisLogConfigRequest::~DescribeRedisLogConfigRequest()
{}

long DescribeRedisLogConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRedisLogConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRedisLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRedisLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRedisLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRedisLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRedisLogConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRedisLogConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRedisLogConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRedisLogConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRedisLogConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRedisLogConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeRedisLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRedisLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRedisLogConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeRedisLogConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

