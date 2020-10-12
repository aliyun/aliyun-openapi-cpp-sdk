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

#include <alibabacloud/codeup/model/GetRepositoryInfoRequest.h>

using AlibabaCloud::Codeup::Model::GetRepositoryInfoRequest;

GetRepositoryInfoRequest::GetRepositoryInfoRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/info");
	setMethod(HttpRequest::Method::Get);
}

GetRepositoryInfoRequest::~GetRepositoryInfoRequest()
{}

std::string GetRepositoryInfoRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetRepositoryInfoRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetRepositoryInfoRequest::getIdentity()const
{
	return identity_;
}

void GetRepositoryInfoRequest::setIdentity(const std::string& identity)
{
	identity_ = identity;
	setParameter("Identity", identity);
}

std::string GetRepositoryInfoRequest::getAccessToken()const
{
	return accessToken_;
}

void GetRepositoryInfoRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

