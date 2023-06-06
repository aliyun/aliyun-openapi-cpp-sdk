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

#include <alibabacloud/sas/model/DescribeImageFixTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageFixTaskResult::DescribeImageFixTaskResult() :
	ServiceResult()
{}

DescribeImageFixTaskResult::DescribeImageFixTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageFixTaskResult::~DescribeImageFixTaskResult()
{}

void DescribeImageFixTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBuildTasksNode = value["BuildTasks"]["BuildTask"];
	for (auto valueBuildTasksBuildTask : allBuildTasksNode)
	{
		BuildTask buildTasksObject;
		if(!valueBuildTasksBuildTask["BuildTaskId"].isNull())
			buildTasksObject.buildTaskId = valueBuildTasksBuildTask["BuildTaskId"].asString();
		if(!valueBuildTasksBuildTask["TaskType"].isNull())
			buildTasksObject.taskType = valueBuildTasksBuildTask["TaskType"].asString();
		if(!valueBuildTasksBuildTask["RepoNamespace"].isNull())
			buildTasksObject.repoNamespace = valueBuildTasksBuildTask["RepoNamespace"].asString();
		if(!valueBuildTasksBuildTask["RepoName"].isNull())
			buildTasksObject.repoName = valueBuildTasksBuildTask["RepoName"].asString();
		if(!valueBuildTasksBuildTask["RegionId"].isNull())
			buildTasksObject.regionId = valueBuildTasksBuildTask["RegionId"].asString();
		if(!valueBuildTasksBuildTask["OldTag"].isNull())
			buildTasksObject.oldTag = valueBuildTasksBuildTask["OldTag"].asString();
		if(!valueBuildTasksBuildTask["OldUuid"].isNull())
			buildTasksObject.oldUuid = valueBuildTasksBuildTask["OldUuid"].asString();
		if(!valueBuildTasksBuildTask["NewTag"].isNull())
			buildTasksObject.newTag = valueBuildTasksBuildTask["NewTag"].asString();
		if(!valueBuildTasksBuildTask["NewUuid"].isNull())
			buildTasksObject.newUuid = valueBuildTasksBuildTask["NewUuid"].asString();
		if(!valueBuildTasksBuildTask["FixTime"].isNull())
			buildTasksObject.fixTime = valueBuildTasksBuildTask["FixTime"].asString();
		if(!valueBuildTasksBuildTask["FinishTime"].isNull())
			buildTasksObject.finishTime = valueBuildTasksBuildTask["FinishTime"].asString();
		if(!valueBuildTasksBuildTask["Status"].isNull())
			buildTasksObject.status = std::stoi(valueBuildTasksBuildTask["Status"].asString());
		if(!valueBuildTasksBuildTask["VulAlias"].isNull())
			buildTasksObject.vulAlias = valueBuildTasksBuildTask["VulAlias"].asString();
		buildTasks_.push_back(buildTasksObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeImageFixTaskResult::PageInfo DescribeImageFixTaskResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeImageFixTaskResult::BuildTask> DescribeImageFixTaskResult::getBuildTasks()const
{
	return buildTasks_;
}

