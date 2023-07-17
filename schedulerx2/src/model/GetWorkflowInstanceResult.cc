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

#include <alibabacloud/schedulerx2/model/GetWorkflowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

GetWorkflowInstanceResult::GetWorkflowInstanceResult() :
	ServiceResult()
{}

GetWorkflowInstanceResult::GetWorkflowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkflowInstanceResult::~GetWorkflowInstanceResult()
{}

void GetWorkflowInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto wfInstanceInfoNode = dataNode["WfInstanceInfo"];
	if(!wfInstanceInfoNode["Status"].isNull())
		data_.wfInstanceInfo.status = std::stoi(wfInstanceInfoNode["Status"].asString());
	if(!wfInstanceInfoNode["StartTime"].isNull())
		data_.wfInstanceInfo.startTime = wfInstanceInfoNode["StartTime"].asString();
	if(!wfInstanceInfoNode["EndTime"].isNull())
		data_.wfInstanceInfo.endTime = wfInstanceInfoNode["EndTime"].asString();
	if(!wfInstanceInfoNode["ScheduleTime"].isNull())
		data_.wfInstanceInfo.scheduleTime = wfInstanceInfoNode["ScheduleTime"].asString();
	if(!wfInstanceInfoNode["DataTime"].isNull())
		data_.wfInstanceInfo.dataTime = wfInstanceInfoNode["DataTime"].asString();
	auto wfInstanceDagNode = dataNode["WfInstanceDag"];
	auto allNodesNode = wfInstanceDagNode["Nodes"]["Node"];
	for (auto wfInstanceDagNodeNodesNode : allNodesNode)
	{
		Data::WfInstanceDag::Node nodeObject;
		if(!wfInstanceDagNodeNodesNode["JobInstanceId"].isNull())
			nodeObject.jobInstanceId = std::stol(wfInstanceDagNodeNodesNode["JobInstanceId"].asString());
		if(!wfInstanceDagNodeNodesNode["JobId"].isNull())
			nodeObject.jobId = std::stol(wfInstanceDagNodeNodesNode["JobId"].asString());
		if(!wfInstanceDagNodeNodesNode["StartTime"].isNull())
			nodeObject.startTime = wfInstanceDagNodeNodesNode["StartTime"].asString();
		if(!wfInstanceDagNodeNodesNode["EndTime"].isNull())
			nodeObject.endTime = wfInstanceDagNodeNodesNode["EndTime"].asString();
		if(!wfInstanceDagNodeNodesNode["ScheduleTime"].isNull())
			nodeObject.scheduleTime = wfInstanceDagNodeNodesNode["ScheduleTime"].asString();
		if(!wfInstanceDagNodeNodesNode["DataTime"].isNull())
			nodeObject.dataTime = wfInstanceDagNodeNodesNode["DataTime"].asString();
		if(!wfInstanceDagNodeNodesNode["WorkAddr"].isNull())
			nodeObject.workAddr = wfInstanceDagNodeNodesNode["WorkAddr"].asString();
		if(!wfInstanceDagNodeNodesNode["Result"].isNull())
			nodeObject.result = wfInstanceDagNodeNodesNode["Result"].asString();
		if(!wfInstanceDagNodeNodesNode["Attempt"].isNull())
			nodeObject.attempt = std::stoi(wfInstanceDagNodeNodesNode["Attempt"].asString());
		if(!wfInstanceDagNodeNodesNode["Status"].isNull())
			nodeObject.status = std::stoi(wfInstanceDagNodeNodesNode["Status"].asString());
		if(!wfInstanceDagNodeNodesNode["JobName"].isNull())
			nodeObject.jobName = wfInstanceDagNodeNodesNode["JobName"].asString();
		data_.wfInstanceDag.nodes.push_back(nodeObject);
	}
	auto allEdgesNode = wfInstanceDagNode["Edges"]["Edge"];
	for (auto wfInstanceDagNodeEdgesEdge : allEdgesNode)
	{
		Data::WfInstanceDag::Edge edgeObject;
		if(!wfInstanceDagNodeEdgesEdge["Source"].isNull())
			edgeObject.source = std::stol(wfInstanceDagNodeEdgesEdge["Source"].asString());
		if(!wfInstanceDagNodeEdgesEdge["Target"].isNull())
			edgeObject.target = std::stol(wfInstanceDagNodeEdgesEdge["Target"].asString());
		data_.wfInstanceDag.edges.push_back(edgeObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetWorkflowInstanceResult::getMessage()const
{
	return message_;
}

GetWorkflowInstanceResult::Data GetWorkflowInstanceResult::getData()const
{
	return data_;
}

int GetWorkflowInstanceResult::getCode()const
{
	return code_;
}

bool GetWorkflowInstanceResult::getSuccess()const
{
	return success_;
}

