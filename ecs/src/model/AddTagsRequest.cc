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

#include <alibabacloud/ecs/model/AddTagsRequest.h>

using AlibabaCloud::Ecs::Model::AddTagsRequest;

AddTagsRequest::AddTagsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AddTags")
{}

AddTagsRequest::~AddTagsRequest()
{}

std::string AddTagsRequest::getTag4Value()const
{
	return tag4Value_;
}

void AddTagsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long AddTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddTagsRequest::getResourceId()const
{
	return resourceId_;
}

void AddTagsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string AddTagsRequest::getTag2Key()const
{
	return tag2Key_;
}

void AddTagsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string AddTagsRequest::getTag5Key()const
{
	return tag5Key_;
}

void AddTagsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string AddTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddTagsRequest::getTag3Key()const
{
	return tag3Key_;
}

void AddTagsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long AddTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void AddTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddTagsRequest::getResourceType()const
{
	return resourceType_;
}

void AddTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string AddTagsRequest::getTag5Value()const
{
	return tag5Value_;
}

void AddTagsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string AddTagsRequest::getTag1Key()const
{
	return tag1Key_;
}

void AddTagsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string AddTagsRequest::getTag1Value()const
{
	return tag1Value_;
}

void AddTagsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string AddTagsRequest::getRegionId()const
{
	return regionId_;
}

void AddTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddTagsRequest::getTag2Value()const
{
	return tag2Value_;
}

void AddTagsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string AddTagsRequest::getTag4Key()const
{
	return tag4Key_;
}

void AddTagsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string AddTagsRequest::getTag3Value()const
{
	return tag3Value_;
}

void AddTagsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

