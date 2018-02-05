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

#include <alibabacloud/cdn/model/DescribeLiveStreamFrameInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamFrameInfoRequest;

DescribeLiveStreamFrameInfoRequest::DescribeLiveStreamFrameInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamFrameInfo")
{}

DescribeLiveStreamFrameInfoRequest::~DescribeLiveStreamFrameInfoRequest()
{}

std::string DescribeLiveStreamFrameInfoRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamFrameInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamFrameInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamFrameInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamFrameInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamFrameInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamFrameInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamFrameInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamFrameInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamFrameInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamFrameInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamFrameInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamFrameInfoRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamFrameInfoRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamFrameInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamFrameInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

