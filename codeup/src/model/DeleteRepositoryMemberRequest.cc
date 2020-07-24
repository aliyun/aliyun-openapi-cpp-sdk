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

#include <alibabacloud/codeup/model/DeleteRepositoryMemberRequest.h>

using AlibabaCloud::Codeup::Model::DeleteRepositoryMemberRequest;

DeleteRepositoryMemberRequest::DeleteRepositoryMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/members/[UserId]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteRepositoryMemberRequest::~DeleteRepositoryMemberRequest()
{}

std::string DeleteRepositoryMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void DeleteRepositoryMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string DeleteRepositoryMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void DeleteRepositoryMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string DeleteRepositoryMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void DeleteRepositoryMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long DeleteRepositoryMemberRequest::getProjectId()const
{
	return projectId_;
}

void DeleteRepositoryMemberRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

long DeleteRepositoryMemberRequest::getUserId()const
{
	return userId_;
}

void DeleteRepositoryMemberRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

