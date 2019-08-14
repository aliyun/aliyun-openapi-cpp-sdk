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

#include <alibabacloud/cr/model/GetRepoAuthorizationListRequest.h>

using AlibabaCloud::Cr::Model::GetRepoAuthorizationListRequest;

GetRepoAuthorizationListRequest::GetRepoAuthorizationListRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetRepoAuthorizationListRequest::~GetRepoAuthorizationListRequest()
{}

std::string GetRepoAuthorizationListRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void GetRepoAuthorizationListRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setCoreParameter("RepoNamespace", repoNamespace);
}

std::string GetRepoAuthorizationListRequest::getRepoName()const
{
	return repoName_;
}

void GetRepoAuthorizationListRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setCoreParameter("RepoName", repoName);
}

std::string GetRepoAuthorizationListRequest::getRegionId()const
{
	return regionId_;
}

void GetRepoAuthorizationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetRepoAuthorizationListRequest::getAuthorize()const
{
	return authorize_;
}

void GetRepoAuthorizationListRequest::setAuthorize(const std::string& authorize)
{
	authorize_ = authorize;
	setCoreParameter("Authorize", authorize);
}

