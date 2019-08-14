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

#include <alibabacloud/cr/model/DeleteRepoAuthorizationRequest.h>

using AlibabaCloud::Cr::Model::DeleteRepoAuthorizationRequest;

DeleteRepoAuthorizationRequest::DeleteRepoAuthorizationRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

DeleteRepoAuthorizationRequest::~DeleteRepoAuthorizationRequest()
{}

std::string DeleteRepoAuthorizationRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DeleteRepoAuthorizationRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setCoreParameter("RepoNamespace", repoNamespace);
}

std::string DeleteRepoAuthorizationRequest::getRepoName()const
{
	return repoName_;
}

void DeleteRepoAuthorizationRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setCoreParameter("RepoName", repoName);
}

std::string DeleteRepoAuthorizationRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRepoAuthorizationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long DeleteRepoAuthorizationRequest::getAuthorizeId()const
{
	return authorizeId_;
}

void DeleteRepoAuthorizationRequest::setAuthorizeId(long authorizeId)
{
	authorizeId_ = authorizeId;
	setCoreParameter("AuthorizeId", std::to_string(authorizeId));
}

