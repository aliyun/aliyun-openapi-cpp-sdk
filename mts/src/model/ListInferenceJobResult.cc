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

#include <alibabacloud/mts/model/ListInferenceJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListInferenceJobResult::ListInferenceJobResult() :
	ServiceResult()
{}

ListInferenceJobResult::ListInferenceJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInferenceJobResult::~ListInferenceJobResult()
{}

void ListInferenceJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["JobsItem"];
	for (auto valueJobsJobsItem : allJobsNode)
	{
		JobsItem jobsObject;
		if(!valueJobsJobsItem["Status"].isNull())
			jobsObject.status = valueJobsJobsItem["Status"].asString();
		if(!valueJobsJobsItem["Result"].isNull())
			jobsObject.result = valueJobsJobsItem["Result"].asString();
		if(!valueJobsJobsItem["JobId"].isNull())
			jobsObject.jobId = valueJobsJobsItem["JobId"].asString();
		if(!valueJobsJobsItem["UserId"].isNull())
			jobsObject.userId = std::stol(valueJobsJobsItem["UserId"].asString());
		if(!valueJobsJobsItem["Message"].isNull())
			jobsObject.message = valueJobsJobsItem["Message"].asString();
		if(!valueJobsJobsItem["JobTime"].isNull())
			jobsObject.jobTime = std::stol(valueJobsJobsItem["JobTime"].asString());
		if(!valueJobsJobsItem["JobParams"].isNull())
			jobsObject.jobParams = valueJobsJobsItem["JobParams"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stol(value["TotalSize"].asString());

}

std::string ListInferenceJobResult::getMessage()const
{
	return message_;
}

std::vector<ListInferenceJobResult::JobsItem> ListInferenceJobResult::getJobs()const
{
	return jobs_;
}

long ListInferenceJobResult::getTotalSize()const
{
	return totalSize_;
}

std::string ListInferenceJobResult::getCode()const
{
	return code_;
}

