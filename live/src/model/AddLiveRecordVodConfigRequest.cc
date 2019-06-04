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

#include <alibabacloud/live/model/AddLiveRecordVodConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveRecordVodConfigRequest;

AddLiveRecordVodConfigRequest::AddLiveRecordVodConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveRecordVodConfig")
{}

AddLiveRecordVodConfigRequest::~AddLiveRecordVodConfigRequest()
{}

std::string AddLiveRecordVodConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveRecordVodConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string AddLiveRecordVodConfigRequest::getAutoCompose()const
{
	return autoCompose_;
}

void AddLiveRecordVodConfigRequest::setAutoCompose(const std::string& autoCompose)
{
	autoCompose_ = autoCompose;
	setCoreParameter("AutoCompose", autoCompose);
}

std::string AddLiveRecordVodConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveRecordVodConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int AddLiveRecordVodConfigRequest::getCycleDuration()const
{
	return cycleDuration_;
}

void AddLiveRecordVodConfigRequest::setCycleDuration(int cycleDuration)
{
	cycleDuration_ = cycleDuration;
	setCoreParameter("CycleDuration", std::to_string(cycleDuration));
}

long AddLiveRecordVodConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveRecordVodConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveRecordVodConfigRequest::getComposeVodTranscodeGroupId()const
{
	return composeVodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setComposeVodTranscodeGroupId(const std::string& composeVodTranscodeGroupId)
{
	composeVodTranscodeGroupId_ = composeVodTranscodeGroupId;
	setCoreParameter("ComposeVodTranscodeGroupId", composeVodTranscodeGroupId);
}

std::string AddLiveRecordVodConfigRequest::getStreamName()const
{
	return streamName_;
}

void AddLiveRecordVodConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

std::string AddLiveRecordVodConfigRequest::getVodTranscodeGroupId()const
{
	return vodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setVodTranscodeGroupId(const std::string& vodTranscodeGroupId)
{
	vodTranscodeGroupId_ = vodTranscodeGroupId;
	setCoreParameter("VodTranscodeGroupId", vodTranscodeGroupId);
}

