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
	auto allJobs = value["Jobs"]["Job"];
	for (auto value : allJobs)
	{
		Job jobsObject;
		if(!value["JobName"].isNull())
			jobsObject.jobName = value["JobName"].asString();
		if(!value["ProjectName"].isNull())
			jobsObject.projectName = value["ProjectName"].asString();
		if(!value["JobType"].isNull())
			jobsObject.jobType = value["JobType"].asString();
		if(!value["ApiType"].isNull())
			jobsObject.apiType = value["ApiType"].asString();
		if(!value["Code"].isNull())
			jobsObject.code = value["Code"].asString();
		if(!value["PlanJson"].isNull())
			jobsObject.planJson = value["PlanJson"].asString();
		if(!value["Properties"].isNull())
			jobsObject.properties = value["Properties"].asString();
		if(!value["Packages"].isNull())
			jobsObject.packages = value["Packages"].asString();
		if(!value["IsCommitted"].isNull())
			jobsObject.isCommitted = value["IsCommitted"].asString() == "true";
		if(!value["Creator"].isNull())
			jobsObject.creator = value["Creator"].asString();
		if(!value["CreateTime"].isNull())
			jobsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Modifier"].isNull())
			jobsObject.modifier = value["Modifier"].asString();
		if(!value["ModifyTime"].isNull())
			jobsObject.modifyTime = std::stol(value["ModifyTime"].asString());
		if(!value["Description"].isNull())
			jobsObject.description = value["Description"].asString();
		if(!value["EngineVersion"].isNull())
			jobsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["ClusterId"].isNull())
			jobsObject.clusterId = value["ClusterId"].asString();
		if(!value["QueueName"].isNull())
			jobsObject.queueName = value["QueueName"].asString();
		if(!value["FolderId"].isNull())
			jobsObject.folderId = std::stol(value["FolderId"].asString());
		if(!value["JobId"].isNull())
			jobsObject.jobId = value["JobId"].asString();
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

