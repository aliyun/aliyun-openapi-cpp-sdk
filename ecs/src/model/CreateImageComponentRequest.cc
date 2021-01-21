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

#include <alibabacloud/ecs/model/CreateImageComponentRequest.h>

using AlibabaCloud::Ecs::Model::CreateImageComponentRequest;

CreateImageComponentRequest::CreateImageComponentRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateImageComponent")
{
	setMethod(HttpRequest::Method::Post);
}

CreateImageComponentRequest::~CreateImageComponentRequest()
{}

long CreateImageComponentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateImageComponentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateImageComponentRequest::getClientToken()const
{
	return clientToken_;
}

void CreateImageComponentRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateImageComponentRequest::getDescription()const
{
	return description_;
}

void CreateImageComponentRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateImageComponentRequest::getSystemType()const
{
	return systemType_;
}

void CreateImageComponentRequest::setSystemType(const std::string& systemType)
{
	systemType_ = systemType;
	setParameter("SystemType", systemType);
}

std::string CreateImageComponentRequest::getContent()const
{
	return content_;
}

void CreateImageComponentRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string CreateImageComponentRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateImageComponentRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateImageComponentRequest::getRegionId()const
{
	return regionId_;
}

void CreateImageComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<CreateImageComponentRequest::Tag> CreateImageComponentRequest::getTag()const
{
	return tag_;
}

void CreateImageComponentRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string CreateImageComponentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateImageComponentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateImageComponentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateImageComponentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateImageComponentRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateImageComponentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateImageComponentRequest::getComponentType()const
{
	return componentType_;
}

void CreateImageComponentRequest::setComponentType(const std::string& componentType)
{
	componentType_ = componentType;
	setParameter("ComponentType", componentType);
}

std::string CreateImageComponentRequest::getName()const
{
	return name_;
}

void CreateImageComponentRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

