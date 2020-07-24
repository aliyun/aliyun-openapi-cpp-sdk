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

#include <alibabacloud/codeup/model/UpdateRepositoryMemberRequest.h>

using AlibabaCloud::Codeup::Model::UpdateRepositoryMemberRequest;

UpdateRepositoryMemberRequest::UpdateRepositoryMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/members/[UserId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateRepositoryMemberRequest::~UpdateRepositoryMemberRequest()
{}

std::string UpdateRepositoryMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void UpdateRepositoryMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string UpdateRepositoryMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void UpdateRepositoryMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string UpdateRepositoryMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void UpdateRepositoryMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long UpdateRepositoryMemberRequest::getProjectId()const
{
	return projectId_;
}

void UpdateRepositoryMemberRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

long UpdateRepositoryMemberRequest::getUserId()const
{
	return userId_;
}

void UpdateRepositoryMemberRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

