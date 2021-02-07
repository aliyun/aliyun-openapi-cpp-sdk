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

#include <alibabacloud/codeup/model/GetMergeRequestApproveStatusRequest.h>

using AlibabaCloud::Codeup::Model::GetMergeRequestApproveStatusRequest;

GetMergeRequestApproveStatusRequest::GetMergeRequestApproveStatusRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/merge_request/[MergeRequestId]/approve_status");
	setMethod(HttpRequest::Method::Get);
}

GetMergeRequestApproveStatusRequest::~GetMergeRequestApproveStatusRequest()
{}

std::string GetMergeRequestApproveStatusRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetMergeRequestApproveStatusRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

long GetMergeRequestApproveStatusRequest::getMergeRequestId()const
{
	return mergeRequestId_;
}

void GetMergeRequestApproveStatusRequest::setMergeRequestId(long mergeRequestId)
{
	mergeRequestId_ = mergeRequestId;
	setParameter("MergeRequestId", std::to_string(mergeRequestId));
}

std::string GetMergeRequestApproveStatusRequest::getAccessToken()const
{
	return accessToken_;
}

void GetMergeRequestApproveStatusRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetMergeRequestApproveStatusRequest::getProjectId()const
{
	return projectId_;
}

void GetMergeRequestApproveStatusRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

