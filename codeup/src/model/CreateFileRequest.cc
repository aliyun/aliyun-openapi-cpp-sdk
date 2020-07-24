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

#include <alibabacloud/codeup/model/CreateFileRequest.h>

using AlibabaCloud::Codeup::Model::CreateFileRequest;

CreateFileRequest::CreateFileRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/files");
	setMethod(HttpRequest::Method::Post);
}

CreateFileRequest::~CreateFileRequest()
{}

std::string CreateFileRequest::getOrganizationId()const
{
	return organizationId_;
}

void CreateFileRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string CreateFileRequest::getSubUserId()const
{
	return subUserId_;
}

void CreateFileRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string CreateFileRequest::getClientToken()const
{
	return clientToken_;
}

void CreateFileRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateFileRequest::getAccessToken()const
{
	return accessToken_;
}

void CreateFileRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long CreateFileRequest::getProjectId()const
{
	return projectId_;
}

void CreateFileRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

