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

#include <alibabacloud/iot/model/GetNodesAddingTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetNodesAddingTaskResult::GetNodesAddingTaskResult() :
	ServiceResult()
{}

GetNodesAddingTaskResult::GetNodesAddingTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodesAddingTaskResult::~GetNodesAddingTaskResult()
{}

void GetNodesAddingTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSuccessDevEuis = value["SuccessDevEuis"]["SuccessDevEui"];
	for (const auto &item : allSuccessDevEuis)
		successDevEuis_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TaskState"].isNull())
		taskState_ = value["TaskState"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stol(value["SuccessCount"].asString());

}

std::vector<std::string> GetNodesAddingTaskResult::getSuccessDevEuis()const
{
	return successDevEuis_;
}

long GetNodesAddingTaskResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetNodesAddingTaskResult::getTaskId()const
{
	return taskId_;
}

std::string GetNodesAddingTaskResult::getErrorMessage()const
{
	return errorMessage_;
}

long GetNodesAddingTaskResult::getSuccessCount()const
{
	return successCount_;
}

std::string GetNodesAddingTaskResult::getCode()const
{
	return code_;
}

std::string GetNodesAddingTaskResult::getTaskState()const
{
	return taskState_;
}

bool GetNodesAddingTaskResult::getSuccess()const
{
	return success_;
}

