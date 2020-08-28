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

#include <alibabacloud/ehpc/model/ListTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListTasksResult::ListTasksResult() :
	ServiceResult()
{}

ListTasksResult::ListTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTasksResult::~ListTasksResult()
{}

void ListTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["TaskInfo"];
	for (auto valueTasksTaskInfo : allTasksNode)
	{
		TaskInfo tasksObject;
		if(!valueTasksTaskInfo["TaskId"].isNull())
			tasksObject.taskId = valueTasksTaskInfo["TaskId"].asString();
		if(!valueTasksTaskInfo["TaskType"].isNull())
			tasksObject.taskType = valueTasksTaskInfo["TaskType"].asString();
		if(!valueTasksTaskInfo["ClusterId"].isNull())
			tasksObject.clusterId = valueTasksTaskInfo["ClusterId"].asString();
		if(!valueTasksTaskInfo["Request"].isNull())
			tasksObject.request = valueTasksTaskInfo["Request"].asString();
		if(!valueTasksTaskInfo["Status"].isNull())
			tasksObject.status = valueTasksTaskInfo["Status"].asString();
		if(!valueTasksTaskInfo["CurrentStep"].isNull())
			tasksObject.currentStep = std::stoi(valueTasksTaskInfo["CurrentStep"].asString());
		if(!valueTasksTaskInfo["TotalSteps"].isNull())
			tasksObject.totalSteps = std::stoi(valueTasksTaskInfo["TotalSteps"].asString());
		if(!valueTasksTaskInfo["Result"].isNull())
			tasksObject.result = valueTasksTaskInfo["Result"].asString();
		if(!valueTasksTaskInfo["Errors"].isNull())
			tasksObject.errors = valueTasksTaskInfo["Errors"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTasksResult::TaskInfo> ListTasksResult::getTasks()const
{
	return tasks_;
}

int ListTasksResult::getPageSize()const
{
	return pageSize_;
}

int ListTasksResult::getPageNumber()const
{
	return pageNumber_;
}

