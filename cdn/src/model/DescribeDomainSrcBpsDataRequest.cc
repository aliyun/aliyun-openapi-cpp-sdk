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

#include <alibabacloud/cdn/model/DescribeDomainSrcBpsDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcBpsDataRequest::DescribeDomainSrcBpsDataRequest() :
	CdnRequest("DescribeDomainSrcBpsData")
{}

DescribeDomainSrcBpsDataRequest::~DescribeDomainSrcBpsDataRequest()
{}

std::string DescribeDomainSrcBpsDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainSrcBpsDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainSrcBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSrcBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSrcBpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainSrcBpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainSrcBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSrcBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSrcBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

