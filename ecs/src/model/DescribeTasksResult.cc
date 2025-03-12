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

#include <alibabacloud/ecs/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskSetNode = value["TaskSet"]["Task"];
	for (auto valueTaskSetTask : allTaskSetNode)
	{
		Task taskSetObject;
		if(!valueTaskSetTask["CreationTime"].isNull())
			taskSetObject.creationTime = valueTaskSetTask["CreationTime"].asString();
		if(!valueTaskSetTask["TaskStatus"].isNull())
			taskSetObject.taskStatus = valueTaskSetTask["TaskStatus"].asString();
		if(!valueTaskSetTask["FinishedTime"].isNull())
			taskSetObject.finishedTime = valueTaskSetTask["FinishedTime"].asString();
		if(!valueTaskSetTask["SupportCancel"].isNull())
			taskSetObject.supportCancel = valueTaskSetTask["SupportCancel"].asString();
		if(!valueTaskSetTask["TaskId"].isNull())
			taskSetObject.taskId = valueTaskSetTask["TaskId"].asString();
		if(!valueTaskSetTask["TaskAction"].isNull())
			taskSetObject.taskAction = valueTaskSetTask["TaskAction"].asString();
		if(!valueTaskSetTask["ResourceId"].isNull())
			taskSetObject.resourceId = valueTaskSetTask["ResourceId"].asString();
		if(!valueTaskSetTask["Source"].isNull())
			taskSetObject.source = valueTaskSetTask["Source"].asString();
		if(!valueTaskSetTask["FailedReason"].isNull())
			taskSetObject.failedReason = valueTaskSetTask["FailedReason"].asString();
		if(!valueTaskSetTask["TaskGroupId"].isNull())
			taskSetObject.taskGroupId = valueTaskSetTask["TaskGroupId"].asString();
		auto allResourceIds = value["ResourceIds"]["resourceId"];
		for (auto value : allResourceIds)
			taskSetObject.resourceIds.push_back(value.asString());
		taskSet_.push_back(taskSetObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTasksResult::Task> DescribeTasksResult::getTaskSet()const
{
	return taskSet_;
}

std::string DescribeTasksResult::getRegionId()const
{
	return regionId_;
}

