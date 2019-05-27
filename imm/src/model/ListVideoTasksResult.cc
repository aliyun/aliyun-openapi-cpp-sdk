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

#include <alibabacloud/imm/model/ListVideoTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListVideoTasksResult::ListVideoTasksResult() :
	ServiceResult()
{}

ListVideoTasksResult::ListVideoTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVideoTasksResult::~ListVideoTasksResult()
{}

void ListVideoTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["TasksItem"];
	for (auto value : allTasks)
	{
		TasksItem tasksObject;
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["TaskType"].isNull())
			tasksObject.taskType = value["TaskType"].asString();
		if(!value["Parameters"].isNull())
			tasksObject.parameters = value["Parameters"].asString();
		if(!value["Result"].isNull())
			tasksObject.result = value["Result"].asString();
		if(!value["StartTime"].isNull())
			tasksObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			tasksObject.endTime = value["EndTime"].asString();
		if(!value["ErrorMessage"].isNull())
			tasksObject.errorMessage = value["ErrorMessage"].asString();
		if(!value["NotifyEndpoint"].isNull())
			tasksObject.notifyEndpoint = value["NotifyEndpoint"].asString();
		if(!value["NotifyTopicName"].isNull())
			tasksObject.notifyTopicName = value["NotifyTopicName"].asString();
		if(!value["Progress"].isNull())
			tasksObject.progress = std::stoi(value["Progress"].asString());
		tasks_.push_back(tasksObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListVideoTasksResult::TasksItem> ListVideoTasksResult::getTasks()const
{
	return tasks_;
}

std::string ListVideoTasksResult::getNextMarker()const
{
	return nextMarker_;
}

