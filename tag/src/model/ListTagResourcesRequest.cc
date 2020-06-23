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

#include <alibabacloud/tag/model/ListTagResourcesRequest.h>

using AlibabaCloud::Tag::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("tag", "2018-08-28", "ListTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

std::string ListTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagResourcesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListTagResourcesRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagResourcesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> ListTagResourcesRequest::getResourceARN()const
{
	return resourceARN_;
}

void ListTagResourcesRequest::setResourceARN(const std::vector<std::string>& resourceARN)
{
	resourceARN_ = resourceARN;
	for(int dep1 = 0; dep1!= resourceARN.size(); dep1++) {
		setParameter("ResourceARN."+ std::to_string(dep1), resourceARN.at(dep1));
	}
}

std::string ListTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListTagResourcesRequest::getTags()const
{
	return tags_;
}

void ListTagResourcesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string ListTagResourcesRequest::getCategory()const
{
	return category_;
}

void ListTagResourcesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

