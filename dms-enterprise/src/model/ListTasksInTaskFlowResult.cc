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

#include <alibabacloud/dms-enterprise/model/ListTasksInTaskFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTasksInTaskFlowResult::ListTasksInTaskFlowResult() :
	ServiceResult()
{}

ListTasksInTaskFlowResult::ListTasksInTaskFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTasksInTaskFlowResult::~ListTasksInTaskFlowResult()
{}

void ListTasksInTaskFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["NodeName"].isNull())
			tasksObject.nodeName = valueTasksTask["NodeName"].asString();
		if(!valueTasksTask["NodeType"].isNull())
			tasksObject.nodeType = valueTasksTask["NodeType"].asString();
		if(!valueTasksTask["NodeContent"].isNull())
			tasksObject.nodeContent = valueTasksTask["NodeContent"].asString();
		if(!valueTasksTask["TimeVariables"].isNull())
			tasksObject.timeVariables = valueTasksTask["TimeVariables"].asString();
		if(!valueTasksTask["NodeConfig"].isNull())
			tasksObject.nodeConfig = valueTasksTask["NodeConfig"].asString();
		if(!valueTasksTask["NodeOutput"].isNull())
			tasksObject.nodeOutput = valueTasksTask["NodeOutput"].asString();
		if(!valueTasksTask["GraphParam"].isNull())
			tasksObject.graphParam = valueTasksTask["GraphParam"].asString();
		if(!valueTasksTask["NodeId"].isNull())
			tasksObject.nodeId = valueTasksTask["NodeId"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListTasksInTaskFlowResult::Task> ListTasksInTaskFlowResult::getTasks()const
{
	return tasks_;
}

std::string ListTasksInTaskFlowResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTasksInTaskFlowResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTasksInTaskFlowResult::getSuccess()const
{
	return success_;
}

