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

#include <alibabacloud/codeup/model/ListRepositoryCommitsRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoryCommitsRequest;

ListRepositoryCommitsRequest::ListRepositoryCommitsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/repository/commits");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoryCommitsRequest::~ListRepositoryCommitsRequest()
{}

std::string ListRepositoryCommitsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoryCommitsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

bool ListRepositoryCommitsRequest::getShowSignature()const
{
	return showSignature_;
}

void ListRepositoryCommitsRequest::setShowSignature(bool showSignature)
{
	showSignature_ = showSignature;
	setParameter("ShowSignature", showSignature ? "true" : "false");
}

std::string ListRepositoryCommitsRequest::getRefName()const
{
	return refName_;
}

void ListRepositoryCommitsRequest::setRefName(const std::string& refName)
{
	refName_ = refName;
	setParameter("RefName", refName);
}

std::string ListRepositoryCommitsRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoryCommitsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoryCommitsRequest::getPath()const
{
	return path_;
}

void ListRepositoryCommitsRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string ListRepositoryCommitsRequest::getSearch()const
{
	return search_;
}

void ListRepositoryCommitsRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

long ListRepositoryCommitsRequest::getPageSize()const
{
	return pageSize_;
}

void ListRepositoryCommitsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListRepositoryCommitsRequest::getPage()const
{
	return page_;
}

void ListRepositoryCommitsRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListRepositoryCommitsRequest::getProjectId()const
{
	return projectId_;
}

void ListRepositoryCommitsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

