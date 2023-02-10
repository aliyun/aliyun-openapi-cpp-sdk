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

#include <alibabacloud/eas/model/ListBenchmarkTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListBenchmarkTaskResult::ListBenchmarkTaskResult() :
	ServiceResult()
{}

ListBenchmarkTaskResult::ListBenchmarkTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBenchmarkTaskResult::~ListBenchmarkTaskResult()
{}

void ListBenchmarkTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["TaskName"].isNull())
			tasksObject.taskName = valueTasksTask["TaskName"].asString();
		if(!valueTasksTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksTask["TaskId"].asString();
		if(!valueTasksTask["ServiceName"].isNull())
			tasksObject.serviceName = valueTasksTask["ServiceName"].asString();
		if(!valueTasksTask["Region"].isNull())
			tasksObject.region = valueTasksTask["Region"].asString();
		if(!valueTasksTask["AvailableAgent"].isNull())
			tasksObject.availableAgent = std::stol(valueTasksTask["AvailableAgent"].asString());
		if(!valueTasksTask["Status"].isNull())
			tasksObject.status = valueTasksTask["Status"].asString();
		if(!valueTasksTask["Message"].isNull())
			tasksObject.message = valueTasksTask["Message"].asString();
		if(!valueTasksTask["CreateTime"].isNull())
			tasksObject.createTime = valueTasksTask["CreateTime"].asString();
		if(!valueTasksTask["UpdateTime"].isNull())
			tasksObject.updateTime = valueTasksTask["UpdateTime"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListBenchmarkTaskResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListBenchmarkTaskResult::Task> ListBenchmarkTaskResult::getTasks()const
{
	return tasks_;
}

int ListBenchmarkTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListBenchmarkTaskResult::getPageNumber()const
{
	return pageNumber_;
}

