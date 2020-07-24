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

#include <alibabacloud/codeup/model/GetCodeupOrganizationRequest.h>

using AlibabaCloud::Codeup::Model::GetCodeupOrganizationRequest;

GetCodeupOrganizationRequest::GetCodeupOrganizationRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/organization/[OrganizationIdentity]");
	setMethod(HttpRequest::Method::Get);
}

GetCodeupOrganizationRequest::~GetCodeupOrganizationRequest()
{}

std::string GetCodeupOrganizationRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetCodeupOrganizationRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetCodeupOrganizationRequest::getSubUserId()const
{
	return subUserId_;
}

void GetCodeupOrganizationRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string GetCodeupOrganizationRequest::getOrganizationIdentity()const
{
	return organizationIdentity_;
}

void GetCodeupOrganizationRequest::setOrganizationIdentity(const std::string& organizationIdentity)
{
	organizationIdentity_ = organizationIdentity;
	setParameter("OrganizationIdentity", organizationIdentity);
}

std::string GetCodeupOrganizationRequest::getAccessToken()const
{
	return accessToken_;
}

void GetCodeupOrganizationRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

