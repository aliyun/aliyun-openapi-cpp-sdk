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

#include <alibabacloud/ecs/model/AttachKeyPairRequest.h>

using AlibabaCloud::Ecs::Model::AttachKeyPairRequest;

AttachKeyPairRequest::AttachKeyPairRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AttachKeyPair")
{}

AttachKeyPairRequest::~AttachKeyPairRequest()
{}

std::string AttachKeyPairRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AttachKeyPairRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long AttachKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void AttachKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AttachKeyPairRequest::getInstanceIds()const
{
	return instanceIds_;
}

void AttachKeyPairRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string AttachKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void AttachKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

long AttachKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

