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

#include <alibabacloud/cdn/model/DescribeLiveStreamRelayPushDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRelayPushDataRequest;

DescribeLiveStreamRelayPushDataRequest::DescribeLiveStreamRelayPushDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRelayPushData")
{}

DescribeLiveStreamRelayPushDataRequest::~DescribeLiveStreamRelayPushDataRequest()
{}

std::string DescribeLiveStreamRelayPushDataRequest::getRelayDomain()const
{
	return relayDomain_;
}

void DescribeLiveStreamRelayPushDataRequest::setRelayDomain(const std::string& relayDomain)
{
	relayDomain_ = relayDomain;
	setParameter("RelayDomain", relayDomain);
}

std::string DescribeLiveStreamRelayPushDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRelayPushDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRelayPushDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamRelayPushDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamRelayPushDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamRelayPushDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamRelayPushDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRelayPushDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRelayPushDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamRelayPushDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

