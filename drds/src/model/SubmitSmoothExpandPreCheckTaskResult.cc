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

#include <alibabacloud/drds/model/SubmitSmoothExpandPreCheckTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

SubmitSmoothExpandPreCheckTaskResult::SubmitSmoothExpandPreCheckTaskResult() :
	ServiceResult()
{}

SubmitSmoothExpandPreCheckTaskResult::SubmitSmoothExpandPreCheckTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitSmoothExpandPreCheckTaskResult::~SubmitSmoothExpandPreCheckTaskResult()
{}

void SubmitSmoothExpandPreCheckTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SubmitSmoothExpandPreCheckTaskResult::getMsg()const
{
	return msg_;
}

long SubmitSmoothExpandPreCheckTaskResult::getTaskId()const
{
	return taskId_;
}

bool SubmitSmoothExpandPreCheckTaskResult::getSuccess()const
{
	return success_;
}

