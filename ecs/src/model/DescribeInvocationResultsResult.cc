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
	auto allInvocation = value["Invocation"];
	for (auto value : allInvocation)
	{
		Invocation invocationObject;
		if(!value["PageSize"].isNull())
			invocationObject.pageSize = std::stol(value["PageSize"].asString());
		if(!value["PageNumber"].isNull())
			invocationObject.pageNumber = std::stol(value["PageNumber"].asString());
		if(!value["TotalCount"].isNull())
			invocationObject.totalCount = std::stol(value["TotalCount"].asString());
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
			if(!value["FinishedTime"].isNull())
				invocationResultObject.finishedTime = value["FinishedTime"].asString();
			if(!value["Output"].isNull())
				invocationResultObject.output = value["Output"].asString();
			if(!value["InvokeRecordStatus"].isNull())
				invocationResultObject.invokeRecordStatus = value["InvokeRecordStatus"].asString();
			if(!value["ExitCode"].isNull())
				invocationResultObject.exitCode = std::stol(value["ExitCode"].asString());
			invocationObject.invocationResults.push_back(invocationResultObject);
		}
		invocation_.push_back(invocationObject);
	}

}

std::vector<DescribeInvocationResultsResult::Invocation> DescribeInvocationResultsResult::getInvocation()const
{
	return invocation_;
}

