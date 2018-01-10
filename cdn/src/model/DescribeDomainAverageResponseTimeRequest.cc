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

#include <alibabacloud/cdn/model/DescribeDomainAverageResponseTimeRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainAverageResponseTimeRequest::DescribeDomainAverageResponseTimeRequest() :
	CdnRequest("DescribeDomainAverageResponseTime")
{}

DescribeDomainAverageResponseTimeRequest::~DescribeDomainAverageResponseTimeRequest()
{}

std::string DescribeDomainAverageResponseTimeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainAverageResponseTimeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainAverageResponseTimeRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainAverageResponseTimeRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainAverageResponseTimeRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainAverageResponseTimeRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainAverageResponseTimeRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainAverageResponseTimeRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainAverageResponseTimeRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainAverageResponseTimeRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainAverageResponseTimeRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainAverageResponseTimeRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainAverageResponseTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainAverageResponseTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainAverageResponseTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainAverageResponseTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

