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

#include <alibabacloud/dds/model/DescribeAvaliableTimeRangeRequest.h>

using AlibabaCloud::Dds::Model::DescribeAvaliableTimeRangeRequest;

DescribeAvaliableTimeRangeRequest::DescribeAvaliableTimeRangeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAvaliableTimeRange")
{}

DescribeAvaliableTimeRangeRequest::~DescribeAvaliableTimeRangeRequest()
{}

long DescribeAvaliableTimeRangeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvaliableTimeRangeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAvaliableTimeRangeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAvaliableTimeRangeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeAvaliableTimeRangeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAvaliableTimeRangeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeAvaliableTimeRangeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvaliableTimeRangeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeAvaliableTimeRangeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvaliableTimeRangeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeAvaliableTimeRangeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvaliableTimeRangeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeAvaliableTimeRangeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvaliableTimeRangeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAvaliableTimeRangeRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeAvaliableTimeRangeRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string DescribeAvaliableTimeRangeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvaliableTimeRangeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

