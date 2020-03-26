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

#include <alibabacloud/emr/model/ListTagValuesRequest.h>

using AlibabaCloud::Emr::Model::ListTagValuesRequest;

ListTagValuesRequest::ListTagValuesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListTagValues")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagValuesRequest::~ListTagValuesRequest()
{}

long ListTagValuesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagValuesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTagValuesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagValuesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTagValuesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagValuesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListTagValuesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagValuesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagValuesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagValuesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTagValuesRequest::getScope()const
{
	return scope_;
}

void ListTagValuesRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

int ListTagValuesRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagValuesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTagValuesRequest::getKey()const
{
	return key_;
}

void ListTagValuesRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

