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

#include <alibabacloud/dms-enterprise/model/GetTaskInstanceRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTaskInstanceRelationResult::GetTaskInstanceRelationResult() :
	ServiceResult()
{}

GetTaskInstanceRelationResult::GetTaskInstanceRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskInstanceRelationResult::~GetTaskInstanceRelationResult()
{}

void GetTaskInstanceRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeListNode = value["NodeList"]["Node"];
	for (auto valueNodeListNode : allNodeListNode)
	{
		Node nodeListObject;
		if(!valueNodeListNode["Id"].isNull())
			nodeListObject.id = std::stol(valueNodeListNode["Id"].asString());
		if(!valueNodeListNode["NodeId"].isNull())
			nodeListObject.nodeId = std::stol(valueNodeListNode["NodeId"].asString());
		if(!valueNodeListNode["NodeName"].isNull())
			nodeListObject.nodeName = valueNodeListNode["NodeName"].asString();
		if(!valueNodeListNode["NodeType"].isNull())
			nodeListObject.nodeType = std::stoi(valueNodeListNode["NodeType"].asString());
		if(!valueNodeListNode["BusinessTime"].isNull())
			nodeListObject.businessTime = valueNodeListNode["BusinessTime"].asString();
		if(!valueNodeListNode["Status"].isNull())
			nodeListObject.status = std::stoi(valueNodeListNode["Status"].asString());
		if(!valueNodeListNode["Message"].isNull())
			nodeListObject.message = valueNodeListNode["Message"].asString();
		if(!valueNodeListNode["ExecuteTime"].isNull())
			nodeListObject.executeTime = std::stol(valueNodeListNode["ExecuteTime"].asString());
		if(!valueNodeListNode["EndTime"].isNull())
			nodeListObject.endTime = valueNodeListNode["EndTime"].asString();
		nodeList_.push_back(nodeListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetTaskInstanceRelationResult::Node> GetTaskInstanceRelationResult::getNodeList()const
{
	return nodeList_;
}

std::string GetTaskInstanceRelationResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskInstanceRelationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTaskInstanceRelationResult::getSuccess()const
{
	return success_;
}

