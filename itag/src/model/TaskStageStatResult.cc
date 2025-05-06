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

#include <alibabacloud/itag/model/TaskStageStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

TaskStageStatResult::TaskStageStatResult() :
	ServiceResult()
{}

TaskStageStatResult::TaskStageStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaskStageStatResult::~TaskStageStatResult()
{}

void TaskStageStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ITagTaskStageStat"];
	for (auto valueResultITagTaskStageStat : allResultNode)
	{
		ITagTaskStageStat resultObject;
		if(!valueResultITagTaskStageStat["Stage"].isNull())
			resultObject.stage = valueResultITagTaskStageStat["Stage"].asString();
		if(!valueResultITagTaskStageStat["Num"].isNull())
			resultObject.num = std::stoi(valueResultITagTaskStageStat["Num"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string TaskStageStatResult::getMsg()const
{
	return msg_;
}

bool TaskStageStatResult::getSucc()const
{
	return succ_;
}

std::string TaskStageStatResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaskStageStatResult::getErrInfo()const
{
	return errInfo_;
}

std::string TaskStageStatResult::getCode()const
{
	return code_;
}

std::vector<TaskStageStatResult::ITagTaskStageStat> TaskStageStatResult::getResult()const
{
	return result_;
}

