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

#include <alibabacloud/emr/model/ListJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

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
	auto allJobsNode = value["Jobs"]["JobInfo"];
	for (auto valueJobsJobInfo : allJobsNode)
	{
		JobInfo jobsObject;
		if(!valueJobsJobInfo["Id"].isNull())
			jobsObject.id = valueJobsJobInfo["Id"].asString();
		if(!valueJobsJobInfo["Name"].isNull())
			jobsObject.name = valueJobsJobInfo["Name"].asString();
		if(!valueJobsJobInfo["Type"].isNull())
			jobsObject.type = valueJobsJobInfo["Type"].asString();
		if(!valueJobsJobInfo["RunParameter"].isNull())
			jobsObject.runParameter = valueJobsJobInfo["RunParameter"].asString();
		if(!valueJobsJobInfo["FailAct"].isNull())
			jobsObject.failAct = valueJobsJobInfo["FailAct"].asString();
		if(!valueJobsJobInfo["MaxRetry"].isNull())
			jobsObject.maxRetry = std::stoi(valueJobsJobInfo["MaxRetry"].asString());
		if(!valueJobsJobInfo["RetryInterval"].isNull())
			jobsObject.retryInterval = std::stoi(valueJobsJobInfo["RetryInterval"].asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListJobsResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListJobsResult::JobInfo> ListJobsResult::getJobs()const
{
	return jobs_;
}

int ListJobsResult::getPageNumber()const
{
	return pageNumber_;
}

