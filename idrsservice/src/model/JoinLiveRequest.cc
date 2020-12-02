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

#include <alibabacloud/idrsservice/model/JoinLiveRequest.h>

using AlibabaCloud::Idrsservice::Model::JoinLiveRequest;

JoinLiveRequest::JoinLiveRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "JoinLive")
{
	setMethod(HttpRequest::Method::Post);
}

JoinLiveRequest::~JoinLiveRequest()
{}

std::string JoinLiveRequest::getChannel()const
{
	return channel_;
}

void JoinLiveRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string JoinLiveRequest::getUserId()const
{
	return userId_;
}

void JoinLiveRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string JoinLiveRequest::getRtcCode()const
{
	return rtcCode_;
}

void JoinLiveRequest::setRtcCode(const std::string& rtcCode)
{
	rtcCode_ = rtcCode;
	setParameter("RtcCode", rtcCode);
}

