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

#include <alibabacloud/codeup/model/UpdateGroupMemberRequest.h>

using AlibabaCloud::Codeup::Model::UpdateGroupMemberRequest;

UpdateGroupMemberRequest::UpdateGroupMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/groups/[GroupId]/members/[UserId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateGroupMemberRequest::~UpdateGroupMemberRequest()
{}

std::string UpdateGroupMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void UpdateGroupMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string UpdateGroupMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void UpdateGroupMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

long UpdateGroupMemberRequest::getGroupId()const
{
	return groupId_;
}

void UpdateGroupMemberRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string UpdateGroupMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void UpdateGroupMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long UpdateGroupMemberRequest::getUserId()const
{
	return userId_;
}

void UpdateGroupMemberRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

