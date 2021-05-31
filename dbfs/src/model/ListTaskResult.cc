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

#include <alibabacloud/dbfs/model/ListTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListTaskResult::ListTaskResult() :
	ServiceResult()
{}

ListTaskResult::ListTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskResult::~ListTaskResult()
{}

void ListTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["TasksItem"];
	for (auto valueTasksTasksItem : allTasksNode)
	{
		TasksItem tasksObject;
		if(!valueTasksTasksItem["Id"].isNull())
			tasksObject.id = std::stoi(valueTasksTasksItem["Id"].asString());
		if(!valueTasksTasksItem["TaskName"].isNull())
			tasksObject.taskName = valueTasksTasksItem["TaskName"].asString();
		if(!valueTasksTasksItem["TaskType"].isNull())
			tasksObject.taskType = valueTasksTasksItem["TaskType"].asString();
		if(!valueTasksTasksItem["TaskOwner"].isNull())
			tasksObject.taskOwner = valueTasksTasksItem["TaskOwner"].asString();
		if(!valueTasksTasksItem["TaskAdder"].isNull())
			tasksObject.taskAdder = valueTasksTasksItem["TaskAdder"].asString();
		if(!valueTasksTasksItem["TaskRunner"].isNull())
			tasksObject.taskRunner = valueTasksTasksItem["TaskRunner"].asString();
		if(!valueTasksTasksItem["TaskProgress"].isNull())
			tasksObject.taskProgress = std::stoi(valueTasksTasksItem["TaskProgress"].asString());
		if(!valueTasksTasksItem["TaskProgressDescription"].isNull())
			tasksObject.taskProgressDescription = valueTasksTasksItem["TaskProgressDescription"].asString();
		if(!valueTasksTasksItem["TaskStatus"].isNull())
			tasksObject.taskStatus = valueTasksTasksItem["TaskStatus"].asString();
		if(!valueTasksTasksItem["ClientToken"].isNull())
			tasksObject.clientToken = valueTasksTasksItem["ClientToken"].asString();
		if(!valueTasksTasksItem["CreatedTime"].isNull())
			tasksObject.createdTime = valueTasksTasksItem["CreatedTime"].asString();
		if(!valueTasksTasksItem["CompletionTime"].isNull())
			tasksObject.completionTime = valueTasksTasksItem["CompletionTime"].asString();
		if(!valueTasksTasksItem["Priority"].isNull())
			tasksObject.priority = valueTasksTasksItem["Priority"].asString();
		if(!valueTasksTasksItem["MaxRetry"].isNull())
			tasksObject.maxRetry = std::stoi(valueTasksTasksItem["MaxRetry"].asString());
		if(!valueTasksTasksItem["NextExecutionTime"].isNull())
			tasksObject.nextExecutionTime = valueTasksTasksItem["NextExecutionTime"].asString();
		if(!valueTasksTasksItem["TaskExecutionCounts"].isNull())
			tasksObject.taskExecutionCounts = std::stoi(valueTasksTasksItem["TaskExecutionCounts"].asString());
		if(!valueTasksTasksItem["TaskErrorReason"].isNull())
			tasksObject.taskErrorReason = valueTasksTasksItem["TaskErrorReason"].asString();
		if(!valueTasksTasksItem["TaskStatusCode"].isNull())
			tasksObject.taskStatusCode = std::stoi(valueTasksTasksItem["TaskStatusCode"].asString());
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListTaskResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTaskResult::TasksItem> ListTaskResult::getTasks()const
{
	return tasks_;
}

int ListTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListTaskResult::getPageNumber()const
{
	return pageNumber_;
}

