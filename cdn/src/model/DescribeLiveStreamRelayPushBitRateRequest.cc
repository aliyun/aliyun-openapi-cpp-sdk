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

#include <alibabacloud/cdn/model/DescribeLiveStreamRelayPushBitRateRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamRelayPushBitRateRequest::DescribeLiveStreamRelayPushBitRateRequest() :
	CdnRequest("DescribeLiveStreamRelayPushBitRate")
{}

DescribeLiveStreamRelayPushBitRateRequest::~DescribeLiveStreamRelayPushBitRateRequest()
{}

std::string DescribeLiveStreamRelayPushBitRateRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamRelayPushBitRateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRelayPushBitRateRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveStreamRelayPushBitRateRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRelayPushBitRateRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DescribeLiveStreamRelayPushBitRateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamRelayPushBitRateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

