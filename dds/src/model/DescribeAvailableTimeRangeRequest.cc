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

#include <alibabacloud/dds/model/DescribeAvailableTimeRangeRequest.h>

using AlibabaCloud::Dds::Model::DescribeAvailableTimeRangeRequest;

DescribeAvailableTimeRangeRequest::DescribeAvailableTimeRangeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAvailableTimeRange")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableTimeRangeRequest::~DescribeAvailableTimeRangeRequest()
{}

long DescribeAvailableTimeRangeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableTimeRangeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableTimeRangeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableTimeRangeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableTimeRangeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAvailableTimeRangeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeAvailableTimeRangeRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeAvailableTimeRangeRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string DescribeAvailableTimeRangeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableTimeRangeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableTimeRangeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableTimeRangeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeAvailableTimeRangeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableTimeRangeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableTimeRangeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAvailableTimeRangeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

