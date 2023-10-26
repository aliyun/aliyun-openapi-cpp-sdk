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

#include <alibabacloud/fnf/model/ListSchedulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

ListSchedulesResult::ListSchedulesResult() :
	ServiceResult()
{}

ListSchedulesResult::ListSchedulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSchedulesResult::~ListSchedulesResult()
{}

void ListSchedulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchedulesNode = value["Schedules"]["SchedulesItem"];
	for (auto valueSchedulesSchedulesItem : allSchedulesNode)
	{
		SchedulesItem schedulesObject;
		if(!valueSchedulesSchedulesItem["Description"].isNull())
			schedulesObject.description = valueSchedulesSchedulesItem["Description"].asString();
		if(!valueSchedulesSchedulesItem["ScheduleId"].isNull())
			schedulesObject.scheduleId = valueSchedulesSchedulesItem["ScheduleId"].asString();
		if(!valueSchedulesSchedulesItem["Payload"].isNull())
			schedulesObject.payload = valueSchedulesSchedulesItem["Payload"].asString();
		if(!valueSchedulesSchedulesItem["ScheduleName"].isNull())
			schedulesObject.scheduleName = valueSchedulesSchedulesItem["ScheduleName"].asString();
		if(!valueSchedulesSchedulesItem["CreatedTime"].isNull())
			schedulesObject.createdTime = valueSchedulesSchedulesItem["CreatedTime"].asString();
		if(!valueSchedulesSchedulesItem["LastModifiedTime"].isNull())
			schedulesObject.lastModifiedTime = valueSchedulesSchedulesItem["LastModifiedTime"].asString();
		if(!valueSchedulesSchedulesItem["CronExpression"].isNull())
			schedulesObject.cronExpression = valueSchedulesSchedulesItem["CronExpression"].asString();
		if(!valueSchedulesSchedulesItem["Enable"].isNull())
			schedulesObject.enable = valueSchedulesSchedulesItem["Enable"].asString() == "true";
		schedules_.push_back(schedulesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListSchedulesResult::SchedulesItem> ListSchedulesResult::getSchedules()const
{
	return schedules_;
}

std::string ListSchedulesResult::getNextToken()const
{
	return nextToken_;
}

