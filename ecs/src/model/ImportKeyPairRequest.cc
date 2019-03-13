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

#include <alibabacloud/ecs/model/ImportKeyPairRequest.h>

using AlibabaCloud::Ecs::Model::ImportKeyPairRequest;

ImportKeyPairRequest::ImportKeyPairRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ImportKeyPair")
{}

ImportKeyPairRequest::~ImportKeyPairRequest()
{}

std::string ImportKeyPairRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ImportKeyPairRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

long ImportKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ImportKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void ImportKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ImportKeyPairRequest::getPublicKeyBody()const
{
	return publicKeyBody_;
}

void ImportKeyPairRequest::setPublicKeyBody(const std::string& publicKeyBody)
{
	publicKeyBody_ = publicKeyBody;
	setParameter("PublicKeyBody", publicKeyBody);
}

std::string ImportKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ImportKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

long ImportKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

