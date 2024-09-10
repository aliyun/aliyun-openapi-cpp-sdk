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
		if(!valueInvocationsInvocation["CreationTime"].isNull())
			invocationsObject.creationTime = valueInvocationsInvocation["CreationTime"].asString();
		if(!valueInvocationsInvocation["Frequency"].isNull())
			invocationsObject.frequency = valueInvocationsInvocation["Frequency"].asString();
		if(!valueInvocationsInvocation["InvocationStatus"].isNull())
			invocationsObject.invocationStatus = valueInvocationsInvocation["InvocationStatus"].asString();
		if(!valueInvocationsInvocation["RepeatMode"].isNull())
			invocationsObject.repeatMode = valueInvocationsInvocation["RepeatMode"].asString();
		if(!valueInvocationsInvocation["CommandId"].isNull())
			invocationsObject.commandId = valueInvocationsInvocation["CommandId"].asString();
		if(!valueInvocationsInvocation["CommandType"].isNull())
			invocationsObject.commandType = valueInvocationsInvocation["CommandType"].asString();
		if(!valueInvocationsInvocation["InvokeStatus"].isNull())
			invocationsObject.invokeStatus = valueInvocationsInvocation["InvokeStatus"].asString();
		if(!valueInvocationsInvocation["Parameters"].isNull())
			invocationsObject.parameters = valueInvocationsInvocation["Parameters"].asString();
		if(!valueInvocationsInvocation["Timed"].isNull())
			invocationsObject.timed = valueInvocationsInvocation["Timed"].asString() == "true";
		if(!valueInvocationsInvocation["CommandContent"].isNull())
			invocationsObject.commandContent = valueInvocationsInvocation["CommandContent"].asString();
		if(!valueInvocationsInvocation["CommandName"].isNull())
			invocationsObject.commandName = valueInvocationsInvocation["CommandName"].asString();
		if(!valueInvocationsInvocation["CommandDescription"].isNull())
			invocationsObject.commandDescription = valueInvocationsInvocation["CommandDescription"].asString();
		if(!valueInvocationsInvocation["InvokeId"].isNull())
			invocationsObject.invokeId = valueInvocationsInvocation["InvokeId"].asString();
		if(!valueInvocationsInvocation["Username"].isNull())
			invocationsObject.username = valueInvocationsInvocation["Username"].asString();
		if(!valueInvocationsInvocation["WorkingDir"].isNull())
			invocationsObject.workingDir = valueInvocationsInvocation["WorkingDir"].asString();
		if(!valueInvocationsInvocation["Timeout"].isNull())
			invocationsObject.timeout = std::stol(valueInvocationsInvocation["Timeout"].asString());
		if(!valueInvocationsInvocation["ContainerId"].isNull())
			invocationsObject.containerId = valueInvocationsInvocation["ContainerId"].asString();
		if(!valueInvocationsInvocation["ContainerName"].isNull())
			invocationsObject.containerName = valueInvocationsInvocation["ContainerName"].asString();
		if(!valueInvocationsInvocation["TerminationMode"].isNull())
			invocationsObject.terminationMode = valueInvocationsInvocation["TerminationMode"].asString();
		if(!valueInvocationsInvocation["Launcher"].isNull())
			invocationsObject.launcher = valueInvocationsInvocation["Launcher"].asString();
		auto allInvokeInstancesNode = valueInvocationsInvocation["InvokeInstances"]["InvokeInstance"];
		for (auto valueInvocationsInvocationInvokeInstancesInvokeInstance : allInvokeInstancesNode)
		{
			Invocation::InvokeInstance invokeInstancesObject;
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].isNull())
				invokeInstancesObject.creationTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["CreationTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].isNull())
				invokeInstancesObject.updateTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["UpdateTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].isNull())
				invokeInstancesObject.finishTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["FinishTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].isNull())
				invokeInstancesObject.invocationStatus = valueInvocationsInvocationInvokeInstancesInvokeInstance["InvocationStatus"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Repeats"].isNull())
				invokeInstancesObject.repeats = std::stoi(valueInvocationsInvocationInvokeInstancesInvokeInstance["Repeats"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].isNull())
				invokeInstancesObject.instanceId = valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceId"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Output"].isNull())
				invokeInstancesObject.output = valueInvocationsInvocationInvokeInstancesInvokeInstance["Output"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Dropped"].isNull())
				invokeInstancesObject.dropped = std::stoi(valueInvocationsInvocationInvokeInstancesInvokeInstance["Dropped"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["StopTime"].isNull())
				invokeInstancesObject.stopTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["StopTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ExitCode"].isNull())
				invokeInstancesObject.exitCode = std::stol(valueInvocationsInvocationInvokeInstancesInvokeInstance["ExitCode"].asString());
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].isNull())
				invokeInstancesObject.startTime = valueInvocationsInvocationInvokeInstancesInvokeInstance["StartTime"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].isNull())
				invokeInstancesObject.errorInfo = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorInfo"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["Timed"].isNull())
				invokeInstancesObject.timed = valueInvocationsInvocationInvokeInstancesInvokeInstance["Timed"].asString() == "true";
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].isNull())
				invokeInstancesObject.errorCode = valueInvocationsInvocationInvokeInstancesInvokeInstance["ErrorCode"].asString();
			if(!valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceInvokeStatus"].isNull())
				invokeInstancesObject.instanceInvokeStatus = valueInvocationsInvocationInvokeInstancesInvokeInstance["InstanceInvokeStatus"].asString();
			invocationsObject.invokeInstances.push_back(invokeInstancesObject);
		}
		auto allTagsNode = valueInvocationsInvocation["Tags"]["Tag"];
		for (auto valueInvocationsInvocationTagsTag : allTagsNode)
		{
			Invocation::Tag tagsObject;
			if(!valueInvocationsInvocationTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueInvocationsInvocationTagsTag["TagKey"].asString();
			if(!valueInvocationsInvocationTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueInvocationsInvocationTagsTag["TagValue"].asString();
			invocationsObject.tags.push_back(tagsObject);
		}
		invocations_.push_back(invocationsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long DescribeInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeInvocationsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeInvocationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeInvocationsResult::Invocation> DescribeInvocationsResult::getInvocations()const
{
	return invocations_;
}

long DescribeInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

