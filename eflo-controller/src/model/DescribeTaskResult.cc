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

#include <alibabacloud/eflo-controller/model/DescribeTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

DescribeTaskResult::DescribeTaskResult() :
	ServiceResult()
{}

DescribeTaskResult::DescribeTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTaskResult::~DescribeTaskResult()
{}

void DescribeTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStepsNode = value["Steps"]["StepsItem"];
	for (auto valueStepsStepsItem : allStepsNode)
	{
		StepsItem stepsObject;
		if(!valueStepsStepsItem["StepName"].isNull())
			stepsObject.stepName = valueStepsStepsItem["StepName"].asString();
		if(!valueStepsStepsItem["StepState"].isNull())
			stepsObject.stepState = valueStepsStepsItem["StepState"].asString();
		if(!valueStepsStepsItem["StepType"].isNull())
			stepsObject.stepType = valueStepsStepsItem["StepType"].asString();
		if(!valueStepsStepsItem["StageTag"].isNull())
			stepsObject.stageTag = valueStepsStepsItem["StageTag"].asString();
		if(!valueStepsStepsItem["Message"].isNull())
			stepsObject.message = valueStepsStepsItem["Message"].asString();
		if(!valueStepsStepsItem["StartTime"].isNull())
			stepsObject.startTime = valueStepsStepsItem["StartTime"].asString();
		if(!valueStepsStepsItem["UpdateTime"].isNull())
			stepsObject.updateTime = valueStepsStepsItem["UpdateTime"].asString();
		auto allSubTasksNode = valueStepsStepsItem["SubTasks"]["SubTasksItem"];
		for (auto valueStepsStepsItemSubTasksSubTasksItem : allSubTasksNode)
		{
			StepsItem::SubTasksItem subTasksObject;
			if(!valueStepsStepsItemSubTasksSubTasksItem["TaskId"].isNull())
				subTasksObject.taskId = valueStepsStepsItemSubTasksSubTasksItem["TaskId"].asString();
			if(!valueStepsStepsItemSubTasksSubTasksItem["TaskType"].isNull())
				subTasksObject.taskType = valueStepsStepsItemSubTasksSubTasksItem["TaskType"].asString();
			if(!valueStepsStepsItemSubTasksSubTasksItem["CreateTime"].isNull())
				subTasksObject.createTime = valueStepsStepsItemSubTasksSubTasksItem["CreateTime"].asString();
			if(!valueStepsStepsItemSubTasksSubTasksItem["UpdateTime"].isNull())
				subTasksObject.updateTime = valueStepsStepsItemSubTasksSubTasksItem["UpdateTime"].asString();
			if(!valueStepsStepsItemSubTasksSubTasksItem["Message"].isNull())
				subTasksObject.message = valueStepsStepsItemSubTasksSubTasksItem["Message"].asString();
			if(!valueStepsStepsItemSubTasksSubTasksItem["TaskState"].isNull())
				subTasksObject.taskState = valueStepsStepsItemSubTasksSubTasksItem["TaskState"].asString();
			stepsObject.subTasks.push_back(subTasksObject);
		}
		steps_.push_back(stepsObject);
	}
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["TaskState"].isNull())
		taskState_ = value["TaskState"].asString();
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();

}

std::vector<DescribeTaskResult::StepsItem> DescribeTaskResult::getSteps()const
{
	return steps_;
}

std::string DescribeTaskResult::getMessage()const
{
	return message_;
}

std::string DescribeTaskResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeTaskResult::getTaskType()const
{
	return taskType_;
}

std::string DescribeTaskResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeTaskResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeTaskResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeTaskResult::getTaskState()const
{
	return taskState_;
}

