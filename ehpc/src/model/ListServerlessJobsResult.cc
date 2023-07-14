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

#include <alibabacloud/ehpc/model/ListServerlessJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListServerlessJobsResult::ListServerlessJobsResult() :
	ServiceResult()
{}

ListServerlessJobsResult::ListServerlessJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServerlessJobsResult::~ListServerlessJobsResult()
{}

void ListServerlessJobsResult::parse(const std::string &payload)
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
		if(!valueJobsJobInfo["Owner"].isNull())
			jobsObject.owner = valueJobsJobInfo["Owner"].asString();
		if(!valueJobsJobInfo["IsArrayJob"].isNull())
			jobsObject.isArrayJob = valueJobsJobInfo["IsArrayJob"].asString() == "true";
		if(!valueJobsJobInfo["State"].isNull())
			jobsObject.state = valueJobsJobInfo["State"].asString();
		if(!valueJobsJobInfo["SubmitTime"].isNull())
			jobsObject.submitTime = valueJobsJobInfo["SubmitTime"].asString();
		if(!valueJobsJobInfo["StartTime"].isNull())
			jobsObject.startTime = valueJobsJobInfo["StartTime"].asString();
		if(!valueJobsJobInfo["EndTime"].isNull())
			jobsObject.endTime = valueJobsJobInfo["EndTime"].asString();
		if(!valueJobsJobInfo["Priority"].isNull())
			jobsObject.priority = valueJobsJobInfo["Priority"].asString();
		if(!valueJobsJobInfo["Queue"].isNull())
			jobsObject.queue = valueJobsJobInfo["Queue"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

int ListServerlessJobsResult::getTotalCount()const
{
	return totalCount_;
}

long ListServerlessJobsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListServerlessJobsResult::JobInfo> ListServerlessJobsResult::getJobs()const
{
	return jobs_;
}

long ListServerlessJobsResult::getPageNumber()const
{
	return pageNumber_;
}

