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

#include <alibabacloud/schedulerx2/model/GetWorkFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

GetWorkFlowResult::GetWorkFlowResult() :
	ServiceResult()
{}

GetWorkFlowResult::GetWorkFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkFlowResult::~GetWorkFlowResult()
{}

void GetWorkFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto workFlowInfoNode = dataNode["WorkFlowInfo"];
	if(!workFlowInfoNode["WorkflowId"].isNull())
		data_.workFlowInfo.workflowId = std::stol(workFlowInfoNode["WorkflowId"].asString());
	if(!workFlowInfoNode["Name"].isNull())
		data_.workFlowInfo.name = workFlowInfoNode["Name"].asString();
	if(!workFlowInfoNode["Description"].isNull())
		data_.workFlowInfo.description = workFlowInfoNode["Description"].asString();
	if(!workFlowInfoNode["Status"].isNull())
		data_.workFlowInfo.status = workFlowInfoNode["Status"].asString();
	if(!workFlowInfoNode["TimeType"].isNull())
		data_.workFlowInfo.timeType = workFlowInfoNode["TimeType"].asString();
	if(!workFlowInfoNode["TimeExpression"].isNull())
		data_.workFlowInfo.timeExpression = workFlowInfoNode["TimeExpression"].asString();
	if(!workFlowInfoNode["GroupId"].isNull())
		data_.workFlowInfo.groupId = workFlowInfoNode["GroupId"].asString();
	if(!workFlowInfoNode["Namespace"].isNull())
		data_.workFlowInfo._namespace = workFlowInfoNode["Namespace"].asString();
	if(!workFlowInfoNode["MaxConcurrency"].isNull())
		data_.workFlowInfo.maxConcurrency = workFlowInfoNode["MaxConcurrency"].asString();
	auto workFlowNodeInfoNode = dataNode["WorkFlowNodeInfo"];
	auto allNodesNode = workFlowNodeInfoNode["Nodes"]["Node"];
	for (auto workFlowNodeInfoNodeNodesNode : allNodesNode)
	{
		Data::WorkFlowNodeInfo::Node nodeObject;
		if(!workFlowNodeInfoNodeNodesNode["Id"].isNull())
			nodeObject.id = std::stol(workFlowNodeInfoNodeNodesNode["Id"].asString());
		if(!workFlowNodeInfoNodeNodesNode["Label"].isNull())
			nodeObject.label = workFlowNodeInfoNodeNodesNode["Label"].asString();
		if(!workFlowNodeInfoNodeNodesNode["Status"].isNull())
			nodeObject.status = std::stoi(workFlowNodeInfoNodeNodesNode["Status"].asString());
		data_.workFlowNodeInfo.nodes.push_back(nodeObject);
	}
	auto allEdgesNode = workFlowNodeInfoNode["Edges"]["Edge"];
	for (auto workFlowNodeInfoNodeEdgesEdge : allEdgesNode)
	{
		Data::WorkFlowNodeInfo::Edge edgeObject;
		if(!workFlowNodeInfoNodeEdgesEdge["Source"].isNull())
			edgeObject.source = std::stol(workFlowNodeInfoNodeEdgesEdge["Source"].asString());
		if(!workFlowNodeInfoNodeEdgesEdge["Target"].isNull())
			edgeObject.target = std::stol(workFlowNodeInfoNodeEdgesEdge["Target"].asString());
		data_.workFlowNodeInfo.edges.push_back(edgeObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetWorkFlowResult::getMessage()const
{
	return message_;
}

GetWorkFlowResult::Data GetWorkFlowResult::getData()const
{
	return data_;
}

int GetWorkFlowResult::getCode()const
{
	return code_;
}

bool GetWorkFlowResult::getSuccess()const
{
	return success_;
}

