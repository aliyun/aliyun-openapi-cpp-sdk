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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allScheduledTasks = value["ScheduledTasks"]["ScheduledTask"];
	for (auto value : allScheduledTasks)
	{
		ScheduledTask scheduledTasksObject;
		if(!value["ScheduledTaskId"].isNull())
			scheduledTasksObject.scheduledTaskId = value["ScheduledTaskId"].asString();
		if(!value["ScheduledTaskName"].isNull())
			scheduledTasksObject.scheduledTaskName = value["ScheduledTaskName"].asString();
		if(!value["Description"].isNull())
			scheduledTasksObject.description = value["Description"].asString();
		if(!value["ScheduledAction"].isNull())
			scheduledTasksObject.scheduledAction = value["ScheduledAction"].asString();
		if(!value["RecurrenceEndTime"].isNull())
			scheduledTasksObject.recurrenceEndTime = value["RecurrenceEndTime"].asString();
		if(!value["LaunchTime"].isNull())
			scheduledTasksObject.launchTime = value["LaunchTime"].asString();
		if(!value["RecurrenceType"].isNull())
			scheduledTasksObject.recurrenceType = value["RecurrenceType"].asString();
		if(!value["RecurrenceValue"].isNull())
			scheduledTasksObject.recurrenceValue = value["RecurrenceValue"].asString();
		if(!value["LaunchExpirationTime"].isNull())
			scheduledTasksObject.launchExpirationTime = std::stoi(value["LaunchExpirationTime"].asString());
		if(!value["TaskEnabled"].isNull())
			scheduledTasksObject.taskEnabled = value["TaskEnabled"].asString() == "true";
		if(!value["MaxValue"].isNull())
			scheduledTasksObject.maxValue = std::stoi(value["MaxValue"].asString());
		if(!value["MinValue"].isNull())
			scheduledTasksObject.minValue = std::stoi(value["MinValue"].asString());
		scheduledTasks_.push_back(scheduledTasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

