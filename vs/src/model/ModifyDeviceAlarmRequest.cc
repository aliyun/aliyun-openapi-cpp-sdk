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

#include <alibabacloud/vs/model/ModifyDeviceAlarmRequest.h>

using AlibabaCloud::Vs::Model::ModifyDeviceAlarmRequest;

ModifyDeviceAlarmRequest::ModifyDeviceAlarmRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyDeviceAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDeviceAlarmRequest::~ModifyDeviceAlarmRequest()
{}

std::string ModifyDeviceAlarmRequest::getId()const
{
	return id_;
}

void ModifyDeviceAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyDeviceAlarmRequest::getShowLog()const
{
	return showLog_;
}

void ModifyDeviceAlarmRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long ModifyDeviceAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDeviceAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDeviceAlarmRequest::getAlarmId()const
{
	return alarmId_;
}

void ModifyDeviceAlarmRequest::setAlarmId(const std::string& alarmId)
{
	alarmId_ = alarmId;
	setParameter("AlarmId", alarmId);
}

int ModifyDeviceAlarmRequest::getChannelId()const
{
	return channelId_;
}

void ModifyDeviceAlarmRequest::setChannelId(int channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", std::to_string(channelId));
}

int ModifyDeviceAlarmRequest::getStatus()const
{
	return status_;
}

void ModifyDeviceAlarmRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

