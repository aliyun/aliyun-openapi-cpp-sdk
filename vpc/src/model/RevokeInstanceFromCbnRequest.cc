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

#include <alibabacloud/vpc/model/RevokeInstanceFromCbnRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

RevokeInstanceFromCbnRequest::RevokeInstanceFromCbnRequest() :
	VpcRequest("RevokeInstanceFromCbn")
{}

RevokeInstanceFromCbnRequest::~RevokeInstanceFromCbnRequest()
{}

long RevokeInstanceFromCbnRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeInstanceFromCbnRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeInstanceFromCbnRequest::getInstanceId()const
{
	return instanceId_;
}

void RevokeInstanceFromCbnRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RevokeInstanceFromCbnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeInstanceFromCbnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeInstanceFromCbnRequest::getRegionId()const
{
	return regionId_;
}

void RevokeInstanceFromCbnRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RevokeInstanceFromCbnRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeInstanceFromCbnRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RevokeInstanceFromCbnRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeInstanceFromCbnRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RevokeInstanceFromCbnRequest::getInstanceType()const
{
	return instanceType_;
}

void RevokeInstanceFromCbnRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string RevokeInstanceFromCbnRequest::getCbnUid()const
{
	return cbnUid_;
}

void RevokeInstanceFromCbnRequest::setCbnUid(const std::string& cbnUid)
{
	cbnUid_ = cbnUid;
	setParameter("CbnUid", cbnUid);
}

std::string RevokeInstanceFromCbnRequest::getCbnInstanceId()const
{
	return cbnInstanceId_;
}

void RevokeInstanceFromCbnRequest::setCbnInstanceId(const std::string& cbnInstanceId)
{
	cbnInstanceId_ = cbnInstanceId;
	setParameter("CbnInstanceId", cbnInstanceId);
}

long RevokeInstanceFromCbnRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeInstanceFromCbnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

