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

#include <alibabacloud/vs/model/CreateDeviceAlarmRequest.h>

using AlibabaCloud::Vs::Model::CreateDeviceAlarmRequest;

CreateDeviceAlarmRequest::CreateDeviceAlarmRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateDeviceAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeviceAlarmRequest::~CreateDeviceAlarmRequest()
{}

long CreateDeviceAlarmRequest::getStartTime()const
{
	return startTime_;
}

void CreateDeviceAlarmRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int CreateDeviceAlarmRequest::getAlarm()const
{
	return alarm_;
}

void CreateDeviceAlarmRequest::setAlarm(int alarm)
{
	alarm_ = alarm;
	setParameter("Alarm", std::to_string(alarm));
}

std::string CreateDeviceAlarmRequest::getId()const
{
	return id_;
}

void CreateDeviceAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

int CreateDeviceAlarmRequest::getObjectType()const
{
	return objectType_;
}

void CreateDeviceAlarmRequest::setObjectType(int objectType)
{
	objectType_ = objectType;
	setParameter("ObjectType", std::to_string(objectType));
}

std::string CreateDeviceAlarmRequest::getShowLog()const
{
	return showLog_;
}

void CreateDeviceAlarmRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long CreateDeviceAlarmRequest::getEndTime()const
{
	return endTime_;
}

void CreateDeviceAlarmRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long CreateDeviceAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDeviceAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateDeviceAlarmRequest::getSubAlarm()const
{
	return subAlarm_;
}

void CreateDeviceAlarmRequest::setSubAlarm(int subAlarm)
{
	subAlarm_ = subAlarm;
	setParameter("SubAlarm", std::to_string(subAlarm));
}

long CreateDeviceAlarmRequest::getExpire()const
{
	return expire_;
}

void CreateDeviceAlarmRequest::setExpire(long expire)
{
	expire_ = expire;
	setParameter("Expire", std::to_string(expire));
}

int CreateDeviceAlarmRequest::getChannelId()const
{
	return channelId_;
}

void CreateDeviceAlarmRequest::setChannelId(int channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", std::to_string(channelId));
}

