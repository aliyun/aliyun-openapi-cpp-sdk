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

#include <alibabacloud/r-kvstore/model/DescribeShardingInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeShardingInstancesRequest;

DescribeShardingInstancesRequest::DescribeShardingInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeShardingInstances")
{}

DescribeShardingInstancesRequest::~DescribeShardingInstancesRequest()
{}

long DescribeShardingInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeShardingInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeShardingInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeShardingInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeShardingInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeShardingInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeShardingInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeShardingInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeShardingInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeShardingInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string DescribeShardingInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeShardingInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeShardingInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeShardingInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeShardingInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeShardingInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

