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

#include <alibabacloud/cas/model/ListTagKeysRequest.h>

using AlibabaCloud::Cas::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest() :
	RpcServiceRequest("cas", "2018-08-13", "ListTagKeys")
{}

ListTagKeysRequest::~ListTagKeysRequest()
{}

std::string ListTagKeysRequest::getSourceIp()const
{
	return sourceIp_;
}

void ListTagKeysRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string ListTagKeysRequest::getRegionId()const
{
	return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ListTagKeysRequest::getPageSize()const
{
	return pageSize_;
}

void ListTagKeysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListTagKeysRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListTagKeysRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string ListTagKeysRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

