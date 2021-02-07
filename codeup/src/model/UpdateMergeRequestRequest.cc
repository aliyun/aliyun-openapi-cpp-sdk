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

#include <alibabacloud/codeup/model/UpdateMergeRequestRequest.h>

using AlibabaCloud::Codeup::Model::UpdateMergeRequestRequest;

UpdateMergeRequestRequest::UpdateMergeRequestRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/merge_request/[MergeRequestId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateMergeRequestRequest::~UpdateMergeRequestRequest()
{}

std::string UpdateMergeRequestRequest::getOrganizationId()const
{
	return organizationId_;
}

void UpdateMergeRequestRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

long UpdateMergeRequestRequest::getMergeRequestId()const
{
	return mergeRequestId_;
}

void UpdateMergeRequestRequest::setMergeRequestId(long mergeRequestId)
{
	mergeRequestId_ = mergeRequestId;
	setParameter("MergeRequestId", std::to_string(mergeRequestId));
}

std::string UpdateMergeRequestRequest::getAccessToken()const
{
	return accessToken_;
}

void UpdateMergeRequestRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long UpdateMergeRequestRequest::getProjectId()const
{
	return projectId_;
}

void UpdateMergeRequestRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

