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

#include <alibabacloud/edas/model/ListTagResourcesRequest.h>

using AlibabaCloud::Edas::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/tag/tags");
	setMethod(HttpRequest::Method::Get);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTagResourcesRequest::getResourceRegionId()const
{
	return resourceRegionId_;
}

void ListTagResourcesRequest::setResourceRegionId(const std::string& resourceRegionId)
{
	resourceRegionId_ = resourceRegionId;
	setParameter("ResourceRegionId", resourceRegionId);
}

std::map<std::string, std::string> ListTagResourcesRequest::getResourceIds()const
{
	return resourceIds_;
}

void ListTagResourcesRequest::setResourceIds(const std::map<std::string, std::string>& resourceIds)
{
	resourceIds_ = resourceIds;
	setJsonParameters("ResourceIds", resourceIds);
}

std::map<std::string, std::string> ListTagResourcesRequest::getTags()const
{
	return tags_;
}

void ListTagResourcesRequest::setTags(const std::map<std::string, std::string>& tags)
{
	tags_ = tags;
	setJsonParameters("Tags", tags);
}

