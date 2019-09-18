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

#include <alibabacloud/cms/model/TaskConfigListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

TaskConfigListResult::TaskConfigListResult() :
	ServiceResult()
{}

TaskConfigListResult::TaskConfigListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaskConfigListResult::~TaskConfigListResult()
{}

void TaskConfigListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskList = value["TaskList"]["NodeTaskConfig"];
	for (auto value : allTaskList)
	{
		NodeTaskConfig taskListObject;
		if(!value["Id"].isNull())
			taskListObject.id = std::stol(value["Id"].asString());
		if(!value["TaskName"].isNull())
			taskListObject.taskName = value["TaskName"].asString();
		if(!value["TaskType"].isNull())
			taskListObject.taskType = value["TaskType"].asString();
		if(!value["TaskScope"].isNull())
			taskListObject.taskScope = value["TaskScope"].asString();
		if(!value["Disabled"].isNull())
			taskListObject.disabled = value["Disabled"].asString() == "true";
		if(!value["GroupId"].isNull())
			taskListObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["GroupName"].isNull())
			taskListObject.groupName = value["GroupName"].asString();
		if(!value["JsonData"].isNull())
			taskListObject.jsonData = value["JsonData"].asString();
		if(!value["AlertConfig"].isNull())
			taskListObject.alertConfig = value["AlertConfig"].asString();
		auto allInstanceList = value["InstanceList"]["String"];
		for (auto value : allInstanceList)
			taskListObject.instanceList.push_back(value.asString());
		taskList_.push_back(taskListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageTotal"].isNull())
		pageTotal_ = std::stoi(value["PageTotal"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int TaskConfigListResult::getPageSize()const
{
	return pageSize_;
}

int TaskConfigListResult::getPageNumber()const
{
	return pageNumber_;
}

int TaskConfigListResult::getPageTotal()const
{
	return pageTotal_;
}

std::vector<TaskConfigListResult::NodeTaskConfig> TaskConfigListResult::getTaskList()const
{
	return taskList_;
}

int TaskConfigListResult::getTotal()const
{
	return total_;
}

int TaskConfigListResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaskConfigListResult::getErrorMessage()const
{
	return errorMessage_;
}

bool TaskConfigListResult::getSuccess()const
{
	return success_;
}

