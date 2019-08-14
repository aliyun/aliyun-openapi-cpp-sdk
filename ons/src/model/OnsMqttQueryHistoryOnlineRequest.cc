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

#include <alibabacloud/ons/model/OnsMqttQueryHistoryOnlineRequest.h>

using AlibabaCloud::Ons::Model::OnsMqttQueryHistoryOnlineRequest;

OnsMqttQueryHistoryOnlineRequest::OnsMqttQueryHistoryOnlineRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMqttQueryHistoryOnline")
{}

OnsMqttQueryHistoryOnlineRequest::~OnsMqttQueryHistoryOnlineRequest()
{}

std::string OnsMqttQueryHistoryOnlineRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMqttQueryHistoryOnlineRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsMqttQueryHistoryOnlineRequest::getGroupId()const
{
	return groupId_;
}

void OnsMqttQueryHistoryOnlineRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long OnsMqttQueryHistoryOnlineRequest::getEndTime()const
{
	return endTime_;
}

void OnsMqttQueryHistoryOnlineRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long OnsMqttQueryHistoryOnlineRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsMqttQueryHistoryOnlineRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setCoreParameter("BeginTime", std::to_string(beginTime));
}

