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

#include <alibabacloud/vod/model/DescribeVodRefreshTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodRefreshTasksResult::DescribeVodRefreshTasksResult() :
	ServiceResult()
{}

DescribeVodRefreshTasksResult::DescribeVodRefreshTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodRefreshTasksResult::~DescribeVodRefreshTasksResult()
{}

void DescribeVodRefreshTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["Task"];
	for (auto valueTasksTask : allTasksNode)
	{
		Task tasksObject;
		if(!valueTasksTask["Status"].isNull())
			tasksObject.status = valueTasksTask["Status"].asString();
		if(!valueTasksTask["CreationTime"].isNull())
			tasksObject.creationTime = valueTasksTask["CreationTime"].asString();
		if(!valueTasksTask["ObjectType"].isNull())
			tasksObject.objectType = valueTasksTask["ObjectType"].asString();
		if(!valueTasksTask["Process"].isNull())
			tasksObject.process = valueTasksTask["Process"].asString();
		if(!valueTasksTask["Description"].isNull())
			tasksObject.description = valueTasksTask["Description"].asString();
		if(!valueTasksTask["ObjectPath"].isNull())
			tasksObject.objectPath = valueTasksTask["ObjectPath"].asString();
		if(!valueTasksTask["TaskId"].isNull())
			tasksObject.taskId = valueTasksTask["TaskId"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeVodRefreshTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVodRefreshTasksResult::Task> DescribeVodRefreshTasksResult::getTasks()const
{
	return tasks_;
}

long DescribeVodRefreshTasksResult::getPageSize()const
{
	return pageSize_;
}

long DescribeVodRefreshTasksResult::getPageNumber()const
{
	return pageNumber_;
}

