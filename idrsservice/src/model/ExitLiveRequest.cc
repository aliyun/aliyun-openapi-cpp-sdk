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

#include <alibabacloud/idrsservice/model/ExitLiveRequest.h>

using AlibabaCloud::Idrsservice::Model::ExitLiveRequest;

ExitLiveRequest::ExitLiveRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "ExitLive")
{
	setMethod(HttpRequest::Method::Post);
}

ExitLiveRequest::~ExitLiveRequest()
{}

std::string ExitLiveRequest::getChannel()const
{
	return channel_;
}

void ExitLiveRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string ExitLiveRequest::getUserId()const
{
	return userId_;
}

void ExitLiveRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string ExitLiveRequest::getRtcCode()const
{
	return rtcCode_;
}

void ExitLiveRequest::setRtcCode(const std::string& rtcCode)
{
	rtcCode_ = rtcCode;
	setParameter("RtcCode", rtcCode);
}

