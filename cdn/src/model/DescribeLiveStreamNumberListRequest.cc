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

#include <alibabacloud/cdn/model/DescribeLiveStreamNumberListRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamNumberListRequest::DescribeLiveStreamNumberListRequest() :
	CdnRequest("DescribeLiveStreamNumberList")
{}

DescribeLiveStreamNumberListRequest::~DescribeLiveStreamNumberListRequest()
{}

std::string DescribeLiveStreamNumberListRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamNumberListRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamNumberListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamNumberListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamNumberListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamNumberListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeLiveStreamNumberListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamNumberListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveStreamNumberListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamNumberListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeLiveStreamNumberListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamNumberListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamNumberListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamNumberListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

