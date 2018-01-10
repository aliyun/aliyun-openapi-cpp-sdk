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

#include <alibabacloud/cdn/model/DescribeDomainSrcFlowDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcFlowDataRequest::DescribeDomainSrcFlowDataRequest() :
	CdnRequest("DescribeDomainSrcFlowData")
{}

DescribeDomainSrcFlowDataRequest::~DescribeDomainSrcFlowDataRequest()
{}

std::string DescribeDomainSrcFlowDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainSrcFlowDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainSrcFlowDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSrcFlowDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSrcFlowDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainSrcFlowDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainSrcFlowDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcFlowDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainSrcFlowDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcFlowDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainSrcFlowDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcFlowDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainSrcFlowDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcFlowDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainSrcFlowDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcFlowDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSrcFlowDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSrcFlowDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

