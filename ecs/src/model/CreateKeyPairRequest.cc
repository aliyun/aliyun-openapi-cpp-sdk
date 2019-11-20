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
{
	setMethod(HttpRequest::Method::Post);
}

CreateKeyPairRequest::~CreateKeyPairRequest()
{}

long CreateKeyPairRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateKeyPairRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateKeyPairRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateKeyPairRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setCoreParameter("KeyPairName", keyPairName);
}

std::string CreateKeyPairRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateKeyPairRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateKeyPairRequest::getRegionId()const
{
	return regionId_;
}

void CreateKeyPairRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CreateKeyPairRequest::Tag> CreateKeyPairRequest::getTag()const
{
	return tag_;
}

void CreateKeyPairRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string CreateKeyPairRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateKeyPairRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateKeyPairRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateKeyPairRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

