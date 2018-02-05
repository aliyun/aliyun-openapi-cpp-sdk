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

#include <alibabacloud/cdn/model/DescribeLiveStreamRelayPushErrorsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRelayPushErrorsRequest;

DescribeLiveStreamRelayPushErrorsRequest::DescribeLiveStreamRelayPushErrorsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRelayPushErrors")
{}

DescribeLiveStreamRelayPushErrorsRequest::~DescribeLiveStreamRelayPushErrorsRequest()
{}

std::string DescribeLiveStreamRelayPushErrorsRequest::getRelayDomain()const
{
	return relayDomain_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setRelayDomain(const std::string& relayDomain)
{
	relayDomain_ = relayDomain;
	setParameter("RelayDomain", relayDomain);
}

std::string DescribeLiveStreamRelayPushErrorsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRelayPushErrorsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamRelayPushErrorsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamRelayPushErrorsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRelayPushErrorsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamRelayPushErrorsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

