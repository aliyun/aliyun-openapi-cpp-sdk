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

#include <alibabacloud/vpc/model/GrantInstanceToCenRequest.h>

using AlibabaCloud::Vpc::Model::GrantInstanceToCenRequest;

GrantInstanceToCenRequest::GrantInstanceToCenRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "GrantInstanceToCen")
{}

GrantInstanceToCenRequest::~GrantInstanceToCenRequest()
{}

long GrantInstanceToCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GrantInstanceToCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GrantInstanceToCenRequest::getInstanceId()const
{
	return instanceId_;
}

void GrantInstanceToCenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string GrantInstanceToCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GrantInstanceToCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string GrantInstanceToCenRequest::getRegionId()const
{
	return regionId_;
}

void GrantInstanceToCenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GrantInstanceToCenRequest::getCenId()const
{
	return cenId_;
}

void GrantInstanceToCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", std::to_string(cenId));
}

std::string GrantInstanceToCenRequest::getClientToken()const
{
	return clientToken_;
}

void GrantInstanceToCenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string GrantInstanceToCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GrantInstanceToCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string GrantInstanceToCenRequest::getInstanceType()const
{
	return instanceType_;
}

void GrantInstanceToCenRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

long GrantInstanceToCenRequest::getCenOwnerId()const
{
	return cenOwnerId_;
}

void GrantInstanceToCenRequest::setCenOwnerId(long cenOwnerId)
{
	cenOwnerId_ = cenOwnerId;
	setCoreParameter("CenOwnerId", cenOwnerId);
}

long GrantInstanceToCenRequest::getOwnerId()const
{
	return ownerId_;
}

void GrantInstanceToCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

