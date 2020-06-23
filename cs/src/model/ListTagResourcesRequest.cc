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

#include <alibabacloud/cs/model/ListTagResourcesRequest.h>

using AlibabaCloud::CS::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/tags");
	setMethod(HttpRequest::Method::Get);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

std::string ListTagResourcesRequest::getResource_type()const
{
	return resource_type_;
}

void ListTagResourcesRequest::setResource_type(const std::string& resource_type)
{
	resource_type_ = resource_type;
	setParameter("Resource_type", resource_type);
}

std::string ListTagResourcesRequest::getNext_token()const
{
	return next_token_;
}

void ListTagResourcesRequest::setNext_token(const std::string& next_token)
{
	next_token_ = next_token;
	setParameter("Next_token", next_token);
}

std::string ListTagResourcesRequest::getResource_ids()const
{
	return resource_ids_;
}

void ListTagResourcesRequest::setResource_ids(const std::string& resource_ids)
{
	resource_ids_ = resource_ids;
	setParameter("Resource_ids", resource_ids);
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

