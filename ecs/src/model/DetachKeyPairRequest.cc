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

#include <alibabacloud/ecs/model/DetachKeyPairRequest.h>

using AlibabaCloud::Ecs::Model::DetachKeyPairRequest;

DetachKeyPairRequest::DetachKeyPairRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DetachKeyPair")
{}

DetachKeyPairRequest::~DetachKeyPairRequest()
{}

std::string DetachKeyPairRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DetachKeyPairRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

long DetachKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DetachKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DetachKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void DetachKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DetachKeyPairRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DetachKeyPairRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", std::to_string(instanceIds));
}

std::string DetachKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void DetachKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", std::to_string(keyPairName));
}

long DetachKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

