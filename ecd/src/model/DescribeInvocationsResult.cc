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

#include <alibabacloud/ecd/model/DescribeInvocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

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
		if(!valueInvocationsInvocation["CommandContent"].isNull())
			invocationsObject.commandContent = valueInvocationsInvocation["CommandContent"].asString();
		if(!valueInvocationsInvocation["CommandType"].isNull())
			invocationsObject.commandType = valueInvocationsInvocation["CommandType"].asString();
		if(!valueInvocationsInvocation["InvocationStatus"].isNull())
			invocationsObject.invocationStatus = valueInvocationsInvocation["InvocationStatus"].asString();
		if(!valueInvocationsInvocation["CreationTime"].isNull())
			invocationsObject.creationTime = valueInvocationsInvocation["CreationTime"].asString();
		if(!valueInvocationsInvocation["EndUserId"].isNull())
			invocationsObject.endUserId = valueInvocationsInvocation["EndUserId"].asString();
		auto allInvokeDesktopsNode = valueInvocationsInvocation["InvokeDesktops"]["InvokeDesktop"];
		for (auto valueInvocationsInvocationInvokeDesktopsInvokeDesktop : allInvokeDesktopsNode)
		{
			Invocation::InvokeDesktop invokeDesktopsObject;
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["InvocationStatus"].isNull())
				invokeDesktopsObject.invocationStatus = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["InvocationStatus"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Output"].isNull())
				invokeDesktopsObject.output = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Output"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["CreationTime"].isNull())
				invokeDesktopsObject.creationTime = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["CreationTime"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["UpdateTime"].isNull())
				invokeDesktopsObject.updateTime = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["UpdateTime"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Repeats"].isNull())
				invokeDesktopsObject.repeats = std::stoi(valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Repeats"].asString());
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["DesktopId"].isNull())
				invokeDesktopsObject.desktopId = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["DesktopId"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Dropped"].isNull())
				invokeDesktopsObject.dropped = std::stoi(valueInvocationsInvocationInvokeDesktopsInvokeDesktop["Dropped"].asString());
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["StartTime"].isNull())
				invokeDesktopsObject.startTime = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["StartTime"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["StopTime"].isNull())
				invokeDesktopsObject.stopTime = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["StopTime"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["FinishTime"].isNull())
				invokeDesktopsObject.finishTime = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["FinishTime"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ExitCode"].isNull())
				invokeDesktopsObject.exitCode = std::stol(valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ExitCode"].asString());
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ErrorCode"].isNull())
				invokeDesktopsObject.errorCode = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ErrorCode"].asString();
			if(!valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ErrorInfo"].isNull())
				invokeDesktopsObject.errorInfo = valueInvocationsInvocationInvokeDesktopsInvokeDesktop["ErrorInfo"].asString();
			invocationsObject.invokeDesktops.push_back(invokeDesktopsObject);
		}
		invocations_.push_back(invocationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeInvocationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeInvocationsResult::Invocation> DescribeInvocationsResult::getInvocations()const
{
	return invocations_;
}

