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

#include <alibabacloud/cms/model/NodeProcessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

NodeProcessesResult::NodeProcessesResult() :
	ServiceResult()
{}

NodeProcessesResult::NodeProcessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

NodeProcessesResult::~NodeProcessesResult()
{}

void NodeProcessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeProcessesNode = value["NodeProcesses"]["NodeProcess"];
	for (auto valueNodeProcessesNodeProcess : allNodeProcessesNode)
	{
		NodeProcess nodeProcessesObject;
		if(!valueNodeProcessesNodeProcess["Id"].isNull())
			nodeProcessesObject.id = std::stol(valueNodeProcessesNodeProcess["Id"].asString());
		if(!valueNodeProcessesNodeProcess["Name"].isNull())
			nodeProcessesObject.name = valueNodeProcessesNodeProcess["Name"].asString();
		if(!valueNodeProcessesNodeProcess["InstanceId"].isNull())
			nodeProcessesObject.instanceId = valueNodeProcessesNodeProcess["InstanceId"].asString();
		if(!valueNodeProcessesNodeProcess["ProcessName"].isNull())
			nodeProcessesObject.processName = valueNodeProcessesNodeProcess["ProcessName"].asString();
		if(!valueNodeProcessesNodeProcess["ProcessUser"].isNull())
			nodeProcessesObject.processUser = valueNodeProcessesNodeProcess["ProcessUser"].asString();
		if(!valueNodeProcessesNodeProcess["Command"].isNull())
			nodeProcessesObject.command = valueNodeProcessesNodeProcess["Command"].asString();
		nodeProcesses_.push_back(nodeProcessesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<NodeProcessesResult::NodeProcess> NodeProcessesResult::getNodeProcesses()const
{
	return nodeProcesses_;
}

int NodeProcessesResult::getErrorCode()const
{
	return errorCode_;
}

std::string NodeProcessesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool NodeProcessesResult::getSuccess()const
{
	return success_;
}

