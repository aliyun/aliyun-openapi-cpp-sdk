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

#include <alibabacloud/outboundbot/model/GetAssignJobsAsyncResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetAssignJobsAsyncResultResult::GetAssignJobsAsyncResultResult() :
	ServiceResult()
{}

GetAssignJobsAsyncResultResult::GetAssignJobsAsyncResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAssignJobsAsyncResultResult::~GetAssignJobsAsyncResultResult()
{}

void GetAssignJobsAsyncResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsId = value["JobsId"]["JobsId"];
	for (const auto &item : allJobsId)
		jobsId_.push_back(item.asString());
	if(!value["Timeout"].isNull())
		timeout_ = value["Timeout"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Valid"].isNull())
		valid_ = value["Valid"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["JobGroupId"].isNull())
		jobGroupId_ = value["JobGroupId"].asString();

}

std::vector<std::string> GetAssignJobsAsyncResultResult::getJobsId()const
{
	return jobsId_;
}

std::string GetAssignJobsAsyncResultResult::getJobGroupId()const
{
	return jobGroupId_;
}

std::string GetAssignJobsAsyncResultResult::getMessage()const
{
	return message_;
}

bool GetAssignJobsAsyncResultResult::getValid()const
{
	return valid_;
}

bool GetAssignJobsAsyncResultResult::getTimeout()const
{
	return timeout_;
}

int GetAssignJobsAsyncResultResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetAssignJobsAsyncResultResult::getCode()const
{
	return code_;
}

bool GetAssignJobsAsyncResultResult::getSuccess()const
{
	return success_;
}

