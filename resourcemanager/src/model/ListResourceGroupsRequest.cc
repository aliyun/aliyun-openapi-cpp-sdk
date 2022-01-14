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

#include <alibabacloud/resourcemanager/model/ListResourceGroupsRequest.h>

using AlibabaCloud::ResourceManager::Model::ListResourceGroupsRequest;

ListResourceGroupsRequest::ListResourceGroupsRequest() :
	RpcServiceRequest("resourcemanager", "2020-03-31", "ListResourceGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListResourceGroupsRequest::~ListResourceGroupsRequest()
{}

int ListResourceGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListResourceGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListResourceGroupsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListResourceGroupsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

int ListResourceGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListResourceGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListResourceGroupsRequest::getDisplayName()const
{
	return displayName_;
}

void ListResourceGroupsRequest::setDisplayName(const std::string& displayName)
{
	displayName_ = displayName;
	setParameter("DisplayName", displayName);
}

std::string ListResourceGroupsRequest::getName()const
{
	return name_;
}

void ListResourceGroupsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ListResourceGroupsRequest::getStatus()const
{
	return status_;
}

void ListResourceGroupsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

