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

#include <alibabacloud/ecs/model/RemoveTagsRequest.h>

using AlibabaCloud::Ecs::Model::RemoveTagsRequest;

RemoveTagsRequest::RemoveTagsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RemoveTags")
{}

RemoveTagsRequest::~RemoveTagsRequest()
{}

std::string RemoveTagsRequest::getTag4Value()const
{
	return tag4Value_;
}

void RemoveTagsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long RemoveTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveTagsRequest::getResourceId()const
{
	return resourceId_;
}

void RemoveTagsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string RemoveTagsRequest::getTag2Key()const
{
	return tag2Key_;
}

void RemoveTagsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string RemoveTagsRequest::getTag5Key()const
{
	return tag5Key_;
}

void RemoveTagsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string RemoveTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveTagsRequest::getTag3Key()const
{
	return tag3Key_;
}

void RemoveTagsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long RemoveTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveTagsRequest::getResourceType()const
{
	return resourceType_;
}

void RemoveTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string RemoveTagsRequest::getTag5Value()const
{
	return tag5Value_;
}

void RemoveTagsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string RemoveTagsRequest::getTag1Key()const
{
	return tag1Key_;
}

void RemoveTagsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string RemoveTagsRequest::getTag1Value()const
{
	return tag1Value_;
}

void RemoveTagsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string RemoveTagsRequest::getRegionId()const
{
	return regionId_;
}

void RemoveTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RemoveTagsRequest::getTag2Value()const
{
	return tag2Value_;
}

void RemoveTagsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string RemoveTagsRequest::getTag4Key()const
{
	return tag4Key_;
}

void RemoveTagsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string RemoveTagsRequest::getTag3Value()const
{
	return tag3Value_;
}

void RemoveTagsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

