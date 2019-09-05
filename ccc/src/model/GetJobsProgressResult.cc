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

#include <alibabacloud/ccc/model/GetJobsProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetJobsProgressResult::GetJobsProgressResult() :
	ServiceResult()
{}

GetJobsProgressResult::GetJobsProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobsProgressResult::~GetJobsProgressResult()
{}

void GetJobsProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobsProgressNode = value["JobsProgress"];
	if(!jobsProgressNode["Status"].isNull())
		jobsProgress_.status = jobsProgressNode["Status"].asString();
	if(!jobsProgressNode["StartTime"].isNull())
		jobsProgress_.startTime = std::stol(jobsProgressNode["StartTime"].asString());
	if(!jobsProgressNode["Duration"].isNull())
		jobsProgress_.duration = std::stoi(jobsProgressNode["Duration"].asString());
	if(!jobsProgressNode["TotalJobs"].isNull())
		jobsProgress_.totalJobs = std::stoi(jobsProgressNode["TotalJobs"].asString());
	if(!jobsProgressNode["TotalNotAnswered"].isNull())
		jobsProgress_.totalNotAnswered = std::stoi(jobsProgressNode["TotalNotAnswered"].asString());
	if(!jobsProgressNode["TotalCompleted"].isNull())
		jobsProgress_.totalCompleted = std::stoi(jobsProgressNode["TotalCompleted"].asString());
	if(!jobsProgressNode["Scheduling"].isNull())
		jobsProgress_.scheduling = std::stoi(jobsProgressNode["Scheduling"].asString());
	if(!jobsProgressNode["Executing"].isNull())
		jobsProgress_.executing = std::stoi(jobsProgressNode["Executing"].asString());
	if(!jobsProgressNode["Paused"].isNull())
		jobsProgress_.paused = std::stoi(jobsProgressNode["Paused"].asString());
	if(!jobsProgressNode["Failed"].isNull())
		jobsProgress_.failed = std::stoi(jobsProgressNode["Failed"].asString());
	if(!jobsProgressNode["Cancelled"].isNull())
		jobsProgress_.cancelled = std::stoi(jobsProgressNode["Cancelled"].asString());
	if(!jobsProgressNode["RepeatCall"].isNull())
		jobsProgress_.repeatCall = std::stoi(jobsProgressNode["RepeatCall"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetJobsProgressResult::getMessage()const
{
	return message_;
}

int GetJobsProgressResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJobsProgressResult::getCode()const
{
	return code_;
}

GetJobsProgressResult::JobsProgress GetJobsProgressResult::getJobsProgress()const
{
	return jobsProgress_;
}

bool GetJobsProgressResult::getSuccess()const
{
	return success_;
}

