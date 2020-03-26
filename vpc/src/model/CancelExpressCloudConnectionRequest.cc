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

#include <alibabacloud/vpc/model/CancelExpressCloudConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CancelExpressCloudConnectionRequest;

CancelExpressCloudConnectionRequest::CancelExpressCloudConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CancelExpressCloudConnection")
{
	setMethod(HttpRequest::Method::Post);
}

CancelExpressCloudConnectionRequest::~CancelExpressCloudConnectionRequest()
{}

long CancelExpressCloudConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelExpressCloudConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelExpressCloudConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CancelExpressCloudConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CancelExpressCloudConnectionRequest::getEccId()const
{
	return eccId_;
}

void CancelExpressCloudConnectionRequest::setEccId(const std::string& eccId)
{
	eccId_ = eccId;
	setParameter("EccId", eccId);
}

std::string CancelExpressCloudConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelExpressCloudConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelExpressCloudConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelExpressCloudConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CancelExpressCloudConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelExpressCloudConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

