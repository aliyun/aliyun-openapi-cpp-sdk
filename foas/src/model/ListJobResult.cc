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

#include <alibabacloud/foas/model/ListJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListJobResult::ListJobResult() :
	ServiceResult()
{}

ListJobResult::ListJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobResult::~ListJobResult()
{}

void ListJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["JobName"].isNull())
			jobsObject.jobName = valueJobsJob["JobName"].asString();
		if(!valueJobsJob["ProjectName"].isNull())
			jobsObject.projectName = valueJobsJob["ProjectName"].asString();
		if(!valueJobsJob["JobType"].isNull())
			jobsObject.jobType = valueJobsJob["JobType"].asString();
		if(!valueJobsJob["ApiType"].isNull())
			jobsObject.apiType = valueJobsJob["ApiType"].asString();
		if(!valueJobsJob["Code"].isNull())
			jobsObject.code = valueJobsJob["Code"].asString();
		if(!valueJobsJob["PlanJson"].isNull())
			jobsObject.planJson = valueJobsJob["PlanJson"].asString();
		if(!valueJobsJob["Properties"].isNull())
			jobsObject.properties = valueJobsJob["Properties"].asString();
		if(!valueJobsJob["Packages"].isNull())
			jobsObject.packages = valueJobsJob["Packages"].asString();
		if(!valueJobsJob["IsCommitted"].isNull())
			jobsObject.isCommitted = valueJobsJob["IsCommitted"].asString() == "true";
		if(!valueJobsJob["Creator"].isNull())
			jobsObject.creator = valueJobsJob["Creator"].asString();
		if(!valueJobsJob["CreateTime"].isNull())
			jobsObject.createTime = std::stol(valueJobsJob["CreateTime"].asString());
		if(!valueJobsJob["Modifier"].isNull())
			jobsObject.modifier = valueJobsJob["Modifier"].asString();
		if(!valueJobsJob["ModifyTime"].isNull())
			jobsObject.modifyTime = std::stol(valueJobsJob["ModifyTime"].asString());
		if(!valueJobsJob["Description"].isNull())
			jobsObject.description = valueJobsJob["Description"].asString();
		if(!valueJobsJob["EngineVersion"].isNull())
			jobsObject.engineVersion = valueJobsJob["EngineVersion"].asString();
		if(!valueJobsJob["ClusterId"].isNull())
			jobsObject.clusterId = valueJobsJob["ClusterId"].asString();
		if(!valueJobsJob["QueueName"].isNull())
			jobsObject.queueName = valueJobsJob["QueueName"].asString();
		if(!valueJobsJob["FolderId"].isNull())
			jobsObject.folderId = std::stol(valueJobsJob["FolderId"].asString());
		if(!valueJobsJob["JobId"].isNull())
			jobsObject.jobId = valueJobsJob["JobId"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListJobResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobResult::getPageSize()const
{
	return pageSize_;
}

int ListJobResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<ListJobResult::Job> ListJobResult::getJobs()const
{
	return jobs_;
}

int ListJobResult::getPageIndex()const
{
	return pageIndex_;
}

