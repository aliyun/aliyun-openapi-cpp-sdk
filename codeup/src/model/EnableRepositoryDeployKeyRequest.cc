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

#include <alibabacloud/codeup/model/EnableRepositoryDeployKeyRequest.h>

using AlibabaCloud::Codeup::Model::EnableRepositoryDeployKeyRequest;

EnableRepositoryDeployKeyRequest::EnableRepositoryDeployKeyRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/keys/[KeyId]/enable");
	setMethod(HttpRequest::Method::Post);
}

EnableRepositoryDeployKeyRequest::~EnableRepositoryDeployKeyRequest()
{}

std::string EnableRepositoryDeployKeyRequest::getOrganizationId()const
{
	return organizationId_;
}

void EnableRepositoryDeployKeyRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string EnableRepositoryDeployKeyRequest::getSubUserId()const
{
	return subUserId_;
}

void EnableRepositoryDeployKeyRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string EnableRepositoryDeployKeyRequest::getAccessToken()const
{
	return accessToken_;
}

void EnableRepositoryDeployKeyRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long EnableRepositoryDeployKeyRequest::getKeyId()const
{
	return keyId_;
}

void EnableRepositoryDeployKeyRequest::setKeyId(long keyId)
{
	keyId_ = keyId;
	setParameter("KeyId", std::to_string(keyId));
}

long EnableRepositoryDeployKeyRequest::getProjectId()const
{
	return projectId_;
}

void EnableRepositoryDeployKeyRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

