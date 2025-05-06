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

#include <alibabacloud/itag/model/CreateTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

CreateTaskResult::CreateTaskResult() :
	ServiceResult()
{}

CreateTaskResult::CreateTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTaskResult::~CreateTaskResult()
{}

void CreateTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TaskId"].isNull())
		result_.taskId = resultNode["TaskId"].asString();
	if(!resultNode["FlowRunId"].isNull())
		result_.flowRunId = resultNode["FlowRunId"].asString();
	if(!resultNode["MsgId"].isNull())
		result_.msgId = resultNode["MsgId"].asString();
	if(!resultNode["SlaveMsgId"].isNull())
		result_.slaveMsgId = resultNode["SlaveMsgId"].asString();
	if(!resultNode["RefTaskId"].isNull())
		result_.refTaskId = resultNode["RefTaskId"].asString();
	if(!resultNode["WorkflowId"].isNull())
		result_.workflowId = resultNode["WorkflowId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string CreateTaskResult::getMsg()const
{
	return msg_;
}

bool CreateTaskResult::getSucc()const
{
	return succ_;
}

std::string CreateTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateTaskResult::getErrInfo()const
{
	return errInfo_;
}

int CreateTaskResult::getCode()const
{
	return code_;
}

CreateTaskResult::Result CreateTaskResult::getResult()const
{
	return result_;
}

