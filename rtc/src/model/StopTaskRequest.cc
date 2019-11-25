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

#include <alibabacloud/rtc/model/StopTaskRequest.h>

using AlibabaCloud::Rtc::Model::StopTaskRequest;

StopTaskRequest::StopTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StopTask")
{
	setMethod(HttpRequest::Method::Post);
}

StopTaskRequest::~StopTaskRequest()
{}

long StopTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StopTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StopTaskRequest::getAppId()const
{
	return appId_;
}

void StopTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string StopTaskRequest::getChannelId()const
{
	return channelId_;
}

void StopTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

long StopTaskRequest::getTaskId()const
{
	return taskId_;
}

void StopTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

