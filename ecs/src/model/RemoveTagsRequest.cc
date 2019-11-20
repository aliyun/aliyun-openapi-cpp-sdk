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
{
	setMethod(HttpRequest::Method::Post);
}

RemoveTagsRequest::~RemoveTagsRequest()
{}

long RemoveTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RemoveTagsRequest::getRegionId()const
{
	return regionId_;
}

void RemoveTagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<RemoveTagsRequest::Tag> RemoveTagsRequest::getTag()const
{
	return tag_;
}

void RemoveTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string RemoveTagsRequest::getResourceId()const
{
	return resourceId_;
}

void RemoveTagsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string RemoveTagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveTagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long RemoveTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveTagsRequest::getResourceType()const
{
	return resourceType_;
}

void RemoveTagsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

