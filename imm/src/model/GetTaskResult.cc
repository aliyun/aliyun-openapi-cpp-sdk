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

#include <alibabacloud/imm/model/GetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetTaskResult::GetTaskResult() :
	ServiceResult()
{}

GetTaskResult::GetTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskResult::~GetTaskResult()
{}

void GetTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["EventId"].isNull())
		eventId_ = value["EventId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["Tags"].isNull())
		tags_ = value["Tags"].asString();
	if(!value["TaskRequestDefinition"].isNull())
		taskRequestDefinition_ = value["TaskRequestDefinition"].asString();
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());

}

std::string GetTaskResult::getStatus()const
{
	return status_;
}

int GetTaskResult::getProgress()const
{
	return progress_;
}

std::string GetTaskResult::getTaskId()const
{
	return taskId_;
}

std::string GetTaskResult::getMessage()const
{
	return message_;
}

std::string GetTaskResult::getEndTime()const
{
	return endTime_;
}

std::string GetTaskResult::getProjectName()const
{
	return projectName_;
}

std::string GetTaskResult::getUserData()const
{
	return userData_;
}

std::string GetTaskResult::getStartTime()const
{
	return startTime_;
}

std::string GetTaskResult::getCode()const
{
	return code_;
}

std::string GetTaskResult::getTaskRequestDefinition()const
{
	return taskRequestDefinition_;
}

std::string GetTaskResult::getTaskType()const
{
	return taskType_;
}

std::string GetTaskResult::getEventId()const
{
	return eventId_;
}

std::string GetTaskResult::getTags()const
{
	return tags_;
}

