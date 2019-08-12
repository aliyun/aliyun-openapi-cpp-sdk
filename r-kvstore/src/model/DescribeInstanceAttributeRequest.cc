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

#include <alibabacloud/r-kvstore/model/DescribeInstanceAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstanceAttributeRequest;

DescribeInstanceAttributeRequest::DescribeInstanceAttributeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstanceAttribute")
{}

DescribeInstanceAttributeRequest::~DescribeInstanceAttributeRequest()
{}

long DescribeInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeInstanceAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeInstanceAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

