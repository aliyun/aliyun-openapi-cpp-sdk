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

long AddTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddTagsRequest::getRegionId()const
{
	return regionId_;
}

void AddTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<AddTagsRequest::Tag> AddTagsRequest::getTag()const
{
	return tag_;
}

void AddTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string AddTagsRequest::getResourceId()const
{
	return resourceId_;
}

void AddTagsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string AddTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long AddTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void AddTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddTagsRequest::getResourceType()const
{
	return resourceType_;
}

void AddTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

