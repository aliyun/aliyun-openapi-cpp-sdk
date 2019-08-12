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

#include <alibabacloud/r-kvstore/model/DescribeInstanceConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstanceConfigRequest;

DescribeInstanceConfigRequest::DescribeInstanceConfigRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstanceConfig")
{}

DescribeInstanceConfigRequest::~DescribeInstanceConfigRequest()
{}

long DescribeInstanceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInstanceConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

