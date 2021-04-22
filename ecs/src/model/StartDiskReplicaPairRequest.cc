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

#include <alibabacloud/ecs/model/StartDiskReplicaPairRequest.h>

using AlibabaCloud::Ecs::Model::StartDiskReplicaPairRequest;

StartDiskReplicaPairRequest::StartDiskReplicaPairRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "StartDiskReplicaPair")
{
	setMethod(HttpRequest::Method::Post);
}

StartDiskReplicaPairRequest::~StartDiskReplicaPairRequest()
{}

long StartDiskReplicaPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartDiskReplicaPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartDiskReplicaPairRequest::getRegionId()const
{
	return regionId_;
}

void StartDiskReplicaPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartDiskReplicaPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartDiskReplicaPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartDiskReplicaPairRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartDiskReplicaPairRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long StartDiskReplicaPairRequest::getOwnerId()const
{
	return ownerId_;
}

void StartDiskReplicaPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartDiskReplicaPairRequest::getReplicaPairId()const
{
	return replicaPairId_;
}

void StartDiskReplicaPairRequest::setReplicaPairId(const std::string& replicaPairId)
{
	replicaPairId_ = replicaPairId;
	setParameter("ReplicaPairId", replicaPairId);
}

