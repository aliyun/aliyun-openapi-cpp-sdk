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

#include <alibabacloud/codeup/model/CreateRepositoryRequest.h>

using AlibabaCloud::Codeup::Model::CreateRepositoryRequest;

CreateRepositoryRequest::CreateRepositoryRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects");
	setMethod(HttpRequest::Method::Post);
}

CreateRepositoryRequest::~CreateRepositoryRequest()
{}

std::string CreateRepositoryRequest::getOrganizationId()const
{
	return organizationId_;
}

void CreateRepositoryRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string CreateRepositoryRequest::getSubUserId()const
{
	return subUserId_;
}

void CreateRepositoryRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string CreateRepositoryRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRepositoryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateRepositoryRequest::getAccessToken()const
{
	return accessToken_;
}

void CreateRepositoryRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

bool CreateRepositoryRequest::getSync()const
{
	return sync_;
}

void CreateRepositoryRequest::setSync(bool sync)
{
	sync_ = sync;
	setParameter("Sync", sync ? "true" : "false");
}

bool CreateRepositoryRequest::getCreateParentPath()const
{
	return createParentPath_;
}

void CreateRepositoryRequest::setCreateParentPath(bool createParentPath)
{
	createParentPath_ = createParentPath;
	setParameter("CreateParentPath", createParentPath ? "true" : "false");
}

