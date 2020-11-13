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

#include <alibabacloud/codeup/model/GetBranchInfoRequest.h>

using AlibabaCloud::Codeup::Model::GetBranchInfoRequest;

GetBranchInfoRequest::GetBranchInfoRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/branches/detail");
	setMethod(HttpRequest::Method::Get);
}

GetBranchInfoRequest::~GetBranchInfoRequest()
{}

std::string GetBranchInfoRequest::getOrganizationId()const
{
	return organizationId_;
}

void GetBranchInfoRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string GetBranchInfoRequest::getSubUserId()const
{
	return subUserId_;
}

void GetBranchInfoRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string GetBranchInfoRequest::getAccessToken()const
{
	return accessToken_;
}

void GetBranchInfoRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long GetBranchInfoRequest::getProjectId()const
{
	return projectId_;
}

void GetBranchInfoRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

std::string GetBranchInfoRequest::getBranchName()const
{
	return branchName_;
}

void GetBranchInfoRequest::setBranchName(const std::string& branchName)
{
	branchName_ = branchName;
	setParameter("BranchName", branchName);
}

