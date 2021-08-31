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

#include <alibabacloud/edas/model/InstallAgentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

InstallAgentResult::InstallAgentResult() :
	ServiceResult()
{}

InstallAgentResult::InstallAgentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InstallAgentResult::~InstallAgentResult()
{}

void InstallAgentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionResultListNode = value["ExecutionResultList"]["ExecutionResult"];
	for (auto valueExecutionResultListExecutionResult : allExecutionResultListNode)
	{
		ExecutionResult executionResultListObject;
		if(!valueExecutionResultListExecutionResult["InstanceId"].isNull())
			executionResultListObject.instanceId = valueExecutionResultListExecutionResult["InstanceId"].asString();
		if(!valueExecutionResultListExecutionResult["Status"].isNull())
			executionResultListObject.status = valueExecutionResultListExecutionResult["Status"].asString();
		if(!valueExecutionResultListExecutionResult["FinishedTime"].isNull())
			executionResultListObject.finishedTime = valueExecutionResultListExecutionResult["FinishedTime"].asString();
		if(!valueExecutionResultListExecutionResult["InvokeRecordStatus"].isNull())
			executionResultListObject.invokeRecordStatus = valueExecutionResultListExecutionResult["InvokeRecordStatus"].asString();
		if(!valueExecutionResultListExecutionResult["Success"].isNull())
			executionResultListObject.success = valueExecutionResultListExecutionResult["Success"].asString() == "true";
		executionResultList_.push_back(executionResultListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InstallAgentResult::getMessage()const
{
	return message_;
}

std::vector<InstallAgentResult::ExecutionResult> InstallAgentResult::getExecutionResultList()const
{
	return executionResultList_;
}

int InstallAgentResult::getCode()const
{
	return code_;
}

