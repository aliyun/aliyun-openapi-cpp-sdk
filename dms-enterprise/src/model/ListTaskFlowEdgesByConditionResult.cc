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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowEdgesByConditionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowEdgesByConditionResult::ListTaskFlowEdgesByConditionResult() :
	ServiceResult()
{}

ListTaskFlowEdgesByConditionResult::ListTaskFlowEdgesByConditionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowEdgesByConditionResult::~ListTaskFlowEdgesByConditionResult()
{}

void ListTaskFlowEdgesByConditionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEdgesNode = value["Edges"]["Edge"];
	for (auto valueEdgesEdge : allEdgesNode)
	{
		Edge edgesObject;
		if(!valueEdgesEdge["Id"].isNull())
			edgesObject.id = std::stol(valueEdgesEdge["Id"].asString());
		if(!valueEdgesEdge["NodeEnd"].isNull())
			edgesObject.nodeEnd = std::stol(valueEdgesEdge["NodeEnd"].asString());
		if(!valueEdgesEdge["NodeFrom"].isNull())
			edgesObject.nodeFrom = std::stol(valueEdgesEdge["NodeFrom"].asString());
		edges_.push_back(edgesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTaskFlowEdgesByConditionResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowEdgesByConditionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListTaskFlowEdgesByConditionResult::Edge> ListTaskFlowEdgesByConditionResult::getEdges()const
{
	return edges_;
}

bool ListTaskFlowEdgesByConditionResult::getSuccess()const
{
	return success_;
}

