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

#include <alibabacloud/codeup/model/ListGroupRepositoriesRequest.h>

using AlibabaCloud::Codeup::Model::ListGroupRepositoriesRequest;

ListGroupRepositoriesRequest::ListGroupRepositoriesRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/groups/[Identity]/projects");
	setMethod(HttpRequest::Method::Get);
}

ListGroupRepositoriesRequest::~ListGroupRepositoriesRequest()
{}

std::string ListGroupRepositoriesRequest::getAccessToken()const
{
	return accessToken_;
}

void ListGroupRepositoriesRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

bool ListGroupRepositoriesRequest::getIsMember()const
{
	return isMember_;
}

void ListGroupRepositoriesRequest::setIsMember(bool isMember)
{
	isMember_ = isMember;
	setParameter("IsMember", isMember ? "true" : "false");
}

std::string ListGroupRepositoriesRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListGroupRepositoriesRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListGroupRepositoriesRequest::getSearch()const
{
	return search_;
}

void ListGroupRepositoriesRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

std::string ListGroupRepositoriesRequest::getSubUserId()const
{
	return subUserId_;
}

void ListGroupRepositoriesRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string ListGroupRepositoriesRequest::getIdentity()const
{
	return identity_;
}

void ListGroupRepositoriesRequest::setIdentity(const std::string& identity)
{
	identity_ = identity;
	setParameter("Identity", identity);
}

long ListGroupRepositoriesRequest::getPageSize()const
{
	return pageSize_;
}

void ListGroupRepositoriesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListGroupRepositoriesRequest::getPage()const
{
	return page_;
}

void ListGroupRepositoriesRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

