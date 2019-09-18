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

#include <alibabacloud/dds/model/DescribeReplicationGroupRequest.h>

using AlibabaCloud::Dds::Model::DescribeReplicationGroupRequest;

DescribeReplicationGroupRequest::DescribeReplicationGroupRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeReplicationGroup")
{}

DescribeReplicationGroupRequest::~DescribeReplicationGroupRequest()
{}

long DescribeReplicationGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicationGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeReplicationGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicationGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeReplicationGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicationGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeReplicationGroupRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void DescribeReplicationGroupRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setCoreParameter("SourceInstanceId", sourceInstanceId);
}

std::string DescribeReplicationGroupRequest::getDestinationInstanceIds()const
{
	return destinationInstanceIds_;
}

void DescribeReplicationGroupRequest::setDestinationInstanceIds(const std::string& destinationInstanceIds)
{
	destinationInstanceIds_ = destinationInstanceIds;
	setCoreParameter("DestinationInstanceIds", destinationInstanceIds);
}

std::string DescribeReplicationGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicationGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicationGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicationGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeReplicationGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicationGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeReplicationGroupRequest::getReplicationGroupId()const
{
	return replicationGroupId_;
}

void DescribeReplicationGroupRequest::setReplicationGroupId(const std::string& replicationGroupId)
{
	replicationGroupId_ = replicationGroupId;
	setCoreParameter("ReplicationGroupId", replicationGroupId);
}

