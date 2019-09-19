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

#include <alibabacloud/emr/model/ListJobExecutionInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListJobExecutionInstancesResult::ListJobExecutionInstancesResult() :
	ServiceResult()
{}

ListJobExecutionInstancesResult::ListJobExecutionInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobExecutionInstancesResult::~ListJobExecutionInstancesResult()
{}

void ListJobExecutionInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobInstancesNode = value["JobInstances"]["JobInstance"];
	for (auto valueJobInstancesJobInstance : allJobInstancesNode)
	{
		JobInstance jobInstancesObject;
		if(!valueJobInstancesJobInstance["Id"].isNull())
			jobInstancesObject.id = valueJobInstancesJobInstance["Id"].asString();
		if(!valueJobInstancesJobInstance["JobName"].isNull())
			jobInstancesObject.jobName = valueJobInstancesJobInstance["JobName"].asString();
		if(!valueJobInstancesJobInstance["StartTime"].isNull())
			jobInstancesObject.startTime = std::stol(valueJobInstancesJobInstance["StartTime"].asString());
		if(!valueJobInstancesJobInstance["RunTime"].isNull())
			jobInstancesObject.runTime = std::stoi(valueJobInstancesJobInstance["RunTime"].asString());
		if(!valueJobInstancesJobInstance["JobType"].isNull())
			jobInstancesObject.jobType = valueJobInstancesJobInstance["JobType"].asString();
		if(!valueJobInstancesJobInstance["JobId"].isNull())
			jobInstancesObject.jobId = valueJobInstancesJobInstance["JobId"].asString();
		if(!valueJobInstancesJobInstance["ClusterId"].isNull())
			jobInstancesObject.clusterId = valueJobInstancesJobInstance["ClusterId"].asString();
		if(!valueJobInstancesJobInstance["Status"].isNull())
			jobInstancesObject.status = valueJobInstancesJobInstance["Status"].asString();
		if(!valueJobInstancesJobInstance["RetryInfo"].isNull())
			jobInstancesObject.retryInfo = valueJobInstancesJobInstance["RetryInfo"].asString();
		jobInstances_.push_back(jobInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListJobExecutionInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobExecutionInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListJobExecutionInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListJobExecutionInstancesResult::JobInstance> ListJobExecutionInstancesResult::getJobInstances()const
{
	return jobInstances_;
}

