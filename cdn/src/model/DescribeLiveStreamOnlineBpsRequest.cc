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

#include <alibabacloud/cdn/model/DescribeLiveStreamOnlineBpsRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamOnlineBpsRequest::DescribeLiveStreamOnlineBpsRequest() :
	CdnRequest("DescribeLiveStreamOnlineBps")
{}

DescribeLiveStreamOnlineBpsRequest::~DescribeLiveStreamOnlineBpsRequest()
{}

std::string DescribeLiveStreamOnlineBpsRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamOnlineBpsRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamOnlineBpsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamOnlineBpsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamOnlineBpsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamOnlineBpsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamOnlineBpsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamOnlineBpsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamOnlineBpsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamOnlineBpsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamOnlineBpsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamOnlineBpsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamOnlineBpsRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamOnlineBpsRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamOnlineBpsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamOnlineBpsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

