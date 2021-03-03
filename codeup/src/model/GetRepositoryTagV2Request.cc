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

#include <alibabacloud/codeup/model/GetRepositoryTagV2Request.h>

using AlibabaCloud::Codeup::Model::GetRepositoryTagV2Request;

GetRepositoryTagV2Request::GetRepositoryTagV2Request() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/tag/info");
	setMethod(HttpRequest::Method::Get);
}

GetRepositoryTagV2Request::~GetRepositoryTagV2Request()
{}

std::string GetRepositoryTagV2Request::getOrganizationId()const
{
	return organizationId_;
}

void GetRepositoryTagV2Request::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetRepositoryTagV2Request::getTagName()const
{
	return tagName_;
}

void GetRepositoryTagV2Request::setTagName(const std::string& tagName)
{
	tagName_ = tagName;
	setParameter("TagName", tagName);
}

std::string GetRepositoryTagV2Request::getAccessToken()const
{
	return accessToken_;
}

void GetRepositoryTagV2Request::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetRepositoryTagV2Request::getProjectId()const
{
	return projectId_;
}

void GetRepositoryTagV2Request::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

