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

#include <alibabacloud/codeup/model/CreateMergeRequestRequest.h>

using AlibabaCloud::Codeup::Model::CreateMergeRequestRequest;

CreateMergeRequestRequest::CreateMergeRequestRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/merge_requests");
	setMethod(HttpRequest::Method::Post);
}

CreateMergeRequestRequest::~CreateMergeRequestRequest()
{}

std::string CreateMergeRequestRequest::getOrganizationId()const
{
	return organizationId_;
}

void CreateMergeRequestRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string CreateMergeRequestRequest::getSubUserId()const
{
	return subUserId_;
}

void CreateMergeRequestRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string CreateMergeRequestRequest::getAccessToken()const
{
	return accessToken_;
}

void CreateMergeRequestRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long CreateMergeRequestRequest::getProjectId()const
{
	return projectId_;
}

void CreateMergeRequestRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

