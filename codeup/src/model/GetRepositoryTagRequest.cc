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

#include <alibabacloud/codeup/model/GetRepositoryTagRequest.h>

using AlibabaCloud::Codeup::Model::GetRepositoryTagRequest;

GetRepositoryTagRequest::GetRepositoryTagRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/tags/[TagName]");
	setMethod(HttpRequest::Method::Get);
}

GetRepositoryTagRequest::~GetRepositoryTagRequest()
{}

std::string GetRepositoryTagRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetRepositoryTagRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetRepositoryTagRequest::getTagName()const
{
	return tagName_;
}

void GetRepositoryTagRequest::setTagName(const std::string& tagName)
{
	tagName_ = tagName;
	setParameter("TagName", tagName);
}

std::string GetRepositoryTagRequest::getAccessToken()const
{
	return accessToken_;
}

void GetRepositoryTagRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetRepositoryTagRequest::getProjectId()const
{
	return projectId_;
}

void GetRepositoryTagRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

