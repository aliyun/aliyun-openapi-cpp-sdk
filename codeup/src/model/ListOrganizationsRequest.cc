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

#include <alibabacloud/codeup/model/ListOrganizationsRequest.h>

using AlibabaCloud::Codeup::Model::ListOrganizationsRequest;

ListOrganizationsRequest::ListOrganizationsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/organization");
	setMethod(HttpRequest::Method::Get);
}

ListOrganizationsRequest::~ListOrganizationsRequest()
{}

int ListOrganizationsRequest::getAccessLevel()const
{
	return accessLevel_;
}

void ListOrganizationsRequest::setAccessLevel(int accessLevel)
{
	accessLevel_ = accessLevel;
	setParameter("AccessLevel", std::to_string(accessLevel));
}

int ListOrganizationsRequest::getMinAccessLevel()const
{
	return minAccessLevel_;
}

void ListOrganizationsRequest::setMinAccessLevel(int minAccessLevel)
{
	minAccessLevel_ = minAccessLevel;
	setParameter("MinAccessLevel", std::to_string(minAccessLevel));
}

std::string ListOrganizationsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListOrganizationsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

