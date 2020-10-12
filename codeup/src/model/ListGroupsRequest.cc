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

#include <alibabacloud/codeup/model/ListGroupsRequest.h>

using AlibabaCloud::Codeup::Model::ListGroupsRequest;

ListGroupsRequest::ListGroupsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/groups/all");
	setMethod(HttpRequest::Method::Get);
}

ListGroupsRequest::~ListGroupsRequest()
{}

std::string ListGroupsRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListGroupsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

bool ListGroupsRequest::getIncludePersonal()const
{
	return includePersonal_;
}

void ListGroupsRequest::setIncludePersonal(bool includePersonal)
{
	includePersonal_ = includePersonal;
	setParameter("IncludePersonal", includePersonal ? "true" : "false");
}

std::string ListGroupsRequest::getSearch()const
{
	return search_;
}

void ListGroupsRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

std::string ListGroupsRequest::getSubUserId()const
{
	return subUserId_;
}

void ListGroupsRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long ListGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void ListGroupsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListGroupsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListGroupsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long ListGroupsRequest::getPage()const
{
	return page_;
}

void ListGroupsRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

