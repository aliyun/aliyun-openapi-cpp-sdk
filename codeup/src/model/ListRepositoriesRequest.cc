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

#include <alibabacloud/codeup/model/ListRepositoriesRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoriesRequest;

ListRepositoriesRequest::ListRepositoriesRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/all");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoriesRequest::~ListRepositoriesRequest()
{}

std::string ListRepositoriesRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoriesRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

bool ListRepositoriesRequest::getArchive()const
{
	return archive_;
}

void ListRepositoriesRequest::setArchive(bool archive)
{
	archive_ = archive;
	setParameter("Archive", archive ? "true" : "false");
}

std::string ListRepositoriesRequest::getSort()const
{
	return sort_;
}

void ListRepositoriesRequest::setSort(const std::string& sort)
{
	sort_ = sort;
	setParameter("Sort", sort);
}

std::string ListRepositoriesRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoriesRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoriesRequest::getSearch()const
{
	return search_;
}

void ListRepositoriesRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

long ListRepositoriesRequest::getPageSize()const
{
	return pageSize_;
}

void ListRepositoriesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListRepositoriesRequest::getPage()const
{
	return page_;
}

void ListRepositoriesRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListRepositoriesRequest::getOrder()const
{
	return order_;
}

void ListRepositoriesRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

