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

#include <alibabacloud/ecs/model/DescribeInvocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInvocationsResult::DescribeInvocationsResult() :
	ServiceResult()
{}

DescribeInvocationsResult::DescribeInvocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInvocationsResult::~DescribeInvocationsResult()
{}

void DescribeInvocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInvocationsNode = value["Invocations"]["Invocation"];
	for (auto valueInvocationsInvocation : allInvocationsNode)
	{
		Invocation invocationsObject;
		if(!valueInvocationsInvocation["InvokeId"].isNull())
			invocationsObject.invokeId = valueInvocationsInvocation["InvokeId"].asString();
		if(!valueInvocationsInvocation["CreationTime"].isNull())
			invocationsObject.creationTime = valueInvocationsInvocation["CreationTime"].asString();
		if(!valueInvocationsInvocation["CommandId"].isNull())
			invocationsObject.commandId = valueInvocationsInvocation["CommandId"].asString();
		if(!valueInvocationsInvocation["CommandType"].isNull())
			invocationsObject.commandType = valueInvocationsInvocation["CommandType"].asString();
		if(!valueInvocationsInvocation["CommandName"].isNull())
			invocationsObject.commandName = valueInvocationsInvocation["CommandName"].asString();
		if(!valueInvocationsInvocation["CommandContent"].isNull())
			invocationsObject.commandContent = valueInvocationsInvocation["CommandContent"].asString();
		if(!valueInvocationsInvocation["Frequency"].isNull())
			invocationsObject.frequency = valueInvocationsInvocation["Frequency"].asString();
		if(!valueInvocationsInvocation["Timed"].isNull())
			invocationsObject.timed = valueInvocationsInvocation["Timed"].asString() == "true";
		if(!valueInvocationsInvocation["InvokeStatus"].isNull())
			invocationsObject.invokeStatus = valueInvocationsInvocation["InvokeStatus"].asString();
		if(!valueInvocationsInvocation["InvocationStatus"].isNull())
			invocationsObject.invocationStatus = valueInvocationsInvocation["InvocationStatus"].asString();
		if(!valueInvocationsInvocation["Parameters"].isNull())
			invocationsObject.parameters = valueInvocationsInvocation["Parameters"].asString();
		auto allInvokeInstancesNode = valueInvocationsInvocation["InvokeInstances"]["InvokeInstance"];
		for (auto valueInvocationsInvocationInvokeInstancesInvokeInstance : allInvokeInstancesNode)
		{
			Invocation::InvokeInstance invokeInstancesObject;
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].isNull())
				invokeInstancesObject.instanceId = valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Repeats"].isNull())
				invokeInstancesObject.repeats = std::stoi(valueInvocationsInvocationInvokeInstancesInvokeInstance["Repeats"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceInvokeStatus"].isNull())
				invokeInstancesObject.instanceInvokeStatus = valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceInvokeStatus"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].isNull())
				invokeInstancesObject.invocationStatus = valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Output"].isNull())
				invokeInstancesObject.output = valueInvocationsInvocationInvokeInstancesInvokeInstance["Output"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ExitCode"].isNull())
				invokeInstancesObject.exitCode = std::stol(valueInvocationsInvocationInvokeInstancesInvokeInstance["ExitCode"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Dropped"].isNull())
				invokeInstancesObject.dropped = std::stoi(valueInvocationsInvocationInvokeInstancesInvokeInstance["Dropped"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].isNull())
				invokeInstancesObject.errorCode = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].isNull())
				invokeInstancesObject.errorInfo = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].isNull())
				invokeInstancesObject.creationTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].isNull())
				invokeInstancesObject.startTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["StopTime"].isNull())
				invokeInstancesObject.stopTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["StopTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].isNull())
				invokeInstancesObject.finishTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].isNull())
				invokeInstancesObject.updateTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].asString();
			invocationsObject.invokeInstances.push_back(invokeInstancesObject);
		}
		invocations_.push_back(invocationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeInvocationsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeInvocationsResult::Invocation> DescribeInvocationsResult::getInvocations()const
{
	return invocations_;
}

long DescribeInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

