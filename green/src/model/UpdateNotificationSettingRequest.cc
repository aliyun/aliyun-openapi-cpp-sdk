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

#include <alibabacloud/green/model/UpdateNotificationSettingRequest.h>

using AlibabaCloud::Green::Model::UpdateNotificationSettingRequest;

UpdateNotificationSettingRequest::UpdateNotificationSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateNotificationSetting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNotificationSettingRequest::~UpdateNotificationSettingRequest()
{}

std::string UpdateNotificationSettingRequest::getRealtimeMessageList()const
{
	return realtimeMessageList_;
}

void UpdateNotificationSettingRequest::setRealtimeMessageList(const std::string& realtimeMessageList)
{
	realtimeMessageList_ = realtimeMessageList;
	setParameter("RealtimeMessageList", realtimeMessageList);
}

int UpdateNotificationSettingRequest::getScheduleMessageTime()const
{
	return scheduleMessageTime_;
}

void UpdateNotificationSettingRequest::setScheduleMessageTime(int scheduleMessageTime)
{
	scheduleMessageTime_ = scheduleMessageTime;
	setParameter("ScheduleMessageTime", std::to_string(scheduleMessageTime));
}

std::string UpdateNotificationSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateNotificationSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateNotificationSettingRequest::getReminderModeList()const
{
	return reminderModeList_;
}

void UpdateNotificationSettingRequest::setReminderModeList(const std::string& reminderModeList)
{
	reminderModeList_ = reminderModeList;
	setParameter("ReminderModeList", reminderModeList);
}

std::string UpdateNotificationSettingRequest::getLang()const
{
	return lang_;
}

void UpdateNotificationSettingRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int UpdateNotificationSettingRequest::getScheduleMessageTimeZone()const
{
	return scheduleMessageTimeZone_;
}

void UpdateNotificationSettingRequest::setScheduleMessageTimeZone(int scheduleMessageTimeZone)
{
	scheduleMessageTimeZone_ = scheduleMessageTimeZone;
	setParameter("ScheduleMessageTimeZone", std::to_string(scheduleMessageTimeZone));
}

