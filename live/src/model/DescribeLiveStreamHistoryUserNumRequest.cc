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

#include <alibabacloud/live/model/DescribeLiveStreamHistoryUserNumRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamHistoryUserNumRequest;

DescribeLiveStreamHistoryUserNumRequest::DescribeLiveStreamHistoryUserNumRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamHistoryUserNum")
{}

DescribeLiveStreamHistoryUserNumRequest::~DescribeLiveStreamHistoryUserNumRequest()
{}

std::string DescribeLiveStreamHistoryUserNumRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamHistoryUserNumRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamHistoryUserNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamHistoryUserNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamHistoryUserNumRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamHistoryUserNumRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamHistoryUserNumRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamHistoryUserNumRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamHistoryUserNumRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamHistoryUserNumRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeLiveStreamHistoryUserNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamHistoryUserNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamHistoryUserNumRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamHistoryUserNumRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

