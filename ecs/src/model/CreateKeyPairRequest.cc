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

#include <alibabacloud/ecs/model/CreateKeyPairRequest.h>

using AlibabaCloud::Ecs::Model::CreateKeyPairRequest;

CreateKeyPairRequest::CreateKeyPairRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateKeyPair")
{}

CreateKeyPairRequest::~CreateKeyPairRequest()
{}

std::string CreateKeyPairRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateKeyPairRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateKeyPairRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateKeyPairRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateKeyPairRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateKeyPairRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateKeyPairRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateKeyPairRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string CreateKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

long CreateKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateKeyPairRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateKeyPairRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateKeyPairRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateKeyPairRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateKeyPairRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateKeyPairRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateKeyPairRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateKeyPairRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void CreateKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateKeyPairRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateKeyPairRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateKeyPairRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateKeyPairRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CreateKeyPairRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateKeyPairRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

