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

#include <alibabacloud/fnf/model/DescribeScheduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

DescribeScheduleResult::DescribeScheduleResult() :
	ServiceResult()
{}

DescribeScheduleResult::DescribeScheduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScheduleResult::~DescribeScheduleResult()
{}

void DescribeScheduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ScheduleId"].isNull())
		scheduleId_ = value["ScheduleId"].asString();
	if(!value["Payload"].isNull())
		payload_ = value["Payload"].asString();
	if(!value["ScheduleName"].isNull())
		scheduleName_ = value["ScheduleName"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["LastModifiedTime"].isNull())
		lastModifiedTime_ = value["LastModifiedTime"].asString();
	if(!value["CronExpression"].isNull())
		cronExpression_ = value["CronExpression"].asString();
	if(!value["Enable"].isNull())
		enable_ = value["Enable"].asString() == "true";

}

std::string DescribeScheduleResult::getDescription()const
{
	return description_;
}

std::string DescribeScheduleResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeScheduleResult::getLastModifiedTime()const
{
	return lastModifiedTime_;
}

bool DescribeScheduleResult::getEnable()const
{
	return enable_;
}

std::string DescribeScheduleResult::getPayload()const
{
	return payload_;
}

std::string DescribeScheduleResult::getCronExpression()const
{
	return cronExpression_;
}

std::string DescribeScheduleResult::getScheduleId()const
{
	return scheduleId_;
}

std::string DescribeScheduleResult::getScheduleName()const
{
	return scheduleName_;
}

