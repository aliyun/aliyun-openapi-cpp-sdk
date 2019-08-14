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

#include <alibabacloud/cr/model/DeleteRepoBuildRuleRequest.h>

using AlibabaCloud::Cr::Model::DeleteRepoBuildRuleRequest;

DeleteRepoBuildRuleRequest::DeleteRepoBuildRuleRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

DeleteRepoBuildRuleRequest::~DeleteRepoBuildRuleRequest()
{}

std::string DeleteRepoBuildRuleRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DeleteRepoBuildRuleRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setCoreParameter("RepoNamespace", repoNamespace);
}

std::string DeleteRepoBuildRuleRequest::getRepoName()const
{
	return repoName_;
}

void DeleteRepoBuildRuleRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setCoreParameter("RepoName", repoName);
}

std::string DeleteRepoBuildRuleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRepoBuildRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long DeleteRepoBuildRuleRequest::getBuildRuleId()const
{
	return buildRuleId_;
}

void DeleteRepoBuildRuleRequest::setBuildRuleId(long buildRuleId)
{
	buildRuleId_ = buildRuleId;
	setCoreParameter("BuildRuleId", std::to_string(buildRuleId));
}

