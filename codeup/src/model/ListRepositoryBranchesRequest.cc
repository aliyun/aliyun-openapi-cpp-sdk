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

#include <alibabacloud/codeup/model/ListRepositoryBranchesRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoryBranchesRequest;

ListRepositoryBranchesRequest::ListRepositoryBranchesRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/branches");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoryBranchesRequest::~ListRepositoryBranchesRequest()
{}

std::string ListRepositoryBranchesRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoryBranchesRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoryBranchesRequest::getSearch()const
{
	return search_;
}

void ListRepositoryBranchesRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

std::string ListRepositoryBranchesRequest::getSubUserId()const
{
	return subUserId_;
}

void ListRepositoryBranchesRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long ListRepositoryBranchesRequest::getPageSize()const
{
	return pageSize_;
}

void ListRepositoryBranchesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListRepositoryBranchesRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoryBranchesRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long ListRepositoryBranchesRequest::getPage()const
{
	return page_;
}

void ListRepositoryBranchesRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListRepositoryBranchesRequest::getProjectId()const
{
	return projectId_;
}

void ListRepositoryBranchesRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

