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

#include <alibabacloud/vpc/model/RevokeInstanceFromCenRequest.h>

using AlibabaCloud::Vpc::Model::RevokeInstanceFromCenRequest;

RevokeInstanceFromCenRequest::RevokeInstanceFromCenRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "RevokeInstanceFromCen")
{}

RevokeInstanceFromCenRequest::~RevokeInstanceFromCenRequest()
{}

long RevokeInstanceFromCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeInstanceFromCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeInstanceFromCenRequest::getInstanceId()const
{
	return instanceId_;
}

void RevokeInstanceFromCenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string RevokeInstanceFromCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeInstanceFromCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeInstanceFromCenRequest::getRegionId()const
{
	return regionId_;
}

void RevokeInstanceFromCenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RevokeInstanceFromCenRequest::getCenId()const
{
	return cenId_;
}

void RevokeInstanceFromCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string RevokeInstanceFromCenRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeInstanceFromCenRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RevokeInstanceFromCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeInstanceFromCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RevokeInstanceFromCenRequest::getInstanceType()const
{
	return instanceType_;
}

void RevokeInstanceFromCenRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

long RevokeInstanceFromCenRequest::getCenOwnerId()const
{
	return cenOwnerId_;
}

void RevokeInstanceFromCenRequest::setCenOwnerId(long cenOwnerId)
{
	cenOwnerId_ = cenOwnerId;
	setCoreParameter("CenOwnerId", std::to_string(cenOwnerId));
}

long RevokeInstanceFromCenRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeInstanceFromCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

