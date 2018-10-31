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

#include <alibabacloud/cdn/model/DescribeLiveStreamBitRateDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamBitRateDataRequest;

DescribeLiveStreamBitRateDataRequest::DescribeLiveStreamBitRateDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamBitRateData")
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
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamBitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamBitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamBitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamBitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamBitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamBitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamBitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamBitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamBitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamBitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamBitRateDataRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamBitRateDataRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamBitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamBitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

