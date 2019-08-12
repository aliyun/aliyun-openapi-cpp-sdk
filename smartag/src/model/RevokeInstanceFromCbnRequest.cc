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

#include <alibabacloud/smartag/model/RevokeInstanceFromCbnRequest.h>

using AlibabaCloud::Smartag::Model::RevokeInstanceFromCbnRequest;

RevokeInstanceFromCbnRequest::RevokeInstanceFromCbnRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "RevokeInstanceFromCbn")
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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeInstanceFromCbnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeInstanceFromCbnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeInstanceFromCbnRequest::getRegionId()const
{
	return regionId_;
}

void RevokeInstanceFromCbnRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RevokeInstanceFromCbnRequest::getCenInstanceId()const
{
	return cenInstanceId_;
}

void RevokeInstanceFromCbnRequest::setCenInstanceId(const std::string& cenInstanceId)
{
	cenInstanceId_ = cenInstanceId;
	setCoreParameter("CenInstanceId", cenInstanceId);
}

std::string RevokeInstanceFromCbnRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeInstanceFromCbnRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RevokeInstanceFromCbnRequest::getCcnInstanceId()const
{
	return ccnInstanceId_;
}

void RevokeInstanceFromCbnRequest::setCcnInstanceId(const std::string& ccnInstanceId)
{
	ccnInstanceId_ = ccnInstanceId;
	setCoreParameter("CcnInstanceId", ccnInstanceId);
}

long RevokeInstanceFromCbnRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeInstanceFromCbnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

