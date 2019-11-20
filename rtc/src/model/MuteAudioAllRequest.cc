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

#include <alibabacloud/rtc/model/MuteAudioAllRequest.h>

using AlibabaCloud::Rtc::Model::MuteAudioAllRequest;

MuteAudioAllRequest::MuteAudioAllRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "MuteAudioAll")
{
	setMethod(HttpRequest::Method::Post);
}

MuteAudioAllRequest::~MuteAudioAllRequest()
{}

std::string MuteAudioAllRequest::getConferenceId()const
{
	return conferenceId_;
}

void MuteAudioAllRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setCoreParameter("ConferenceId", conferenceId);
}

long MuteAudioAllRequest::getOwnerId()const
{
	return ownerId_;
}

void MuteAudioAllRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string MuteAudioAllRequest::getParticipantId()const
{
	return participantId_;
}

void MuteAudioAllRequest::setParticipantId(const std::string& participantId)
{
	participantId_ = participantId;
	setCoreParameter("ParticipantId", participantId);
}

std::string MuteAudioAllRequest::getAppId()const
{
	return appId_;
}

void MuteAudioAllRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

