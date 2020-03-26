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

#include <alibabacloud/emr/model/ListTagKeysRequest.h>

using AlibabaCloud::Emr::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListTagKeys")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest()
{}

long ListTagKeysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagKeysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTagKeysRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTagKeysRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagKeysRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListTagKeysRequest::getRegionId()const
{
	return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagKeysRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagKeysRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTagKeysRequest::getScope()const
{
	return scope_;
}

void ListTagKeysRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

int ListTagKeysRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagKeysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTagKeysRequest::getCategory()const
{
	return category_;
}

void ListTagKeysRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

