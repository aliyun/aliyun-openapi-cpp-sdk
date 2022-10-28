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

#include <alibabacloud/dms-enterprise/model/GetTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

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
	auto taskNode = value["Task"];
	if(!taskNode["DagId"].isNull())
		task_.dagId = std::stol(taskNode["DagId"].asString());
	if(!taskNode["NodeName"].isNull())
		task_.nodeName = taskNode["NodeName"].asString();
	if(!taskNode["NodeType"].isNull())
		task_.nodeType = taskNode["NodeType"].asString();
	if(!taskNode["NodeContent"].isNull())
		task_.nodeContent = taskNode["NodeContent"].asString();
	if(!taskNode["TimeVariables"].isNull())
		task_.timeVariables = taskNode["TimeVariables"].asString();
	if(!taskNode["NodeConfig"].isNull())
		task_.nodeConfig = taskNode["NodeConfig"].asString();
	if(!taskNode["NodeOutput"].isNull())
		task_.nodeOutput = taskNode["NodeOutput"].asString();
	if(!taskNode["GraphParam"].isNull())
		task_.graphParam = taskNode["GraphParam"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTaskResult::Task GetTaskResult::getTask()const
{
	return task_;
}

std::string GetTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTaskResult::getSuccess()const
{
	return success_;
}

