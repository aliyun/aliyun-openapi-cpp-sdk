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

#include <alibabacloud/codeup/model/DeleteBranchRequest.h>

using AlibabaCloud::Codeup::Model::DeleteBranchRequest;

DeleteBranchRequest::DeleteBranchRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/branches/delete");
	setMethod(HttpRequest::Method::Delete);
}

DeleteBranchRequest::~DeleteBranchRequest()
{}

std::string DeleteBranchRequest::getOrganizationId()const
{
	return organizationId_;
}

void DeleteBranchRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string DeleteBranchRequest::getSubUserId()const
{
	return subUserId_;
}

void DeleteBranchRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string DeleteBranchRequest::getAccessToken()const
{
	return accessToken_;
}

void DeleteBranchRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long DeleteBranchRequest::getProjectId()const
{
	return projectId_;
}

void DeleteBranchRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

std::string DeleteBranchRequest::getBranchName()const
{
	return branchName_;
}

void DeleteBranchRequest::setBranchName(const std::string& branchName)
{
	branchName_ = branchName;
	setParameter("BranchName", branchName);
}

