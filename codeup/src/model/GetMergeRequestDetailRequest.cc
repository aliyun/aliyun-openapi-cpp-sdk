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

#include <alibabacloud/codeup/model/GetMergeRequestDetailRequest.h>

using AlibabaCloud::Codeup::Model::GetMergeRequestDetailRequest;

GetMergeRequestDetailRequest::GetMergeRequestDetailRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/merge_request/[MergeRequestId]");
	setMethod(HttpRequest::Method::Get);
}

GetMergeRequestDetailRequest::~GetMergeRequestDetailRequest()
{}

std::string GetMergeRequestDetailRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetMergeRequestDetailRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

long GetMergeRequestDetailRequest::getMergeRequestId()const
{
	return mergeRequestId_;
}

void GetMergeRequestDetailRequest::setMergeRequestId(long mergeRequestId)
{
	mergeRequestId_ = mergeRequestId;
	setParameter("MergeRequestId", std::to_string(mergeRequestId));
}

std::string GetMergeRequestDetailRequest::getAccessToken()const
{
	return accessToken_;
}

void GetMergeRequestDetailRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetMergeRequestDetailRequest::getProjectId()const
{
	return projectId_;
}

void GetMergeRequestDetailRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

