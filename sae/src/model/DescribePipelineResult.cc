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

#include <alibabacloud/sae/model/DescribePipelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribePipelineResult::DescribePipelineResult() :
	ServiceResult()
{}

DescribePipelineResult::DescribePipelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePipelineResult::~DescribePipelineResult()
{}

void DescribePipelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ShowBatch"].isNull())
		data_.showBatch = dataNode["ShowBatch"].asString() == "true";
	if(!dataNode["PipelineStatus"].isNull())
		data_.pipelineStatus = std::stoi(dataNode["PipelineStatus"].asString());
	if(!dataNode["CurrentPoint"].isNull())
		data_.currentPoint = std::stoi(dataNode["CurrentPoint"].asString());
	if(!dataNode["CurrentStageId"].isNull())
		data_.currentStageId = dataNode["CurrentStageId"].asString();
	if(!dataNode["PipelineName"].isNull())
		data_.pipelineName = dataNode["PipelineName"].asString();
	if(!dataNode["NextPipelineId"].isNull())
		data_.nextPipelineId = dataNode["NextPipelineId"].asString();
	if(!dataNode["PipelineId"].isNull())
		data_.pipelineId = dataNode["PipelineId"].asString();
	if(!dataNode["CoStatus"].isNull())
		data_.coStatus = dataNode["CoStatus"].asString();
	auto allStageListNode = dataNode["StageList"]["Stage"];
	for (auto dataNodeStageListStage : allStageListNode)
	{
		Data::Stage stageObject;
		if(!dataNodeStageListStage["Status"].isNull())
			stageObject.status = std::stoi(dataNodeStageListStage["Status"].asString());
		if(!dataNodeStageListStage["StageId"].isNull())
			stageObject.stageId = dataNodeStageListStage["StageId"].asString();
		if(!dataNodeStageListStage["ExecutorType"].isNull())
			stageObject.executorType = std::stoi(dataNodeStageListStage["ExecutorType"].asString());
		if(!dataNodeStageListStage["StageName"].isNull())
			stageObject.stageName = dataNodeStageListStage["StageName"].asString();
		auto allTaskListNode = dataNodeStageListStage["TaskList"]["Task"];
		for (auto dataNodeStageListStageTaskListTask : allTaskListNode)
		{
			Data::Stage::Task taskListObject;
			if(!dataNodeStageListStageTaskListTask["Status"].isNull())
				taskListObject.status = std::stoi(dataNodeStageListStageTaskListTask["Status"].asString());
			if(!dataNodeStageListStageTaskListTask["StageId"].isNull())
				taskListObject.stageId = dataNodeStageListStageTaskListTask["StageId"].asString();
			if(!dataNodeStageListStageTaskListTask["ErrorMessage"].isNull())
				taskListObject.errorMessage = dataNodeStageListStageTaskListTask["ErrorMessage"].asString();
			if(!dataNodeStageListStageTaskListTask["ErrorCode"].isNull())
				taskListObject.errorCode = dataNodeStageListStageTaskListTask["ErrorCode"].asString();
			if(!dataNodeStageListStageTaskListTask["TaskName"].isNull())
				taskListObject.taskName = dataNodeStageListStageTaskListTask["TaskName"].asString();
			if(!dataNodeStageListStageTaskListTask["ErrorIgnore"].isNull())
				taskListObject.errorIgnore = std::stoi(dataNodeStageListStageTaskListTask["ErrorIgnore"].asString());
			if(!dataNodeStageListStageTaskListTask["Message"].isNull())
				taskListObject.message = dataNodeStageListStageTaskListTask["Message"].asString();
			if(!dataNodeStageListStageTaskListTask["ShowManualIgnore"].isNull())
				taskListObject.showManualIgnore = dataNodeStageListStageTaskListTask["ShowManualIgnore"].asString() == "true";
			if(!dataNodeStageListStageTaskListTask["TaskId"].isNull())
				taskListObject.taskId = dataNodeStageListStageTaskListTask["TaskId"].asString();
			if(!dataNodeStageListStageTaskListTask["CreateTime"].isNull())
				taskListObject.createTime = std::stol(dataNodeStageListStageTaskListTask["CreateTime"].asString());
			if(!dataNodeStageListStageTaskListTask["StartTime"].isNull())
				taskListObject.startTime = std::stol(dataNodeStageListStageTaskListTask["StartTime"].asString());
			if(!dataNodeStageListStageTaskListTask["UpdateTime"].isNull())
				taskListObject.updateTime = std::stol(dataNodeStageListStageTaskListTask["UpdateTime"].asString());
			stageObject.taskList.push_back(taskListObject);
		}
		data_.stageList.push_back(stageObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePipelineResult::getMessage()const
{
	return message_;
}

std::string DescribePipelineResult::getTraceId()const
{
	return traceId_;
}

DescribePipelineResult::Data DescribePipelineResult::getData()const
{
	return data_;
}

std::string DescribePipelineResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribePipelineResult::getCode()const
{
	return code_;
}

bool DescribePipelineResult::getSuccess()const
{
	return success_;
}

