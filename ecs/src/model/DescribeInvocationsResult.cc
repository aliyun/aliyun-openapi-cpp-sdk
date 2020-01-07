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
		if(!valueInvocationsInvocation["Parameters"].isNull())
			invocationsObject.parameters = valueInvocationsInvocation["Parameters"].asString();
		auto allInvokeInstancesNode = allInvocationsNode["InvokeInstances"]["InvokeInstance"];
		for (auto allInvocationsNodeInvokeInstancesInvokeInstance : allInvokeInstancesNode)
		{
			Invocation::InvokeInstance invokeInstancesObject;
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["InstanceId"].isNull())
				invokeInstancesObject.instanceId = allInvocationsNodeInvokeInstancesInvokeInstance["InstanceId"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["Repeats"].isNull())
				invokeInstancesObject.repeats = std::stoi(allInvocationsNodeInvokeInstancesInvokeInstance["Repeats"].asString());
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["InstanceInvokeStatus"].isNull())
				invokeInstancesObject.instanceInvokeStatus = allInvocationsNodeInvokeInstancesInvokeInstance["InstanceInvokeStatus"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["InvocationStatus"].isNull())
				invokeInstancesObject.invocationStatus = allInvocationsNodeInvokeInstancesInvokeInstance["InvocationStatus"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["Output"].isNull())
				invokeInstancesObject.output = allInvocationsNodeInvokeInstancesInvokeInstance["Output"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["ExitCode"].isNull())
				invokeInstancesObject.exitCode = std::stol(allInvocationsNodeInvokeInstancesInvokeInstance["ExitCode"].asString());
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["Dropped"].isNull())
				invokeInstancesObject.dropped = std::stoi(allInvocationsNodeInvokeInstancesInvokeInstance["Dropped"].asString());
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["ErrorCode"].isNull())
				invokeInstancesObject.errorCode = allInvocationsNodeInvokeInstancesInvokeInstance["ErrorCode"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["ErrorInfo"].isNull())
				invokeInstancesObject.errorInfo = allInvocationsNodeInvokeInstancesInvokeInstance["ErrorInfo"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["CreationTime"].isNull())
				invokeInstancesObject.creationTime = allInvocationsNodeInvokeInstancesInvokeInstance["CreationTime"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["StartTime"].isNull())
				invokeInstancesObject.startTime = allInvocationsNodeInvokeInstancesInvokeInstance["StartTime"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["StopTime"].isNull())
				invokeInstancesObject.stopTime = allInvocationsNodeInvokeInstancesInvokeInstance["StopTime"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["FinishTime"].isNull())
				invokeInstancesObject.finishTime = allInvocationsNodeInvokeInstancesInvokeInstance["FinishTime"].asString();
			if(!allInvocationsNodeInvokeInstancesInvokeInstance["UpdateTime"].isNull())
				invokeInstancesObject.updateTime = allInvocationsNodeInvokeInstancesInvokeInstance["UpdateTime"].asString();
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

