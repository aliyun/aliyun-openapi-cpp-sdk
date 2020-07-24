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

#include <alibabacloud/codeup/model/DeleteFileRequest.h>

using AlibabaCloud::Codeup::Model::DeleteFileRequest;

DeleteFileRequest::DeleteFileRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/files");
	setMethod(HttpRequest::Method::Delete);
}

DeleteFileRequest::~DeleteFileRequest()
{}

std::string DeleteFileRequest::getOrganizationId()const
{
	return organizationId_;
}

void DeleteFileRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string DeleteFileRequest::getSubUserId()const
{
	return subUserId_;
}

void DeleteFileRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string DeleteFileRequest::getFilePath()const
{
	return filePath_;
}

void DeleteFileRequest::setFilePath(const std::string& filePath)
{
	filePath_ = filePath;
	setParameter("FilePath", filePath);
}

std::string DeleteFileRequest::getAccessToken()const
{
	return accessToken_;
}

void DeleteFileRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

std::string DeleteFileRequest::getCommitMessage()const
{
	return commitMessage_;
}

void DeleteFileRequest::setCommitMessage(const std::string& commitMessage)
{
	commitMessage_ = commitMessage;
	setParameter("CommitMessage", commitMessage);
}

long DeleteFileRequest::getProjectId()const
{
	return projectId_;
}

void DeleteFileRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

std::string DeleteFileRequest::getBranchName()const
{
	return branchName_;
}

void DeleteFileRequest::setBranchName(const std::string& branchName)
{
	branchName_ = branchName;
	setParameter("BranchName", branchName);
}

