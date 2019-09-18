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

#include <alibabacloud/emr/model/DescribeWorkspaceRepoSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeWorkspaceRepoSettingResult::DescribeWorkspaceRepoSettingResult() :
	ServiceResult()
{}

DescribeWorkspaceRepoSettingResult::DescribeWorkspaceRepoSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWorkspaceRepoSettingResult::~DescribeWorkspaceRepoSettingResult()
{}

void DescribeWorkspaceRepoSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto repoMavenNode = value["RepoMaven"];
	if(!repoMavenNode["GroupId"].isNull())
		repoMaven_.groupId = repoMavenNode["GroupId"].asString();
	if(!repoMavenNode["ArtifactId"].isNull())
		repoMaven_.artifactId = repoMavenNode["ArtifactId"].asString();
	if(!repoMavenNode["Version"].isNull())
		repoMaven_.version = repoMavenNode["Version"].asString();
	auto repoPipNode = value["RepoPip"];
	if(!repoPipNode["PackageName"].isNull())
		repoPip_.packageName = repoPipNode["PackageName"].asString();
	if(!repoPipNode["Version"].isNull())
		repoPip_.version = repoPipNode["Version"].asString();

}

DescribeWorkspaceRepoSettingResult::RepoPip DescribeWorkspaceRepoSettingResult::getRepoPip()const
{
	return repoPip_;
}

DescribeWorkspaceRepoSettingResult::RepoMaven DescribeWorkspaceRepoSettingResult::getRepoMaven()const
{
	return repoMaven_;
}

