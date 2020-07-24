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

#include <alibabacloud/codeup/model/AddGroupMemberRequest.h>

using AlibabaCloud::Codeup::Model::AddGroupMemberRequest;

AddGroupMemberRequest::AddGroupMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/groups/[GroupId]/members");
	setMethod(HttpRequest::Method::Post);
}

AddGroupMemberRequest::~AddGroupMemberRequest()
{}

std::string AddGroupMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void AddGroupMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string AddGroupMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void AddGroupMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string AddGroupMemberRequest::getClientToken()const
{
	return clientToken_;
}

void AddGroupMemberRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long AddGroupMemberRequest::getGroupId()const
{
	return groupId_;
}

void AddGroupMemberRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string AddGroupMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void AddGroupMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

