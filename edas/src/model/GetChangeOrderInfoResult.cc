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

#include <alibabacloud/edas/model/GetChangeOrderInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetChangeOrderInfoResult::GetChangeOrderInfoResult() :
	ServiceResult()
{}

GetChangeOrderInfoResult::GetChangeOrderInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChangeOrderInfoResult::~GetChangeOrderInfoResult()
{}

void GetChangeOrderInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto changeOrderInfoNode = value["changeOrderInfo"];
	if(!changeOrderInfoNode["Status"].isNull())
		changeOrderInfo_.status = std::stoi(changeOrderInfoNode["Status"].asString());
	if(!changeOrderInfoNode["ChangeOrderId"].isNull())
		changeOrderInfo_.changeOrderId = changeOrderInfoNode["ChangeOrderId"].asString();
	if(!changeOrderInfoNode["BatchType"].isNull())
		changeOrderInfo_.batchType = changeOrderInfoNode["BatchType"].asString();
	if(!changeOrderInfoNode["CoType"].isNull())
		changeOrderInfo_.coType = changeOrderInfoNode["CoType"].asString();
	if(!changeOrderInfoNode["CreateTime"].isNull())
		changeOrderInfo_.createTime = changeOrderInfoNode["CreateTime"].asString();
	if(!changeOrderInfoNode["ChangeOrderDescription"].isNull())
		changeOrderInfo_.changeOrderDescription = changeOrderInfoNode["ChangeOrderDescription"].asString();
	if(!changeOrderInfoNode["BatchCount"].isNull())
		changeOrderInfo_.batchCount = std::stoi(changeOrderInfoNode["BatchCount"].asString());
	if(!changeOrderInfoNode["CreateUserId"].isNull())
		changeOrderInfo_.createUserId = changeOrderInfoNode["CreateUserId"].asString();
	if(!changeOrderInfoNode["SupportRollback"].isNull())
		changeOrderInfo_.supportRollback = changeOrderInfoNode["SupportRollback"].asString() == "true";
	if(!changeOrderInfoNode["Desc"].isNull())
		changeOrderInfo_.desc = changeOrderInfoNode["Desc"].asString();
	auto allPipelineInfoListNode = changeOrderInfoNode["PipelineInfoList"]["PipelineInfo"];
	for (auto changeOrderInfoNodePipelineInfoListPipelineInfo : allPipelineInfoListNode)
	{
		ChangeOrderInfo::PipelineInfo pipelineInfoObject;
		if(!changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineName"].isNull())
			pipelineInfoObject.pipelineName = changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineName"].asString();
		if(!changeOrderInfoNodePipelineInfoListPipelineInfo["StartTime"].isNull())
			pipelineInfoObject.startTime = changeOrderInfoNodePipelineInfoListPipelineInfo["StartTime"].asString();
		if(!changeOrderInfoNodePipelineInfoListPipelineInfo["UpdateTime"].isNull())
			pipelineInfoObject.updateTime = changeOrderInfoNodePipelineInfoListPipelineInfo["UpdateTime"].asString();
		if(!changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineStatus"].isNull())
			pipelineInfoObject.pipelineStatus = std::stoi(changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineStatus"].asString());
		if(!changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineId"].isNull())
			pipelineInfoObject.pipelineId = changeOrderInfoNodePipelineInfoListPipelineInfo["PipelineId"].asString();
		auto allStageListNode = changeOrderInfoNodePipelineInfoListPipelineInfo["StageList"]["StageInfoDTO"];
		for (auto changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO : allStageListNode)
		{
			ChangeOrderInfo::PipelineInfo::StageInfoDTO stageListObject;
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["StageId"].isNull())
				stageListObject.stageId = changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["StageId"].asString();
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["Status"].isNull())
				stageListObject.status = std::stoi(changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["Status"].asString());
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["StageName"].isNull())
				stageListObject.stageName = changeOrderInfoNodePipelineInfoListPipelineInfoStageListStageInfoDTO["StageName"].asString();
			auto stageResultDTONode = value["StageResultDTO"];
			auto allInstanceDTOListNode = stageResultDTONode["InstanceDTOList"]["InstanceDTO"];
			for (auto stageResultDTONodeInstanceDTOListInstanceDTO : allInstanceDTOListNode)
			{
				ChangeOrderInfo::PipelineInfo::StageInfoDTO::StageResultDTO::InstanceDTO instanceDTOObject;
				if(!stageResultDTONodeInstanceDTOListInstanceDTO["Status"].isNull())
					instanceDTOObject.status = std::stoi(stageResultDTONodeInstanceDTOListInstanceDTO["Status"].asString());
				if(!stageResultDTONodeInstanceDTOListInstanceDTO["InstanceIp"].isNull())
					instanceDTOObject.instanceIp = stageResultDTONodeInstanceDTOListInstanceDTO["InstanceIp"].asString();
				if(!stageResultDTONodeInstanceDTOListInstanceDTO["PodName"].isNull())
					instanceDTOObject.podName = stageResultDTONodeInstanceDTOListInstanceDTO["PodName"].asString();
				if(!stageResultDTONodeInstanceDTOListInstanceDTO["InstanceName"].isNull())
					instanceDTOObject.instanceName = stageResultDTONodeInstanceDTOListInstanceDTO["InstanceName"].asString();
				if(!stageResultDTONodeInstanceDTOListInstanceDTO["PodStatus"].isNull())
					instanceDTOObject.podStatus = stageResultDTONodeInstanceDTOListInstanceDTO["PodStatus"].asString();
				auto allInstanceStageDTOListNode = stageResultDTONodeInstanceDTOListInstanceDTO["InstanceStageDTOList"]["InstanceStageDTO"];
				for (auto stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO : allInstanceStageDTOListNode)
				{
					ChangeOrderInfo::PipelineInfo::StageInfoDTO::StageResultDTO::InstanceDTO::InstanceStageDTO instanceStageDTOListObject;
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageId"].isNull())
						instanceStageDTOListObject.stageId = stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageId"].asString();
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["Status"].isNull())
						instanceStageDTOListObject.status = std::stoi(stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["Status"].asString());
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StartTime"].isNull())
						instanceStageDTOListObject.startTime = stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StartTime"].asString();
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageMessage"].isNull())
						instanceStageDTOListObject.stageMessage = stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageMessage"].asString();
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["FinishTime"].isNull())
						instanceStageDTOListObject.finishTime = stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["FinishTime"].asString();
					if(!stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageName"].isNull())
						instanceStageDTOListObject.stageName = stageResultDTONodeInstanceDTOListInstanceDTOInstanceStageDTOListInstanceStageDTO["StageName"].asString();
					instanceDTOObject.instanceStageDTOList.push_back(instanceStageDTOListObject);
				}
				stageListObject.stageResultDTO.instanceDTOList.push_back(instanceDTOObject);
			}
			auto serviceStageNode = stageResultDTONode["ServiceStage"];
			if(!serviceStageNode["StageId"].isNull())
				stageListObject.stageResultDTO.serviceStage.stageId = serviceStageNode["StageId"].asString();
			if(!serviceStageNode["Status"].isNull())
				stageListObject.stageResultDTO.serviceStage.status = std::stoi(serviceStageNode["Status"].asString());
			if(!serviceStageNode["Message"].isNull())
				stageListObject.stageResultDTO.serviceStage.message = serviceStageNode["Message"].asString();
			if(!serviceStageNode["StageName"].isNull())
				stageListObject.stageResultDTO.serviceStage.stageName = serviceStageNode["StageName"].asString();
			pipelineInfoObject.stageList.push_back(stageListObject);
		}
		auto allStageDetailListNode = changeOrderInfoNodePipelineInfoListPipelineInfo["StageDetailList"]["StageDetailDTO"];
		for (auto changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO : allStageDetailListNode)
		{
			ChangeOrderInfo::PipelineInfo::StageDetailDTO stageDetailListObject;
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageId"].isNull())
				stageDetailListObject.stageId = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageId"].asString();
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageStatus"].isNull())
				stageDetailListObject.stageStatus = std::stoi(changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageStatus"].asString());
			if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageName"].isNull())
				stageDetailListObject.stageName = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["StageName"].asString();
			auto allTaskListNode = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTO["TaskList"]["TaskInfoDTO"];
			for (auto changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO : allTaskListNode)
			{
				ChangeOrderInfo::PipelineInfo::StageDetailDTO::TaskInfoDTO taskListObject;
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorIgnorance"].isNull())
					taskListObject.taskErrorIgnorance = std::stoi(changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorIgnorance"].asString());
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["ShowManualIgnorance"].isNull())
					taskListObject.showManualIgnorance = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["ShowManualIgnorance"].asString() == "true";
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskStatus"].isNull())
					taskListObject.taskStatus = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskStatus"].asString();
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskMessage"].isNull())
					taskListObject.taskMessage = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskMessage"].asString();
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskName"].isNull())
					taskListObject.taskName = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskName"].asString();
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorCode"].isNull())
					taskListObject.taskErrorCode = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorCode"].asString();
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["RetryType"].isNull())
					taskListObject.retryType = std::stoi(changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["RetryType"].asString());
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskId"].isNull())
					taskListObject.taskId = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskId"].asString();
				if(!changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorMessage"].isNull())
					taskListObject.taskErrorMessage = changeOrderInfoNodePipelineInfoListPipelineInfoStageDetailListStageDetailDTOTaskListTaskInfoDTO["TaskErrorMessage"].asString();
				stageDetailListObject.taskList.push_back(taskListObject);
			}
			pipelineInfoObject.stageDetailList.push_back(stageDetailListObject);
		}
		changeOrderInfo_.pipelineInfoList.push_back(pipelineInfoObject);
	}
	auto trafficControlNode = changeOrderInfoNode["TrafficControl"];
	if(!trafficControlNode["Routes"].isNull())
		changeOrderInfo_.trafficControl.routes = trafficControlNode["Routes"].asString();
	if(!trafficControlNode["Rules"].isNull())
		changeOrderInfo_.trafficControl.rules = trafficControlNode["Rules"].asString();
	if(!trafficControlNode["Tips"].isNull())
		changeOrderInfo_.trafficControl.tips = trafficControlNode["Tips"].asString();
		auto allTargets = changeOrderInfoNode["Targets"]["Items"];
		for (auto value : allTargets)
			changeOrderInfo_.targets.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetChangeOrderInfoResult::getMessage()const
{
	return message_;
}

GetChangeOrderInfoResult::ChangeOrderInfo GetChangeOrderInfoResult::getChangeOrderInfo()const
{
	return changeOrderInfo_;
}

int GetChangeOrderInfoResult::getCode()const
{
	return code_;
}

