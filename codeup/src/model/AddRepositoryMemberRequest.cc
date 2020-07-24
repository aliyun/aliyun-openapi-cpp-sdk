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

#include <alibabacloud/codeup/model/AddRepositoryMemberRequest.h>

using AlibabaCloud::Codeup::Model::AddRepositoryMemberRequest;

AddRepositoryMemberRequest::AddRepositoryMemberRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/members");
	setMethod(HttpRequest::Method::Post);
}

AddRepositoryMemberRequest::~AddRepositoryMemberRequest()
{}

std::string AddRepositoryMemberRequest::getOrganizationId()const
{
	return organizationId_;
}

void AddRepositoryMemberRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string AddRepositoryMemberRequest::getSubUserId()const
{
	return subUserId_;
}

void AddRepositoryMemberRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string AddRepositoryMemberRequest::getClientToken()const
{
	return clientToken_;
}

void AddRepositoryMemberRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddRepositoryMemberRequest::getAccessToken()const
{
	return accessToken_;
}

void AddRepositoryMemberRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long AddRepositoryMemberRequest::getProjectId()const
{
	return projectId_;
}

void AddRepositoryMemberRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

