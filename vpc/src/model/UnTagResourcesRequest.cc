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

#include <alibabacloud/vpc/model/UnTagResourcesRequest.h>

using AlibabaCloud::Vpc::Model::UnTagResourcesRequest;

UnTagResourcesRequest::UnTagResourcesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

UnTagResourcesRequest::~UnTagResourcesRequest()
{}

long UnTagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnTagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void UnTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<UnTagResourcesRequest::Tag> UnTagResourcesRequest::getTag()const
{
	return tag_;
}

void UnTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool UnTagResourcesRequest::getAll()const
{
	return all_;
}

void UnTagResourcesRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

std::vector<std::string> UnTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void UnTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

std::string UnTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UnTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void UnTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::vector<std::string> UnTagResourcesRequest::getTagKey()const
{
	return tagKey_;
}

void UnTagResourcesRequest::setTagKey(const std::vector<std::string>& tagKey)
{
	tagKey_ = tagKey;
	for(int dep1 = 0; dep1!= tagKey.size(); dep1++) {
		setParameter("TagKey."+ std::to_string(dep1), tagKey.at(dep1));
	}
}

