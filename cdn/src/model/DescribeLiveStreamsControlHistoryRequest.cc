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

#include <alibabacloud/cdn/model/DescribeLiveStreamsControlHistoryRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamsControlHistoryRequest;

DescribeLiveStreamsControlHistoryRequest::DescribeLiveStreamsControlHistoryRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamsControlHistory")
{}

DescribeLiveStreamsControlHistoryRequest::~DescribeLiveStreamsControlHistoryRequest()
{}

std::string DescribeLiveStreamsControlHistoryRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamsControlHistoryRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeLiveStreamsControlHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamsControlHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeLiveStreamsControlHistoryRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamsControlHistoryRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveStreamsControlHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamsControlHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeLiveStreamsControlHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamsControlHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeLiveStreamsControlHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamsControlHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

