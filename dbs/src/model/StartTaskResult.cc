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

#include <alibabacloud/dbs/model/StartTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

StartTaskResult::StartTaskResult() :
	ServiceResult()
{}

StartTaskResult::StartTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartTaskResult::~StartTaskResult()
{}

void StartTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["JobTypeName"].isNull())
		jobTypeName_ = value["JobTypeName"].asString();

}

std::string StartTaskResult::getTaskId()const
{
	return taskId_;
}

int StartTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string StartTaskResult::getErrMessage()const
{
	return errMessage_;
}

bool StartTaskResult::getSuccess()const
{
	return success_;
}

std::string StartTaskResult::getErrCode()const
{
	return errCode_;
}

std::string StartTaskResult::getJobTypeName()const
{
	return jobTypeName_;
}

