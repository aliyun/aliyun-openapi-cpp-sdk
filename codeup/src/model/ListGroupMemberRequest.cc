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

#include <alibabacloud/codeup/model/ListGroupMemberRequest.h>

using AlibabaCloud::Codeup::Model::ListGroupMemberRequest;

ListGroupMemberRequest::ListGroupMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/groups/[GroupId]/members");
	setMethod(HttpRequest::Method::Get);
}

ListGroupMemberRequest::~ListGroupMemberRequest()
{}

std::string ListGroupMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListGroupMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListGroupMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void ListGroupMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long ListGroupMemberRequest::getGroupId()const
{
	return groupId_;
}

void ListGroupMemberRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

long ListGroupMemberRequest::getPageSize()const
{
	return pageSize_;
}

void ListGroupMemberRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListGroupMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void ListGroupMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long ListGroupMemberRequest::getPage()const
{
	return page_;
}

void ListGroupMemberRequest::setPage(long page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

