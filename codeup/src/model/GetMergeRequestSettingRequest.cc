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

#include <alibabacloud/codeup/model/GetMergeRequestSettingRequest.h>

using AlibabaCloud::Codeup::Model::GetMergeRequestSettingRequest;

GetMergeRequestSettingRequest::GetMergeRequestSettingRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/settings/merge_requests");
	setMethod(HttpRequest::Method::Get);
}

GetMergeRequestSettingRequest::~GetMergeRequestSettingRequest()
{}

std::string GetMergeRequestSettingRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetMergeRequestSettingRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetMergeRequestSettingRequest::getAccessToken()const
{
	return accessToken_;
}

void GetMergeRequestSettingRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetMergeRequestSettingRequest::getProjectId()const
{
	return projectId_;
}

void GetMergeRequestSettingRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

