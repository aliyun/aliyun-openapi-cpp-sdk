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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allNodeProcesses = value["NodeProcesses"]["NodeProcess"];
	for (auto value : allNodeProcesses)
	{
		NodeProcess nodeProcessesObject;
		if(!value["Id"].isNull())
			nodeProcessesObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			nodeProcessesObject.name = value["Name"].asString();
		if(!value["InstanceId"].isNull())
			nodeProcessesObject.instanceId = value["InstanceId"].asString();
		if(!value["ProcessName"].isNull())
			nodeProcessesObject.processName = value["ProcessName"].asString();
		if(!value["ProcessUser"].isNull())
			nodeProcessesObject.processUser = value["ProcessUser"].asString();
		if(!value["Command"].isNull())
			nodeProcessesObject.command = value["Command"].asString();
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

