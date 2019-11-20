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

#include <alibabacloud/ecs/model/ListTagResourcesRequest.h>

using AlibabaCloud::Ecs::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ListTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

long ListTagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListTagResourcesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setCoreParameter("NextToken", nextToken);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag()const
{
	return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::vector<std::string> ListTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++)
		setCoreParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
}

std::string ListTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ListTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<ListTagResourcesRequest::TagFilter> ListTagResourcesRequest::getTagFilter()const
{
	return tagFilter_;
}

void ListTagResourcesRequest::setTagFilter(const std::vector<TagFilter>& tagFilter)
{
	tagFilter_ = tagFilter;
	for(int dep1 = 0; dep1!= tagFilter.size(); dep1++) {
		auto tagFilterObj = tagFilter.at(dep1);
		std::string tagFilterObjStr = "TagFilter." + std::to_string(dep1);
		setCoreParameter(tagFilterObjStr + ".TagKey", tagFilterObj.tagKey);
		for(int dep2 = 0; dep2!= tagValues.size(); dep2++)
			setCoreParameter(tagFilterObjStr + ".TagValues."+ std::to_string(dep2), tagFilterObj.tagValues.at(dep2));
	}
}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

