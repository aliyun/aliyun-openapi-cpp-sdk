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

#include <alibabacloud/ecs/model/BindIpRangeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

BindIpRangeRequest::BindIpRangeRequest() :
	EcsRequest("BindIpRange")
{}

BindIpRangeRequest::~BindIpRangeRequest()
{}

std::string BindIpRangeRequest::getIpAddress()const
{
	return ipAddress_;
}

void BindIpRangeRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long BindIpRangeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BindIpRangeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BindIpRangeRequest::getInstanceId()const
{
	return instanceId_;
}

void BindIpRangeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string BindIpRangeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BindIpRangeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string BindIpRangeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BindIpRangeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long BindIpRangeRequest::getOwnerId()const
{
	return ownerId_;
}

void BindIpRangeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

