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

#include <alibabacloud/codeup/model/ListRepositoryMemberRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoryMemberRequest;

ListRepositoryMemberRequest::ListRepositoryMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/members");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoryMemberRequest::~ListRepositoryMemberRequest()
{}

std::string ListRepositoryMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoryMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoryMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void ListRepositoryMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string ListRepositoryMemberRequest::getQuery()const
{
	return query_;
}

void ListRepositoryMemberRequest::setQuery(const std::string& query)
{
	query_ = query;
	setParameter("Query", query);
}

long ListRepositoryMemberRequest::getPageSize()const
{
	return pageSize_;
}

void ListRepositoryMemberRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListRepositoryMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoryMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long ListRepositoryMemberRequest::getPage()const
{
	return page_;
}

void ListRepositoryMemberRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListRepositoryMemberRequest::getProjectId()const
{
	return projectId_;
}

void ListRepositoryMemberRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

