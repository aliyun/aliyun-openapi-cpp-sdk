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

#include <alibabacloud/live/model/DescribeLiveStreamBitRateDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamBitRateDataRequest;

DescribeLiveStreamBitRateDataRequest::DescribeLiveStreamBitRateDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamBitRateData")
{}

DescribeLiveStreamBitRateDataRequest::~DescribeLiveStreamBitRateDataRequest()
{}

std::string DescribeLiveStreamBitRateDataRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamBitRateDataRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeLiveStreamBitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamBitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveStreamBitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamBitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveStreamBitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamBitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeLiveStreamBitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamBitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeLiveStreamBitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamBitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLiveStreamBitRateDataRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamBitRateDataRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

