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

#include <alibabacloud/devops-rdc/model/GetPipelineInstHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetPipelineInstHistoryResult::GetPipelineInstHistoryResult() :
	ServiceResult()
{}

GetPipelineInstHistoryResult::GetPipelineInstHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineInstHistoryResult::~GetPipelineInstHistoryResult()
{}

void GetPipelineInstHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDataListNode = dataNode["DataList"]["PipelineInst"];
	for (auto dataNodeDataListPipelineInst : allDataListNode)
	{
		Data::PipelineInst pipelineInstObject;
		if(!dataNodeDataListPipelineInst["Status"].isNull())
			pipelineInstObject.status = dataNodeDataListPipelineInst["Status"].asString();
		if(!dataNodeDataListPipelineInst["CreateTime"].isNull())
			pipelineInstObject.createTime = std::stol(dataNodeDataListPipelineInst["CreateTime"].asString());
		if(!dataNodeDataListPipelineInst["StatusName"].isNull())
			pipelineInstObject.statusName = dataNodeDataListPipelineInst["StatusName"].asString();
		if(!dataNodeDataListPipelineInst["TriggerMode"].isNull())
			pipelineInstObject.triggerMode = std::stoi(dataNodeDataListPipelineInst["TriggerMode"].asString());
		if(!dataNodeDataListPipelineInst["PipelineConfigId"].isNull())
			pipelineInstObject.pipelineConfigId = std::stoi(dataNodeDataListPipelineInst["PipelineConfigId"].asString());
		if(!dataNodeDataListPipelineInst["Deletion"].isNull())
			pipelineInstObject.deletion = dataNodeDataListPipelineInst["Deletion"].asString();
		if(!dataNodeDataListPipelineInst["Creator"].isNull())
			pipelineInstObject.creator = dataNodeDataListPipelineInst["Creator"].asString();
		if(!dataNodeDataListPipelineInst["InstNumber"].isNull())
			pipelineInstObject.instNumber = std::stoi(dataNodeDataListPipelineInst["InstNumber"].asString());
		if(!dataNodeDataListPipelineInst["Modifier"].isNull())
			pipelineInstObject.modifier = dataNodeDataListPipelineInst["Modifier"].asString();
		if(!dataNodeDataListPipelineInst["Packages"].isNull())
			pipelineInstObject.packages = dataNodeDataListPipelineInst["Packages"].asString();
		if(!dataNodeDataListPipelineInst["FlowInstId"].isNull())
			pipelineInstObject.flowInstId = std::stoi(dataNodeDataListPipelineInst["FlowInstId"].asString());
		if(!dataNodeDataListPipelineInst["PipelineId"].isNull())
			pipelineInstObject.pipelineId = std::stoi(dataNodeDataListPipelineInst["PipelineId"].asString());
		if(!dataNodeDataListPipelineInst["Id"].isNull())
			pipelineInstObject.id = std::stoi(dataNodeDataListPipelineInst["Id"].asString());
		if(!dataNodeDataListPipelineInst["ModifyTime"].isNull())
			pipelineInstObject.modifyTime = std::stol(dataNodeDataListPipelineInst["ModifyTime"].asString());
		auto flowInstanceNode = value["FlowInstance"];
		if(!flowInstanceNode["Status"].isNull())
			pipelineInstObject.flowInstance.status = flowInstanceNode["Status"].asString();
		if(!flowInstanceNode["Stages"].isNull())
			pipelineInstObject.flowInstance.stages = flowInstanceNode["Stages"].asString();
		if(!flowInstanceNode["CreateTime"].isNull())
			pipelineInstObject.flowInstance.createTime = std::stol(flowInstanceNode["CreateTime"].asString());
		if(!flowInstanceNode["StatusName"].isNull())
			pipelineInstObject.flowInstance.statusName = flowInstanceNode["StatusName"].asString();
		if(!flowInstanceNode["RunningStatus"].isNull())
			pipelineInstObject.flowInstance.runningStatus = flowInstanceNode["RunningStatus"].asString();
		if(!flowInstanceNode["Creator"].isNull())
			pipelineInstObject.flowInstance.creator = flowInstanceNode["Creator"].asString();
		if(!flowInstanceNode["StageTopo"].isNull())
			pipelineInstObject.flowInstance.stageTopo = flowInstanceNode["StageTopo"].asString();
		if(!flowInstanceNode["Modifier"].isNull())
			pipelineInstObject.flowInstance.modifier = flowInstanceNode["Modifier"].asString();
		if(!flowInstanceNode["AutoDrivenStatus"].isNull())
			pipelineInstObject.flowInstance.autoDrivenStatus = flowInstanceNode["AutoDrivenStatus"].asString() == "true";
		if(!flowInstanceNode["ResultStatus"].isNull())
			pipelineInstObject.flowInstance.resultStatus = flowInstanceNode["ResultStatus"].asString();
		if(!flowInstanceNode["Id"].isNull())
			pipelineInstObject.flowInstance.id = std::stoi(flowInstanceNode["Id"].asString());
		if(!flowInstanceNode["SystemCode"].isNull())
			pipelineInstObject.flowInstance.systemCode = flowInstanceNode["SystemCode"].asString();
		if(!flowInstanceNode["ModifyTime"].isNull())
			pipelineInstObject.flowInstance.modifyTime = std::stol(flowInstanceNode["ModifyTime"].asString());
		if(!flowInstanceNode["SystemId"].isNull())
			pipelineInstObject.flowInstance.systemId = flowInstanceNode["SystemId"].asString();
		auto allGroupsNode = flowInstanceNode["Groups"]["Group"];
		for (auto flowInstanceNodeGroupsGroup : allGroupsNode)
		{
			Data::PipelineInst::FlowInstance::Group groupObject;
			if(!flowInstanceNodeGroupsGroup["Status"].isNull())
				groupObject.status = flowInstanceNodeGroupsGroup["Status"].asString();
			if(!flowInstanceNodeGroupsGroup["CreateTime"].isNull())
				groupObject.createTime = std::stol(flowInstanceNodeGroupsGroup["CreateTime"].asString());
			if(!flowInstanceNodeGroupsGroup["DeleteStatus"].isNull())
				groupObject.deleteStatus = flowInstanceNodeGroupsGroup["DeleteStatus"].asString();
			if(!flowInstanceNodeGroupsGroup["IdExtent"].isNull())
				groupObject.idExtent = std::stoi(flowInstanceNodeGroupsGroup["IdExtent"].asString());
			if(!flowInstanceNodeGroupsGroup["Creator"].isNull())
				groupObject.creator = flowInstanceNodeGroupsGroup["Creator"].asString();
			if(!flowInstanceNodeGroupsGroup["EndTime"].isNull())
				groupObject.endTime = std::stol(flowInstanceNodeGroupsGroup["EndTime"].asString());
			if(!flowInstanceNodeGroupsGroup["StartTime"].isNull())
				groupObject.startTime = std::stol(flowInstanceNodeGroupsGroup["StartTime"].asString());
			if(!flowInstanceNodeGroupsGroup["Modifier"].isNull())
				groupObject.modifier = flowInstanceNodeGroupsGroup["Modifier"].asString();
			if(!flowInstanceNodeGroupsGroup["ResultStatus"].isNull())
				groupObject.resultStatus = flowInstanceNodeGroupsGroup["ResultStatus"].asString();
			if(!flowInstanceNodeGroupsGroup["FlowInstId"].isNull())
				groupObject.flowInstId = std::stoi(flowInstanceNodeGroupsGroup["FlowInstId"].asString());
			if(!flowInstanceNodeGroupsGroup["Name"].isNull())
				groupObject.name = flowInstanceNodeGroupsGroup["Name"].asString();
			if(!flowInstanceNodeGroupsGroup["Id"].isNull())
				groupObject.id = std::stoi(flowInstanceNodeGroupsGroup["Id"].asString());
			if(!flowInstanceNodeGroupsGroup["ModifyTime"].isNull())
				groupObject.modifyTime = std::stol(flowInstanceNodeGroupsGroup["ModifyTime"].asString());
			pipelineInstObject.flowInstance.groups.push_back(groupObject);
		}
		auto resultNode = flowInstanceNode["Result"];
		if(!resultNode["EnginePipelineNumber"].isNull())
			pipelineInstObject.flowInstance.result.enginePipelineNumber = std::stoi(resultNode["EnginePipelineNumber"].asString());
		if(!resultNode["MixFlowInstId"].isNull())
			pipelineInstObject.flowInstance.result.mixFlowInstId = resultNode["MixFlowInstId"].asString();
		if(!resultNode["EnginePipelineName"].isNull())
			pipelineInstObject.flowInstance.result.enginePipelineName = resultNode["EnginePipelineName"].asString();
		if(!resultNode["EnginePipelineId"].isNull())
			pipelineInstObject.flowInstance.result.enginePipelineId = std::stoi(resultNode["EnginePipelineId"].asString());
		if(!resultNode["EnginePipelineInstId"].isNull())
			pipelineInstObject.flowInstance.result.enginePipelineInstId = std::stoi(resultNode["EnginePipelineInstId"].asString());
		if(!resultNode["TimeStamp"].isNull())
			pipelineInstObject.flowInstance.result.timeStamp = resultNode["TimeStamp"].asString();
		if(!resultNode["TriggerMode"].isNull())
			pipelineInstObject.flowInstance.result.triggerMode = resultNode["TriggerMode"].asString();
		if(!resultNode["Sources"].isNull())
			pipelineInstObject.flowInstance.result.sources = resultNode["Sources"].asString();
		if(!resultNode["Caches"].isNull())
			pipelineInstObject.flowInstance.result.caches = resultNode["Caches"].asString();
		if(!resultNode["DateTime"].isNull())
			pipelineInstObject.flowInstance.result.dateTime = resultNode["DateTime"].asString();
		data_.dataList.push_back(pipelineInstObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetPipelineInstHistoryResult::Data GetPipelineInstHistoryResult::getData()const
{
	return data_;
}

std::string GetPipelineInstHistoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineInstHistoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineInstHistoryResult::getSuccess()const
{
	return success_;
}

