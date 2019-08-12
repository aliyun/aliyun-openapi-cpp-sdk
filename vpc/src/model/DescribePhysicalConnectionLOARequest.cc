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

#include <alibabacloud/vpc/model/DescribePhysicalConnectionLOARequest.h>

using AlibabaCloud::Vpc::Model::DescribePhysicalConnectionLOARequest;

DescribePhysicalConnectionLOARequest::DescribePhysicalConnectionLOARequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribePhysicalConnectionLOA")
{}

DescribePhysicalConnectionLOARequest::~DescribePhysicalConnectionLOARequest()
{}

long DescribePhysicalConnectionLOARequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePhysicalConnectionLOARequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePhysicalConnectionLOARequest::getInstanceId()const
{
	return instanceId_;
}

void DescribePhysicalConnectionLOARequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribePhysicalConnectionLOARequest::getRegionId()const
{
	return regionId_;
}

void DescribePhysicalConnectionLOARequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribePhysicalConnectionLOARequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePhysicalConnectionLOARequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePhysicalConnectionLOARequest::getClientToken()const
{
	return clientToken_;
}

void DescribePhysicalConnectionLOARequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribePhysicalConnectionLOARequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePhysicalConnectionLOARequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribePhysicalConnectionLOARequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePhysicalConnectionLOARequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

