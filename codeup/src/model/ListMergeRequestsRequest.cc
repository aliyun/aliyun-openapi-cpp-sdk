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

#include <alibabacloud/codeup/model/ListMergeRequestsRequest.h>

using AlibabaCloud::Codeup::Model::ListMergeRequestsRequest;

ListMergeRequestsRequest::ListMergeRequestsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/merge_requests/advanced_search");
	setMethod(HttpRequest::Method::Get);
}

ListMergeRequestsRequest::~ListMergeRequestsRequest()
{}

std::string ListMergeRequestsRequest::getBeforeDate()const
{
	return beforeDate_;
}

void ListMergeRequestsRequest::setBeforeDate(const std::string& beforeDate)
{
	beforeDate_ = beforeDate;
	setParameter("BeforeDate", beforeDate);
}

std::string ListMergeRequestsRequest::getAssigneeIdList()const
{
	return assigneeIdList_;
}

void ListMergeRequestsRequest::setAssigneeIdList(const std::string& assigneeIdList)
{
	assigneeIdList_ = assigneeIdList;
	setParameter("AssigneeIdList", assigneeIdList);
}

std::string ListMergeRequestsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListMergeRequestsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

std::string ListMergeRequestsRequest::getSubscriberCodeupIdList()const
{
	return subscriberCodeupIdList_;
}

void ListMergeRequestsRequest::setSubscriberCodeupIdList(const std::string& subscriberCodeupIdList)
{
	subscriberCodeupIdList_ = subscriberCodeupIdList;
	setParameter("SubscriberCodeupIdList", subscriberCodeupIdList);
}

std::string ListMergeRequestsRequest::getAfterDate()const
{
	return afterDate_;
}

void ListMergeRequestsRequest::setAfterDate(const std::string& afterDate)
{
	afterDate_ = afterDate;
	setParameter("AfterDate", afterDate);
}

std::string ListMergeRequestsRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListMergeRequestsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListMergeRequestsRequest::getGroupIdList()const
{
	return groupIdList_;
}

void ListMergeRequestsRequest::setGroupIdList(const std::string& groupIdList)
{
	groupIdList_ = groupIdList;
	setParameter("GroupIdList", groupIdList);
}

std::string ListMergeRequestsRequest::getSearch()const
{
	return search_;
}

void ListMergeRequestsRequest::setSearch(const std::string& search)
{
	search_ = search;
	setParameter("Search", search);
}

std::string ListMergeRequestsRequest::getAuthorCodeupIdList()const
{
	return authorCodeupIdList_;
}

void ListMergeRequestsRequest::setAuthorCodeupIdList(const std::string& authorCodeupIdList)
{
	authorCodeupIdList_ = authorCodeupIdList;
	setParameter("AuthorCodeupIdList", authorCodeupIdList);
}

std::string ListMergeRequestsRequest::getAuthorIdList()const
{
	return authorIdList_;
}

void ListMergeRequestsRequest::setAuthorIdList(const std::string& authorIdList)
{
	authorIdList_ = authorIdList;
	setParameter("AuthorIdList", authorIdList);
}

long ListMergeRequestsRequest::getPageSize()const
{
	return pageSize_;
}

void ListMergeRequestsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListMergeRequestsRequest::getProjectIdList()const
{
	return projectIdList_;
}

void ListMergeRequestsRequest::setProjectIdList(const std::string& projectIdList)
{
	projectIdList_ = projectIdList;
	setParameter("ProjectIdList", projectIdList);
}

long ListMergeRequestsRequest::getPage()const
{
	return page_;
}

void ListMergeRequestsRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListMergeRequestsRequest::getAssigneeCodeupIdList()const
{
	return assigneeCodeupIdList_;
}

void ListMergeRequestsRequest::setAssigneeCodeupIdList(const std::string& assigneeCodeupIdList)
{
	assigneeCodeupIdList_ = assigneeCodeupIdList;
	setParameter("AssigneeCodeupIdList", assigneeCodeupIdList);
}

std::string ListMergeRequestsRequest::getState()const
{
	return state_;
}

void ListMergeRequestsRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string ListMergeRequestsRequest::getOrder()const
{
	return order_;
}

void ListMergeRequestsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

