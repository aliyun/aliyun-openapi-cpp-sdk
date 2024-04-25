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

#include <alibabacloud/ehpcinstant/model/ListJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EhpcInstant;
using namespace AlibabaCloud::EhpcInstant::Model;

ListJobsResult::ListJobsResult() :
	ServiceResult()
{}

ListJobsResult::ListJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsResult::~ListJobsResult()
{}

void ListJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["JobName"].isNull())
			jobListObject.jobName = valueJobListJob["JobName"].asString();
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["JobDescription"].isNull())
			jobListObject.jobDescription = valueJobListJob["JobDescription"].asString();
		if(!valueJobListJob["CreateTime"].isNull())
			jobListObject.createTime = valueJobListJob["CreateTime"].asString();
		if(!valueJobListJob["OwnerUid"].isNull())
			jobListObject.ownerUid = valueJobListJob["OwnerUid"].asString();
		if(!valueJobListJob["Status"].isNull())
			jobListObject.status = valueJobListJob["Status"].asString();
		if(!valueJobListJob["TaskCount"].isNull())
			jobListObject.taskCount = std::stoi(valueJobListJob["TaskCount"].asString());
		if(!valueJobListJob["ExecutorCount"].isNull())
			jobListObject.executorCount = std::stoi(valueJobListJob["ExecutorCount"].asString());
		if(!valueJobListJob["StartTime"].isNull())
			jobListObject.startTime = valueJobListJob["StartTime"].asString();
		if(!valueJobListJob["EndTime"].isNull())
			jobListObject.endTime = valueJobListJob["EndTime"].asString();
		if(!valueJobListJob["TaskSustainable"].isNull())
			jobListObject.taskSustainable = valueJobListJob["TaskSustainable"].asString() == "true";
		jobList_.push_back(jobListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListJobsResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobsResult::getPageSize()const
{
	return pageSize_;
}

int ListJobsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListJobsResult::Job> ListJobsResult::getJobList()const
{
	return jobList_;
}

