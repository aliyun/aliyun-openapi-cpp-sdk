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

#include <alibabacloud/imm/model/ListImageJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListImageJobsResult::ListImageJobsResult() :
	ServiceResult()
{}

ListImageJobsResult::ListImageJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImageJobsResult::~ListImageJobsResult()
{}

void ListImageJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobs = value["Jobs"]["JobsItem"];
	for (auto value : allJobs)
	{
		JobsItem jobsObject;
		if(!value["Status"].isNull())
			jobsObject.status = value["Status"].asString();
		if(!value["JobId"].isNull())
			jobsObject.jobId = value["JobId"].asString();
		if(!value["JobType"].isNull())
			jobsObject.jobType = value["JobType"].asString();
		if(!value["Parameters"].isNull())
			jobsObject.parameters = value["Parameters"].asString();
		if(!value["Result"].isNull())
			jobsObject.result = value["Result"].asString();
		if(!value["StartTime"].isNull())
			jobsObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			jobsObject.endTime = value["EndTime"].asString();
		if(!value["ErrorMessage"].isNull())
			jobsObject.errorMessage = value["ErrorMessage"].asString();
		if(!value["NotifyEndpoint"].isNull())
			jobsObject.notifyEndpoint = value["NotifyEndpoint"].asString();
		if(!value["NotifyTopicName"].isNull())
			jobsObject.notifyTopicName = value["NotifyTopicName"].asString();
		if(!value["Progress"].isNull())
			jobsObject.progress = std::stoi(value["Progress"].asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListImageJobsResult::JobsItem> ListImageJobsResult::getJobs()const
{
	return jobs_;
}

std::string ListImageJobsResult::getNextMarker()const
{
	return nextMarker_;
}

