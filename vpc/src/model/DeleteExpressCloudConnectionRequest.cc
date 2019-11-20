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

#include <alibabacloud/vpc/model/DeleteExpressCloudConnectionRequest.h>

using AlibabaCloud::Vpc::Model::DeleteExpressCloudConnectionRequest;

DeleteExpressCloudConnectionRequest::DeleteExpressCloudConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteExpressCloudConnection")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteExpressCloudConnectionRequest::~DeleteExpressCloudConnectionRequest()
{}

long DeleteExpressCloudConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteExpressCloudConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteExpressCloudConnectionRequest::getRegionId()const
{
	return regionId_;
}

void DeleteExpressCloudConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteExpressCloudConnectionRequest::getEccId()const
{
	return eccId_;
}

void DeleteExpressCloudConnectionRequest::setEccId(const std::string& eccId)
{
	eccId_ = eccId;
	setCoreParameter("EccId", eccId);
}

std::string DeleteExpressCloudConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteExpressCloudConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteExpressCloudConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteExpressCloudConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteExpressCloudConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteExpressCloudConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}
