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

#include <alibabacloud/cms/model/NodeStatusListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

NodeStatusListResult::NodeStatusListResult() :
	ServiceResult()
{}

NodeStatusListResult::NodeStatusListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

NodeStatusListResult::~NodeStatusListResult()
{}

void NodeStatusListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeStatusListNode = value["NodeStatusList"]["NodeStatus"];
	for (auto valueNodeStatusListNodeStatus : allNodeStatusListNode)
	{
		NodeStatus nodeStatusListObject;
		if(!valueNodeStatusListNodeStatus["InstanceId"].isNull())
			nodeStatusListObject.instanceId = valueNodeStatusListNodeStatus["InstanceId"].asString();
		if(!valueNodeStatusListNodeStatus["AutoInstall"].isNull())
			nodeStatusListObject.autoInstall = valueNodeStatusListNodeStatus["AutoInstall"].asString() == "true";
		if(!valueNodeStatusListNodeStatus["Status"].isNull())
			nodeStatusListObject.status = valueNodeStatusListNodeStatus["Status"].asString();
		nodeStatusList_.push_back(nodeStatusListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<NodeStatusListResult::NodeStatus> NodeStatusListResult::getNodeStatusList()const
{
	return nodeStatusList_;
}

int NodeStatusListResult::getErrorCode()const
{
	return errorCode_;
}

std::string NodeStatusListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool NodeStatusListResult::getSuccess()const
{
	return success_;
}

