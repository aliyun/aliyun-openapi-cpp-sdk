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

#include <alibabacloud/ecs/model/TagResourcesRequest.h>

using AlibabaCloud::Ecs::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "TagResources")
{
	setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest()
{}

std::string TagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag()const
{
	return tag_;
}

void TagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::vector<std::string> TagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setCoreParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

std::string TagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long TagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void TagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

