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

#include <alibabacloud/cdn/model/DescribeLiveStreamOnlineUserNumRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamOnlineUserNumRequest;

DescribeLiveStreamOnlineUserNumRequest::DescribeLiveStreamOnlineUserNumRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamOnlineUserNum")
{}

DescribeLiveStreamOnlineUserNumRequest::~DescribeLiveStreamOnlineUserNumRequest()
{}

std::string DescribeLiveStreamOnlineUserNumRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamOnlineUserNumRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamOnlineUserNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getHlsSwitch()const
{
	return hlsSwitch_;
}

void DescribeLiveStreamOnlineUserNumRequest::setHlsSwitch(const std::string& hlsSwitch)
{
	hlsSwitch_ = hlsSwitch;
	setCoreParameter("HlsSwitch", hlsSwitch);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamOnlineUserNumRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamOnlineUserNumRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamOnlineUserNumRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeLiveStreamOnlineUserNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamOnlineUserNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveStreamOnlineUserNumRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamOnlineUserNumRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

