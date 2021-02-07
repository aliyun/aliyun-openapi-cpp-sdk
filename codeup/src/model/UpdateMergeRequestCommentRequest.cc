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

#include <alibabacloud/codeup/model/UpdateMergeRequestCommentRequest.h>

using AlibabaCloud::Codeup::Model::UpdateMergeRequestCommentRequest;

UpdateMergeRequestCommentRequest::UpdateMergeRequestCommentRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/merge_requests/[MergeRequestId]/notes/[NoteId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateMergeRequestCommentRequest::~UpdateMergeRequestCommentRequest()
{}

std::string UpdateMergeRequestCommentRequest::getOrganizationId()const
{
	return organizationId_;
}

void UpdateMergeRequestCommentRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

long UpdateMergeRequestCommentRequest::getMergeRequestId()const
{
	return mergeRequestId_;
}

void UpdateMergeRequestCommentRequest::setMergeRequestId(long mergeRequestId)
{
	mergeRequestId_ = mergeRequestId;
	setParameter("MergeRequestId", std::to_string(mergeRequestId));
}

std::string UpdateMergeRequestCommentRequest::getAccessToken()const
{
	return accessToken_;
}

void UpdateMergeRequestCommentRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long UpdateMergeRequestCommentRequest::getNoteId()const
{
	return noteId_;
}

void UpdateMergeRequestCommentRequest::setNoteId(long noteId)
{
	noteId_ = noteId;
	setParameter("NoteId", std::to_string(noteId));
}

long UpdateMergeRequestCommentRequest::getProjectId()const
{
	return projectId_;
}

void UpdateMergeRequestCommentRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

