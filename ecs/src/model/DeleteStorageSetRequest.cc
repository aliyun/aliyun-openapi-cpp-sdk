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

#include <alibabacloud/ecs/model/DeleteStorageSetRequest.h>

using AlibabaCloud::Ecs::Model::DeleteStorageSetRequest;

DeleteStorageSetRequest::DeleteStorageSetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteStorageSet")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteStorageSetRequest::~DeleteStorageSetRequest()
{}

long DeleteStorageSetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteStorageSetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteStorageSetRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteStorageSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteStorageSetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteStorageSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteStorageSetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteStorageSetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteStorageSetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteStorageSetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteStorageSetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteStorageSetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteStorageSetRequest::getStorageSetId()const
{
	return storageSetId_;
}

void DeleteStorageSetRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", storageSetId);
}

