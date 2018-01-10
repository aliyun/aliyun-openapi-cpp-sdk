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

#include <alibabacloud/vpc/model/GrantInstanceToCbnRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

GrantInstanceToCbnRequest::GrantInstanceToCbnRequest() :
	VpcRequest("GrantInstanceToCbn")
{}

GrantInstanceToCbnRequest::~GrantInstanceToCbnRequest()
{}

long GrantInstanceToCbnRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GrantInstanceToCbnRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GrantInstanceToCbnRequest::getInstanceId()const
{
	return instanceId_;
}

void GrantInstanceToCbnRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GrantInstanceToCbnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GrantInstanceToCbnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GrantInstanceToCbnRequest::getRegionId()const
{
	return regionId_;
}

void GrantInstanceToCbnRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GrantInstanceToCbnRequest::getClientToken()const
{
	return clientToken_;
}

void GrantInstanceToCbnRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GrantInstanceToCbnRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GrantInstanceToCbnRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GrantInstanceToCbnRequest::getInstanceType()const
{
	return instanceType_;
}

void GrantInstanceToCbnRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string GrantInstanceToCbnRequest::getCbnUid()const
{
	return cbnUid_;
}

void GrantInstanceToCbnRequest::setCbnUid(const std::string& cbnUid)
{
	cbnUid_ = cbnUid;
	setParameter("CbnUid", cbnUid);
}

std::string GrantInstanceToCbnRequest::getCbnInstanceId()const
{
	return cbnInstanceId_;
}

void GrantInstanceToCbnRequest::setCbnInstanceId(const std::string& cbnInstanceId)
{
	cbnInstanceId_ = cbnInstanceId;
	setParameter("CbnInstanceId", cbnInstanceId);
}

long GrantInstanceToCbnRequest::getOwnerId()const
{
	return ownerId_;
}

void GrantInstanceToCbnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

