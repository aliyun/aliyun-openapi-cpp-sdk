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

#include <alibabacloud/cms/model/DescribeMonitoringAgentProcessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitoringAgentProcessesResult::DescribeMonitoringAgentProcessesResult() :
	ServiceResult()
{}

DescribeMonitoringAgentProcessesResult::DescribeMonitoringAgentProcessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitoringAgentProcessesResult::~DescribeMonitoringAgentProcessesResult()
{}

void DescribeMonitoringAgentProcessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeProcessesNode = value["NodeProcesses"]["NodeProcess"];
	for (auto valueNodeProcessesNodeProcess : allNodeProcessesNode)
	{
		NodeProcess nodeProcessesObject;
		if(!valueNodeProcessesNodeProcess["ProcessName"].isNull())
			nodeProcessesObject.processName = valueNodeProcessesNodeProcess["ProcessName"].asString();
		if(!valueNodeProcessesNodeProcess["ProcessId"].isNull())
			nodeProcessesObject.processId = std::stol(valueNodeProcessesNodeProcess["ProcessId"].asString());
		if(!valueNodeProcessesNodeProcess["GroupId"].isNull())
			nodeProcessesObject.groupId = valueNodeProcessesNodeProcess["GroupId"].asString();
		if(!valueNodeProcessesNodeProcess["Command"].isNull())
			nodeProcessesObject.command = valueNodeProcessesNodeProcess["Command"].asString();
		if(!valueNodeProcessesNodeProcess["ProcessUser"].isNull())
			nodeProcessesObject.processUser = valueNodeProcessesNodeProcess["ProcessUser"].asString();
		if(!valueNodeProcessesNodeProcess["InstanceId"].isNull())
			nodeProcessesObject.instanceId = valueNodeProcessesNodeProcess["InstanceId"].asString();
		nodeProcesses_.push_back(nodeProcessesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMonitoringAgentProcessesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMonitoringAgentProcessesResult::NodeProcess> DescribeMonitoringAgentProcessesResult::getNodeProcesses()const
{
	return nodeProcesses_;
}

std::string DescribeMonitoringAgentProcessesResult::getCode()const
{
	return code_;
}

bool DescribeMonitoringAgentProcessesResult::getSuccess()const
{
	return success_;
}

