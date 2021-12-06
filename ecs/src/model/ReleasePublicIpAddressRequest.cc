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

#include <alibabacloud/ecs/model/ReleasePublicIpAddressRequest.h>

using AlibabaCloud::Ecs::Model::ReleasePublicIpAddressRequest;

ReleasePublicIpAddressRequest::ReleasePublicIpAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReleasePublicIpAddress")
{
	setMethod(HttpRequest::Method::Post);
}

ReleasePublicIpAddressRequest::~ReleasePublicIpAddressRequest()
{}

long ReleasePublicIpAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleasePublicIpAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReleasePublicIpAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleasePublicIpAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReleasePublicIpAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleasePublicIpAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ReleasePublicIpAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleasePublicIpAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReleasePublicIpAddressRequest::getPublicIpAddress()const
{
	return publicIpAddress_;
}

void ReleasePublicIpAddressRequest::setPublicIpAddress(const std::string& publicIpAddress)
{
	publicIpAddress_ = publicIpAddress;
	setParameter("PublicIpAddress", publicIpAddress);
}

std::string ReleasePublicIpAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void ReleasePublicIpAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

