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

#include <alibabacloud/vod/model/DescribeRefreshTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeRefreshTasksResult::DescribeRefreshTasksResult() :
	ServiceResult()
{}

DescribeRefreshTasksResult::DescribeRefreshTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRefreshTasksResult::~DescribeRefreshTasksResult()
{}

void DescribeRefreshTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Task tasksObject;
		if(!value["TaskId"].isNull())
			tasksObject.taskId = value["TaskId"].asString();
		if(!value["ObjectPath"].isNull())
			tasksObject.objectPath = value["ObjectPath"].asString();
		if(!value["Status"].isNull())
			tasksObject.status = value["Status"].asString();
		if(!value["Process"].isNull())
			tasksObject.process = value["Process"].asString();
		if(!value["ObjectType"].isNull())
			tasksObject.objectType = value["ObjectType"].asString();
		if(!value["CreationTime"].isNull())
			tasksObject.creationTime = value["CreationTime"].asString();
		if(!value["Description"].isNull())
			tasksObject.description = value["Description"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRefreshTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeRefreshTasksResult::Task> DescribeRefreshTasksResult::getTasks()const
{
	return tasks_;
}

int DescribeRefreshTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRefreshTasksResult::getPageNumber()const
{
	return pageNumber_;
}

