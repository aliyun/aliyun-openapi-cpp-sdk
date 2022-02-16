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

#include <alibabacloud/emr/model/ListTagResourcesRequest.h>

using AlibabaCloud::Emr::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

std::string ListTagResourcesRequest::getClientToken()const
{
	return clientToken_;
}

void ListTagResourcesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
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

std::string ListTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

Array ListTagResourcesRequest::getTags()const
{
	return tags_;
}

void ListTagResourcesRequest::setTags(const Array& tags)
{
	tags_ = tags;
	setParameter("Tags", std::to_string(tags));
}

int ListTagResourcesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListTagResourcesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListTagResourcesRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListTagResourcesRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

Array ListTagResourcesRequest::getResourceIds()const
{
	return resourceIds_;
}

void ListTagResourcesRequest::setResourceIds(const Array& resourceIds)
{
	resourceIds_ = resourceIds;
	setParameter("ResourceIds", std::to_string(resourceIds));
}

