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

#include <alibabacloud/ecs/model/DescribeInvocationResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInvocationResultsResult::DescribeInvocationResultsResult() :
	ServiceResult()
{}

DescribeInvocationResultsResult::DescribeInvocationResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInvocationResultsResult::~DescribeInvocationResultsResult()
{}

void DescribeInvocationResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto invocationNode = value["Invocation"];
	if(!invocationNode["PageSize"].isNull())
		invocation_.pageSize = std::stol(invocationNode["PageSize"].asString());
	if(!invocationNode["PageNumber"].isNull())
		invocation_.pageNumber = std::stol(invocationNode["PageNumber"].asString());
	if(!invocationNode["TotalCount"].isNull())
		invocation_.totalCount = std::stol(invocationNode["TotalCount"].asString());
	auto allInvocationResultsNode = invocationNode["InvocationResults"]["InvocationResult"];
	for (auto invocationNodeInvocationResultsInvocationResult : allInvocationResultsNode)
	{
		Invocation::InvocationResult invocationResultObject;
		if(!invocationNodeInvocationResultsInvocationResult["CommandId"].isNull())
			invocationResultObject.commandId = invocationNodeInvocationResultsInvocationResult["CommandId"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["InvokeId"].isNull())
			invocationResultObject.invokeId = invocationNodeInvocationResultsInvocationResult["InvokeId"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["InstanceId"].isNull())
			invocationResultObject.instanceId = invocationNodeInvocationResultsInvocationResult["InstanceId"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["StartTime"].isNull())
			invocationResultObject.startTime = invocationNodeInvocationResultsInvocationResult["StartTime"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["FinishedTime"].isNull())
			invocationResultObject.finishedTime = invocationNodeInvocationResultsInvocationResult["FinishedTime"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["Output"].isNull())
			invocationResultObject.output = invocationNodeInvocationResultsInvocationResult["Output"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["InvokeRecordStatus"].isNull())
			invocationResultObject.invokeRecordStatus = invocationNodeInvocationResultsInvocationResult["InvokeRecordStatus"].asString();
		if(!invocationNodeInvocationResultsInvocationResult["ExitCode"].isNull())
			invocationResultObject.exitCode = std::stol(invocationNodeInvocationResultsInvocationResult["ExitCode"].asString());
		invocation_.invocationResults.push_back(invocationResultObject);
	}

}

DescribeInvocationResultsResult::Invocation DescribeInvocationResultsResult::getInvocation()const
{
	return invocation_;
}

