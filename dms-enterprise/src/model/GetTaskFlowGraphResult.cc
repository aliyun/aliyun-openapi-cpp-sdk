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

#include <alibabacloud/dms-enterprise/model/GetTaskFlowGraphResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTaskFlowGraphResult::GetTaskFlowGraphResult() :
	ServiceResult()
{}

GetTaskFlowGraphResult::GetTaskFlowGraphResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskFlowGraphResult::~GetTaskFlowGraphResult()
{}

void GetTaskFlowGraphResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskFlowGraphNode = value["TaskFlowGraph"];
	if(!taskFlowGraphNode["DagName"].isNull())
		taskFlowGraph_.dagName = taskFlowGraphNode["DagName"].asString();
	if(!taskFlowGraphNode["Status"].isNull())
		taskFlowGraph_.status = std::stol(taskFlowGraphNode["Status"].asString());
	if(!taskFlowGraphNode["CanEdit"].isNull())
		taskFlowGraph_.canEdit = taskFlowGraphNode["CanEdit"].asString() == "true";
	auto allNodesNode = taskFlowGraphNode["Nodes"]["Node"];
	for (auto taskFlowGraphNodeNodesNode : allNodesNode)
	{
		TaskFlowGraph::Node nodeObject;
		if(!taskFlowGraphNodeNodesNode["DagId"].isNull())
			nodeObject.dagId = std::stol(taskFlowGraphNodeNodesNode["DagId"].asString());
		if(!taskFlowGraphNodeNodesNode["NodeId"].isNull())
			nodeObject.nodeId = std::stol(taskFlowGraphNodeNodesNode["NodeId"].asString());
		if(!taskFlowGraphNodeNodesNode["NodeName"].isNull())
			nodeObject.nodeName = taskFlowGraphNodeNodesNode["NodeName"].asString();
		if(!taskFlowGraphNodeNodesNode["NodeType"].isNull())
			nodeObject.nodeType = std::stol(taskFlowGraphNodeNodesNode["NodeType"].asString());
		if(!taskFlowGraphNodeNodesNode["NodeContent"].isNull())
			nodeObject.nodeContent = taskFlowGraphNodeNodesNode["NodeContent"].asString();
		if(!taskFlowGraphNodeNodesNode["TimeVariables"].isNull())
			nodeObject.timeVariables = taskFlowGraphNodeNodesNode["TimeVariables"].asString();
		if(!taskFlowGraphNodeNodesNode["NodeConfig"].isNull())
			nodeObject.nodeConfig = taskFlowGraphNodeNodesNode["NodeConfig"].asString();
		if(!taskFlowGraphNodeNodesNode["GraphParam"].isNull())
			nodeObject.graphParam = taskFlowGraphNodeNodesNode["GraphParam"].asString();
		taskFlowGraph_.nodes.push_back(nodeObject);
	}
	auto allEdgesNode = taskFlowGraphNode["Edges"]["Edge"];
	for (auto taskFlowGraphNodeEdgesEdge : allEdgesNode)
	{
		TaskFlowGraph::Edge edgeObject;
		if(!taskFlowGraphNodeEdgesEdge["DagId"].isNull())
			edgeObject.dagId = std::stol(taskFlowGraphNodeEdgesEdge["DagId"].asString());
		if(!taskFlowGraphNodeEdgesEdge["Id"].isNull())
			edgeObject.id = std::stol(taskFlowGraphNodeEdgesEdge["Id"].asString());
		if(!taskFlowGraphNodeEdgesEdge["NodeEnd"].isNull())
			edgeObject.nodeEnd = std::stol(taskFlowGraphNodeEdgesEdge["NodeEnd"].asString());
		if(!taskFlowGraphNodeEdgesEdge["NodeFrom"].isNull())
			edgeObject.nodeFrom = std::stol(taskFlowGraphNodeEdgesEdge["NodeFrom"].asString());
		taskFlowGraph_.edges.push_back(edgeObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTaskFlowGraphResult::TaskFlowGraph GetTaskFlowGraphResult::getTaskFlowGraph()const
{
	return taskFlowGraph_;
}

std::string GetTaskFlowGraphResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskFlowGraphResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTaskFlowGraphResult::getSuccess()const
{
	return success_;
}

