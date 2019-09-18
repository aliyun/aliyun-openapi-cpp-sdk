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

#include <alibabacloud/green/model/DescribeNotificationSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeNotificationSettingResult::DescribeNotificationSettingResult() :
	ServiceResult()
{}

DescribeNotificationSettingResult::DescribeNotificationSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNotificationSettingResult::~DescribeNotificationSettingResult()
{}

void DescribeNotificationSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRealtimeMessageList = value["RealtimeMessageList"]["StringItem"];
	for (const auto &item : allRealtimeMessageList)
		realtimeMessageList_.push_back(item.asString());
	auto allReminderModeList = value["ReminderModeList"]["StringItem"];
	for (const auto &item : allReminderModeList)
		reminderModeList_.push_back(item.asString());
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["Phone"].isNull())
		phone_ = value["Phone"].asString();
	if(!value["ScheduleMessageTime"].isNull())
		scheduleMessageTime_ = std::stoi(value["ScheduleMessageTime"].asString());
	if(!value["ScheduleMessageTimeZone"].isNull())
		scheduleMessageTimeZone_ = std::stoi(value["ScheduleMessageTimeZone"].asString());

}

std::string DescribeNotificationSettingResult::getEmail()const
{
	return email_;
}

std::string DescribeNotificationSettingResult::getPhone()const
{
	return phone_;
}

int DescribeNotificationSettingResult::getScheduleMessageTime()const
{
	return scheduleMessageTime_;
}

int DescribeNotificationSettingResult::getScheduleMessageTimeZone()const
{
	return scheduleMessageTimeZone_;
}

std::vector<std::string> DescribeNotificationSettingResult::getReminderModeList()const
{
	return reminderModeList_;
}

std::vector<std::string> DescribeNotificationSettingResult::getRealtimeMessageList()const
{
	return realtimeMessageList_;
}

