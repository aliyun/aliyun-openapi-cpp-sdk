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

#include <alibabacloud/rtc/model/StartTaskRequest.h>

using AlibabaCloud::Rtc::Model::StartTaskRequest;

StartTaskRequest::StartTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StartTask")
{}

StartTaskRequest::~StartTaskRequest()
{}

std::vector<StartTaskRequest::MixPanes> StartTaskRequest::getMixPanes()const
{
	return mixPanes_;
}

void StartTaskRequest::setMixPanes(const std::vector<MixPanes>& mixPanes)
{
	mixPanes_ = mixPanes;
	int i = 0;
	for(int i = 0; i!= mixPanes.size(); i++)	{
		auto obj = mixPanes.at(i);
		std::string str ="MixPanes."+ std::to_string(i);
		setCoreParameter(str + ".PaneId", std::to_string(obj.paneId));
		setCoreParameter(str + ".UserId", obj.userId);
		setCoreParameter(str + ".SourceType", obj.sourceType);
	}
}

std::string StartTaskRequest::getIdempotentId()const
{
	return idempotentId_;
}

void StartTaskRequest::setIdempotentId(const std::string& idempotentId)
{
	idempotentId_ = idempotentId;
	setCoreParameter("IdempotentId", idempotentId);
}

long StartTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long StartTaskRequest::getTemplateId()const
{
	return templateId_;
}

void StartTaskRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setCoreParameter("TemplateId", std::to_string(templateId));
}

std::string StartTaskRequest::getAppId()const
{
	return appId_;
}

void StartTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string StartTaskRequest::getChannelId()const
{
	return channelId_;
}

void StartTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

