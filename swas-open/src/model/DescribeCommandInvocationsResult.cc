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

#include <alibabacloud/swas-open/model/DescribeCommandInvocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeCommandInvocationsResult::DescribeCommandInvocationsResult() :
	ServiceResult()
{}

DescribeCommandInvocationsResult::DescribeCommandInvocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommandInvocationsResult::~DescribeCommandInvocationsResult()
{}

void DescribeCommandInvocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommandInvocationsNode = value["CommandInvocations"]["command"];
	for (auto valueCommandInvocationscommand : allCommandInvocationsNode)
	{
		Command commandInvocationsObject;
		if(!valueCommandInvocationscommand["InvokeId"].isNull())
			commandInvocationsObject.invokeId = valueCommandInvocationscommand["InvokeId"].asString();
		if(!valueCommandInvocationscommand["CreationTime"].isNull())
			commandInvocationsObject.creationTime = valueCommandInvocationscommand["CreationTime"].asString();
		if(!valueCommandInvocationscommand["CommandId"].isNull())
			commandInvocationsObject.commandId = valueCommandInvocationscommand["CommandId"].asString();
		if(!valueCommandInvocationscommand["InvocationStatus"].isNull())
			commandInvocationsObject.invocationStatus = valueCommandInvocationscommand["InvocationStatus"].asString();
		if(!valueCommandInvocationscommand["CommandName"].isNull())
			commandInvocationsObject.commandName = valueCommandInvocationscommand["CommandName"].asString();
		if(!valueCommandInvocationscommand["CommandType"].isNull())
			commandInvocationsObject.commandType = valueCommandInvocationscommand["CommandType"].asString();
		if(!valueCommandInvocationscommand["CommandDescription"].isNull())
			commandInvocationsObject.commandDescription = valueCommandInvocationscommand["CommandDescription"].asString();
		if(!valueCommandInvocationscommand["Username"].isNull())
			commandInvocationsObject.username = valueCommandInvocationscommand["Username"].asString();
		if(!valueCommandInvocationscommand["WorkingDir"].isNull())
			commandInvocationsObject.workingDir = valueCommandInvocationscommand["WorkingDir"].asString();
		if(!valueCommandInvocationscommand["Timeout"].isNull())
			commandInvocationsObject.timeout = std::stol(valueCommandInvocationscommand["Timeout"].asString());
		if(!valueCommandInvocationscommand["CommandContent"].isNull())
			commandInvocationsObject.commandContent = valueCommandInvocationscommand["CommandContent"].asString();
		if(!valueCommandInvocationscommand["Parameters"].isNull())
			commandInvocationsObject.parameters = valueCommandInvocationscommand["Parameters"].asString();
		auto allInvokeInstancesNode = valueCommandInvocationscommand["InvokeInstances"]["invokeInstance"];
		for (auto valueCommandInvocationscommandInvokeInstancesinvokeInstance : allInvokeInstancesNode)
		{
			Command::InvokeInstance invokeInstancesObject;
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["InstanceId"].isNull())
				invokeInstancesObject.instanceId = valueCommandInvocationscommandInvokeInstancesinvokeInstance["InstanceId"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["StartTime"].isNull())
				invokeInstancesObject.startTime = valueCommandInvocationscommandInvokeInstancesinvokeInstance["StartTime"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["FinishTime"].isNull())
				invokeInstancesObject.finishTime = valueCommandInvocationscommandInvokeInstancesinvokeInstance["FinishTime"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["InvocationStatus"].isNull())
				invokeInstancesObject.invocationStatus = valueCommandInvocationscommandInvokeInstancesinvokeInstance["InvocationStatus"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["Output"].isNull())
				invokeInstancesObject.output = valueCommandInvocationscommandInvokeInstancesinvokeInstance["Output"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["ExitCode"].isNull())
				invokeInstancesObject.exitCode = std::stol(valueCommandInvocationscommandInvokeInstancesinvokeInstance["ExitCode"].asString());
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["ErrorInfo"].isNull())
				invokeInstancesObject.errorInfo = valueCommandInvocationscommandInvokeInstancesinvokeInstance["ErrorInfo"].asString();
			if(!valueCommandInvocationscommandInvokeInstancesinvokeInstance["ErrorCode"].isNull())
				invokeInstancesObject.errorCode = valueCommandInvocationscommandInvokeInstancesinvokeInstance["ErrorCode"].asString();
			commandInvocationsObject.invokeInstances.push_back(invokeInstancesObject);
		}
		commandInvocations_.push_back(commandInvocationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCommandInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCommandInvocationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCommandInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCommandInvocationsResult::Command> DescribeCommandInvocationsResult::getCommandInvocations()const
{
	return commandInvocations_;
}

