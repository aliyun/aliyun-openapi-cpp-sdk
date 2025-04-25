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

#include <alibabacloud/ess/model/DescribeScheduledTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScheduledTasksResult::DescribeScheduledTasksResult() :
	ServiceResult()
{}

DescribeScheduledTasksResult::DescribeScheduledTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScheduledTasksResult::~DescribeScheduledTasksResult()
{}

void DescribeScheduledTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScheduledTasksNode = value["ScheduledTasks"]["ScheduledTask"];
	for (auto valueScheduledTasksScheduledTask : allScheduledTasksNode)
	{
		ScheduledTask scheduledTasksObject;
		if(!valueScheduledTasksScheduledTask["TaskEnabled"].isNull())
			scheduledTasksObject.taskEnabled = valueScheduledTasksScheduledTask["TaskEnabled"].asString() == "true";
		if(!valueScheduledTasksScheduledTask["RecurrenceValue"].isNull())
			scheduledTasksObject.recurrenceValue = valueScheduledTasksScheduledTask["RecurrenceValue"].asString();
		if(!valueScheduledTasksScheduledTask["RecurrenceType"].isNull())
			scheduledTasksObject.recurrenceType = valueScheduledTasksScheduledTask["RecurrenceType"].asString();
		if(!valueScheduledTasksScheduledTask["MaxValue"].isNull())
			scheduledTasksObject.maxValue = std::stoi(valueScheduledTasksScheduledTask["MaxValue"].asString());
		if(!valueScheduledTasksScheduledTask["ScheduledTaskName"].isNull())
			scheduledTasksObject.scheduledTaskName = valueScheduledTasksScheduledTask["ScheduledTaskName"].asString();
		if(!valueScheduledTasksScheduledTask["RecurrenceEndTime"].isNull())
			scheduledTasksObject.recurrenceEndTime = valueScheduledTasksScheduledTask["RecurrenceEndTime"].asString();
		if(!valueScheduledTasksScheduledTask["DesiredCapacity"].isNull())
			scheduledTasksObject.desiredCapacity = std::stoi(valueScheduledTasksScheduledTask["DesiredCapacity"].asString());
		if(!valueScheduledTasksScheduledTask["ScheduledTaskId"].isNull())
			scheduledTasksObject.scheduledTaskId = valueScheduledTasksScheduledTask["ScheduledTaskId"].asString();
		if(!valueScheduledTasksScheduledTask["MinValue"].isNull())
			scheduledTasksObject.minValue = std::stoi(valueScheduledTasksScheduledTask["MinValue"].asString());
		if(!valueScheduledTasksScheduledTask["ScalingGroupId"].isNull())
			scheduledTasksObject.scalingGroupId = valueScheduledTasksScheduledTask["ScalingGroupId"].asString();
		if(!valueScheduledTasksScheduledTask["LaunchExpirationTime"].isNull())
			scheduledTasksObject.launchExpirationTime = std::stoi(valueScheduledTasksScheduledTask["LaunchExpirationTime"].asString());
		if(!valueScheduledTasksScheduledTask["Description"].isNull())
			scheduledTasksObject.description = valueScheduledTasksScheduledTask["Description"].asString();
		if(!valueScheduledTasksScheduledTask["ScheduledAction"].isNull())
			scheduledTasksObject.scheduledAction = valueScheduledTasksScheduledTask["ScheduledAction"].asString();
		if(!valueScheduledTasksScheduledTask["LaunchTime"].isNull())
			scheduledTasksObject.launchTime = valueScheduledTasksScheduledTask["LaunchTime"].asString();
		scheduledTasks_.push_back(scheduledTasksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeScheduledTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScheduledTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScheduledTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeScheduledTasksResult::ScheduledTask> DescribeScheduledTasksResult::getScheduledTasks()const
{
	return scheduledTasks_;
}

