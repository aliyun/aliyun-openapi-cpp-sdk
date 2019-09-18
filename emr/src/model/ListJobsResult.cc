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
	auto allJobs = value["Jobs"]["JobInfo"];
	for (auto value : allJobs)
	{
		JobInfo jobsObject;
		if(!value["Id"].isNull())
			jobsObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			jobsObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			jobsObject.type = value["Type"].asString();
		if(!value["RunParameter"].isNull())
			jobsObject.runParameter = value["RunParameter"].asString();
		if(!value["FailAct"].isNull())
			jobsObject.failAct = value["FailAct"].asString();
		if(!value["MaxRetry"].isNull())
			jobsObject.maxRetry = std::stoi(value["MaxRetry"].asString());
		if(!value["RetryInterval"].isNull())
			jobsObject.retryInterval = std::stoi(value["RetryInterval"].asString());
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

