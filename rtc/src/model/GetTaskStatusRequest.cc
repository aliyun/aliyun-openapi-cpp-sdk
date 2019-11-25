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

#include <alibabacloud/rtc/model/GetTaskStatusRequest.h>

using AlibabaCloud::Rtc::Model::GetTaskStatusRequest;

GetTaskStatusRequest::GetTaskStatusRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetTaskStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetTaskStatusRequest::~GetTaskStatusRequest()
{}

long GetTaskStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTaskStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetTaskStatusRequest::getAppId()const
{
	return appId_;
}

void GetTaskStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string GetTaskStatusRequest::getChannelId()const
{
	return channelId_;
}

void GetTaskStatusRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

long GetTaskStatusRequest::getTaskId()const
{
	return taskId_;
}

void GetTaskStatusRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

