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

#include <alibabacloud/ecs/model/DeleteRecycleBinRequest.h>

using AlibabaCloud::Ecs::Model::DeleteRecycleBinRequest;

DeleteRecycleBinRequest::DeleteRecycleBinRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteRecycleBin")
{}

DeleteRecycleBinRequest::~DeleteRecycleBinRequest()
{}

long DeleteRecycleBinRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRecycleBinRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteRecycleBinRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRecycleBinRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRecycleBinRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRecycleBinRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteRecycleBinRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRecycleBinRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteRecycleBinRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRecycleBinRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRecycleBinRequest::getResourceIds()const
{
	return resourceIds_;
}

void DeleteRecycleBinRequest::setResourceIds(const std::string& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", resourceIds);
}

