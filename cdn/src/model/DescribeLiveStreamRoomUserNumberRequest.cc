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

#include <alibabacloud/cdn/model/DescribeLiveStreamRoomUserNumberRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRoomUserNumberRequest;

DescribeLiveStreamRoomUserNumberRequest::DescribeLiveStreamRoomUserNumberRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRoomUserNumber")
{}

DescribeLiveStreamRoomUserNumberRequest::~DescribeLiveStreamRoomUserNumberRequest()
{}

std::string DescribeLiveStreamRoomUserNumberRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamRoomUserNumberRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRoomUserNumberRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getHlsSwitch()const
{
	return hlsSwitch_;
}

void DescribeLiveStreamRoomUserNumberRequest::setHlsSwitch(const std::string& hlsSwitch)
{
	hlsSwitch_ = hlsSwitch;
	setParameter("HlsSwitch", hlsSwitch);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamRoomUserNumberRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamRoomUserNumberRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamRoomUserNumberRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamRoomUserNumberRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRoomUserNumberRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRoomUserNumberRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamRoomUserNumberRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamRoomUserNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamRoomUserNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

