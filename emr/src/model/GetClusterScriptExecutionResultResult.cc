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

#include <alibabacloud/emr/model/GetClusterScriptExecutionResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetClusterScriptExecutionResultResult::GetClusterScriptExecutionResultResult() :
	ServiceResult()
{}

GetClusterScriptExecutionResultResult::GetClusterScriptExecutionResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterScriptExecutionResultResult::~GetClusterScriptExecutionResultResult()
{}

void GetClusterScriptExecutionResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionResultsNode = value["ExecutionResults"]["ExecutionResult"];
	for (auto valueExecutionResultsExecutionResult : allExecutionResultsNode)
	{
		ExecutionResult executionResultsObject;
		if(!valueExecutionResultsExecutionResult["NodeId"].isNull())
			executionResultsObject.nodeId = valueExecutionResultsExecutionResult["NodeId"].asString();
		if(!valueExecutionResultsExecutionResult["NodeIp"].isNull())
			executionResultsObject.nodeIp = valueExecutionResultsExecutionResult["NodeIp"].asString();
		if(!valueExecutionResultsExecutionResult["StartTime"].isNull())
			executionResultsObject.startTime = std::stol(valueExecutionResultsExecutionResult["StartTime"].asString());
		if(!valueExecutionResultsExecutionResult["EndTime"].isNull())
			executionResultsObject.endTime = std::stol(valueExecutionResultsExecutionResult["EndTime"].asString());
		if(!valueExecutionResultsExecutionResult["Status"].isNull())
			executionResultsObject.status = valueExecutionResultsExecutionResult["Status"].asString();
		executionResults_.push_back(executionResultsObject);
	}

}

std::vector<GetClusterScriptExecutionResultResult::ExecutionResult> GetClusterScriptExecutionResultResult::getExecutionResults()const
{
	return executionResults_;
}

