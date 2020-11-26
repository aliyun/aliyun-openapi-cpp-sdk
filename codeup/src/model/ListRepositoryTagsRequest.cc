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

#include <alibabacloud/codeup/model/ListRepositoryTagsRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoryTagsRequest;

ListRepositoryTagsRequest::ListRepositoryTagsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/repository/tags");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoryTagsRequest::~ListRepositoryTagsRequest()
{}

std::string ListRepositoryTagsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoryTagsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

bool ListRepositoryTagsRequest::getShowSignature()const
{
	return showSignature_;
}

void ListRepositoryTagsRequest::setShowSignature(bool showSignature)
{
	showSignature_ = showSignature;
	setParameter("ShowSignature", showSignature ? "true" : "false");
}

std::string ListRepositoryTagsRequest::getSort()const
{
	return sort_;
}

void ListRepositoryTagsRequest::setSort(const std::string& sort)
{
	sort_ = sort;
	setParameter("Sort", sort);
}

std::string ListRepositoryTagsRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoryTagsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoryTagsRequest::getSearch()const
{
	return search_;
}

void ListRepositoryTagsRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

long ListRepositoryTagsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRepositoryTagsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListRepositoryTagsRequest::getPage()const
{
	return page_;
}

void ListRepositoryTagsRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListRepositoryTagsRequest::getProjectId()const
{
	return projectId_;
}

void ListRepositoryTagsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

