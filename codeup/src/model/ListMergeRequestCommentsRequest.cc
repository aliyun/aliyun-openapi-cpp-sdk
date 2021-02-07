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

#include <alibabacloud/codeup/model/ListMergeRequestCommentsRequest.h>

using AlibabaCloud::Codeup::Model::ListMergeRequestCommentsRequest;

ListMergeRequestCommentsRequest::ListMergeRequestCommentsRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v4/projects/[ProjectId]/merge_request/[MergeRequestId]/comments");
	setMethod(HttpRequest::Method::Get);
}

ListMergeRequestCommentsRequest::~ListMergeRequestCommentsRequest()
{}

std::string ListMergeRequestCommentsRequest::getOrganizationId()const
{
	return organizationId_;
}

void ListMergeRequestCommentsRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

long ListMergeRequestCommentsRequest::getMergeRequestId()const
{
	return mergeRequestId_;
}

void ListMergeRequestCommentsRequest::setMergeRequestId(long mergeRequestId)
{
	mergeRequestId_ = mergeRequestId;
	setParameter("MergeRequestId", std::to_string(mergeRequestId));
}

std::string ListMergeRequestCommentsRequest::getFromCommit()const
{
	return fromCommit_;
}

void ListMergeRequestCommentsRequest::setFromCommit(const std::string& fromCommit)
{
	fromCommit_ = fromCommit;
	setParameter("FromCommit", fromCommit);
}

std::string ListMergeRequestCommentsRequest::getAccessToken()const
{
	return accessToken_;
}

void ListMergeRequestCommentsRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

std::string ListMergeRequestCommentsRequest::getToCommit()const
{
	return toCommit_;
}

void ListMergeRequestCommentsRequest::setToCommit(const std::string& toCommit)
{
	toCommit_ = toCommit;
	setParameter("ToCommit", toCommit);
}

long ListMergeRequestCommentsRequest::getProjectId()const
{
	return projectId_;
}

void ListMergeRequestCommentsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

