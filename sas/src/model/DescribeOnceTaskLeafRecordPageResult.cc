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

#include <alibabacloud/sas/model/DescribeOnceTaskLeafRecordPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeOnceTaskLeafRecordPageResult::DescribeOnceTaskLeafRecordPageResult() :
	ServiceResult()
{}

DescribeOnceTaskLeafRecordPageResult::DescribeOnceTaskLeafRecordPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOnceTaskLeafRecordPageResult::~DescribeOnceTaskLeafRecordPageResult()
{}

void DescribeOnceTaskLeafRecordPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnceTasksNode = value["OnceTasks"]["OnceTasksItem"];
	for (auto valueOnceTasksOnceTasksItem : allOnceTasksNode)
	{
		OnceTasksItem onceTasksObject;
		if(!valueOnceTasksOnceTasksItem["Status"].isNull())
			onceTasksObject.status = valueOnceTasksOnceTasksItem["Status"].asString();
		if(!valueOnceTasksOnceTasksItem["StatusText"].isNull())
			onceTasksObject.statusText = valueOnceTasksOnceTasksItem["StatusText"].asString();
		if(!valueOnceTasksOnceTasksItem["Progress"].isNull())
			onceTasksObject.progress = std::stol(valueOnceTasksOnceTasksItem["Progress"].asString());
		if(!valueOnceTasksOnceTasksItem["RealRunTime"].isNull())
			onceTasksObject.realRunTime = std::stol(valueOnceTasksOnceTasksItem["RealRunTime"].asString());
		if(!valueOnceTasksOnceTasksItem["TaskName"].isNull())
			onceTasksObject.taskName = valueOnceTasksOnceTasksItem["TaskName"].asString();
		if(!valueOnceTasksOnceTasksItem["Finish"].isNull())
			onceTasksObject.finish = std::stoi(valueOnceTasksOnceTasksItem["Finish"].asString());
		if(!valueOnceTasksOnceTasksItem["TotalCount"].isNull())
			onceTasksObject.totalCount = valueOnceTasksOnceTasksItem["TotalCount"].asString();
		if(!valueOnceTasksOnceTasksItem["EndTime"].isNull())
			onceTasksObject.endTime = std::stol(valueOnceTasksOnceTasksItem["EndTime"].asString());
		if(!valueOnceTasksOnceTasksItem["TaskType"].isNull())
			onceTasksObject.taskType = valueOnceTasksOnceTasksItem["TaskType"].asString();
		if(!valueOnceTasksOnceTasksItem["StartTime"].isNull())
			onceTasksObject.startTime = std::stol(valueOnceTasksOnceTasksItem["StartTime"].asString());
		if(!valueOnceTasksOnceTasksItem["ResultInfo"].isNull())
			onceTasksObject.resultInfo = valueOnceTasksOnceTasksItem["ResultInfo"].asString();
		if(!valueOnceTasksOnceTasksItem["Target"].isNull())
			onceTasksObject.target = valueOnceTasksOnceTasksItem["Target"].asString();
		if(!valueOnceTasksOnceTasksItem["TaskId"].isNull())
			onceTasksObject.taskId = valueOnceTasksOnceTasksItem["TaskId"].asString();
		if(!valueOnceTasksOnceTasksItem["FinishCount"].isNull())
			onceTasksObject.finishCount = valueOnceTasksOnceTasksItem["FinishCount"].asString();
		if(!valueOnceTasksOnceTasksItem["TargetType"].isNull())
			onceTasksObject.targetType = valueOnceTasksOnceTasksItem["TargetType"].asString();
		auto taskImageInfoNode = value["TaskImageInfo"];
		if(!taskImageInfoNode["RepoId"].isNull())
			onceTasksObject.taskImageInfo.repoId = taskImageInfoNode["RepoId"].asString();
		if(!taskImageInfoNode["Digest"].isNull())
			onceTasksObject.taskImageInfo.digest = taskImageInfoNode["Digest"].asString();
		if(!taskImageInfoNode["Tag"].isNull())
			onceTasksObject.taskImageInfo.tag = taskImageInfoNode["Tag"].asString();
		if(!taskImageInfoNode["RepoRegionId"].isNull())
			onceTasksObject.taskImageInfo.repoRegionId = taskImageInfoNode["RepoRegionId"].asString();
		if(!taskImageInfoNode["RepoName"].isNull())
			onceTasksObject.taskImageInfo.repoName = taskImageInfoNode["RepoName"].asString();
		if(!taskImageInfoNode["RepoNamespace"].isNull())
			onceTasksObject.taskImageInfo.repoNamespace = taskImageInfoNode["RepoNamespace"].asString();
		if(!taskImageInfoNode["RegionId"].isNull())
			onceTasksObject.taskImageInfo.regionId = taskImageInfoNode["RegionId"].asString();
		if(!taskImageInfoNode["Image"].isNull())
			onceTasksObject.taskImageInfo.image = taskImageInfoNode["Image"].asString();
		if(!taskImageInfoNode["Pod"].isNull())
			onceTasksObject.taskImageInfo.pod = taskImageInfoNode["Pod"].asString();
		if(!taskImageInfoNode["AppName"].isNull())
			onceTasksObject.taskImageInfo.appName = taskImageInfoNode["AppName"].asString();
		if(!taskImageInfoNode["NodeName"].isNull())
			onceTasksObject.taskImageInfo.nodeName = taskImageInfoNode["NodeName"].asString();
		if(!taskImageInfoNode["NodeIp"].isNull())
			onceTasksObject.taskImageInfo.nodeIp = taskImageInfoNode["NodeIp"].asString();
		if(!taskImageInfoNode["NodeInstanceId"].isNull())
			onceTasksObject.taskImageInfo.nodeInstanceId = taskImageInfoNode["NodeInstanceId"].asString();
		if(!taskImageInfoNode["ClusterId"].isNull())
			onceTasksObject.taskImageInfo.clusterId = taskImageInfoNode["ClusterId"].asString();
		if(!taskImageInfoNode["ClusterName"].isNull())
			onceTasksObject.taskImageInfo.clusterName = taskImageInfoNode["ClusterName"].asString();
		onceTasks_.push_back(onceTasksObject);
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

std::vector<DescribeOnceTaskLeafRecordPageResult::OnceTasksItem> DescribeOnceTaskLeafRecordPageResult::getOnceTasks()const
{
	return onceTasks_;
}

DescribeOnceTaskLeafRecordPageResult::PageInfo DescribeOnceTaskLeafRecordPageResult::getPageInfo()const
{
	return pageInfo_;
}

