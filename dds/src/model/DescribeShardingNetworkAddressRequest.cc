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

#include <alibabacloud/dds/model/DescribeShardingNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::DescribeShardingNetworkAddressRequest;

DescribeShardingNetworkAddressRequest::DescribeShardingNetworkAddressRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeShardingNetworkAddress")
{}

DescribeShardingNetworkAddressRequest::~DescribeShardingNetworkAddressRequest()
{}

long DescribeShardingNetworkAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeShardingNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeShardingNetworkAddressRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeShardingNetworkAddressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeShardingNetworkAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeShardingNetworkAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeShardingNetworkAddressRequest::getRegionId()const
{
	return regionId_;
}

void DescribeShardingNetworkAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeShardingNetworkAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeShardingNetworkAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeShardingNetworkAddressRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeShardingNetworkAddressRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeShardingNetworkAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeShardingNetworkAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeShardingNetworkAddressRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeShardingNetworkAddressRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DescribeShardingNetworkAddressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeShardingNetworkAddressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

