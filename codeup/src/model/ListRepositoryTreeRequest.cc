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

#include <alibabacloud/codeup/model/ListRepositoryTreeRequest.h>

using AlibabaCloud::Codeup::Model::ListRepositoryTreeRequest;

ListRepositoryTreeRequest::ListRepositoryTreeRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/repository/tree");
	setMethod(HttpRequest::Method::Get);
}

ListRepositoryTreeRequest::~ListRepositoryTreeRequest()
{}

std::string ListRepositoryTreeRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListRepositoryTreeRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string ListRepositoryTreeRequest::getPath()const
{
	return path_;
}

void ListRepositoryTreeRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string ListRepositoryTreeRequest::getSubUserId()const
{
	return subUserId_;
}

void ListRepositoryTreeRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string ListRepositoryTreeRequest::getAccessToken()const
{
	return accessToken_;
}

void ListRepositoryTreeRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

std::string ListRepositoryTreeRequest::getType()const
{
	return type_;
}

void ListRepositoryTreeRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long ListRepositoryTreeRequest::getProjectId()const
{
	return projectId_;
}

void ListRepositoryTreeRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

std::string ListRepositoryTreeRequest::getRefName()const
{
	return refName_;
}

void ListRepositoryTreeRequest::setRefName(const std::string& refName)
{
	refName_ = refName;
	setParameter("RefName", refName);
}

