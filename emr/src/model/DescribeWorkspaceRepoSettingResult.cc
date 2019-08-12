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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto repoMavenNode = value["RepoMaven"];
	if(!repoMavenNode["GroupId"].isNull())
		repoMaven_.groupId = repoMavenNode["GroupId"].asString();
	if(!repoMavenNode["ArtifactId"].isNull())
		repoMaven_.artifactId = repoMavenNode["ArtifactId"].asString();
	if(!repoMavenNode["Version"].isNull())
		repoMaven_.version = repoMavenNode["Version"].asString();
	auto repoPip Node = value["RepoPip "];
	if(!repoPip Node["PackageName"].isNull())
		repoPip _.packageName = repoPip Node["PackageName"].asString();
	if(!repoPip Node["Version"].isNull())
		repoPip _.version = repoPip Node["Version"].asString();

}

DescribeWorkspaceRepoSettingResult::RepoMaven DescribeWorkspaceRepoSettingResult::getRepoMaven()const
{
	return repoMaven_;
}

DescribeWorkspaceRepoSettingResult::RepoPip  DescribeWorkspaceRepoSettingResult::getRepoPip ()const
{
	return repoPip _;
}

