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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto invocationNode = value["Invocation"];
	if(!invocationNode["PageSize"].isNull())
		invocation_.pageSize = std::stol(invocationNode["PageSize"].asString());
	if(!invocationNode["PageNumber"].isNull())
		invocation_.pageNumber = std::stol(invocationNode["PageNumber"].asString());
	if(!invocationNode["TotalCount"].isNull())
		invocation_.totalCount = std::stol(invocationNode["TotalCount"].asString());
	auto allInvocationResults = value["InvocationResults"]["InvocationResult"];
	for (auto value : allInvocationResults)
	{
		Invocation::InvocationResult invocationResultObject;
		if(!value["CommandId"].isNull())
			invocationResultObject.commandId = value["CommandId"].asString();
		if(!value["InvokeId"].isNull())
			invocationResultObject.invokeId = value["InvokeId"].asString();
		if(!value["InstanceId"].isNull())
			invocationResultObject.instanceId = value["InstanceId"].asString();
		if(!value["StartTime"].isNull())
			invocationResultObject.startTime = value["StartTime"].asString();
		if(!value["FinishedTime"].isNull())
			invocationResultObject.finishedTime = value["FinishedTime"].asString();
		if(!value["Output"].isNull())
			invocationResultObject.output = value["Output"].asString();
		if(!value["InvokeRecordStatus"].isNull())
			invocationResultObject.invokeRecordStatus = value["InvokeRecordStatus"].asString();
		if(!value["ExitCode"].isNull())
			invocationResultObject.exitCode = std::stol(value["ExitCode"].asString());
		invocation_.invocationResults.push_back(invocationResultObject);
	}

}

DescribeInvocationResultsResult::Invocation DescribeInvocationResultsResult::getInvocation()const
{
	return invocation_;
}

