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

#include <alibabacloud/cdn/model/DescribeLiveStreamRecordContentRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRecordContentRequest;

DescribeLiveStreamRecordContentRequest::DescribeLiveStreamRecordContentRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRecordContent")
{}

DescribeLiveStreamRecordContentRequest::~DescribeLiveStreamRecordContentRequest()
{}

std::string DescribeLiveStreamRecordContentRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamRecordContentRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamRecordContentRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRecordContentRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRecordContentRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamRecordContentRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamRecordContentRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamRecordContentRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamRecordContentRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamRecordContentRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeLiveStreamRecordContentRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRecordContentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRecordContentRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamRecordContentRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

