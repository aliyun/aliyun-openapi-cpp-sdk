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

#include <alibabacloud/cdn/model/DescribeDomainReqHitRateDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainReqHitRateDataRequest::DescribeDomainReqHitRateDataRequest() :
	CdnRequest("DescribeDomainReqHitRateData")
{}

DescribeDomainReqHitRateDataRequest::~DescribeDomainReqHitRateDataRequest()
{}

std::string DescribeDomainReqHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainReqHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainReqHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainReqHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainReqHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainReqHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainReqHitRateDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainReqHitRateDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainReqHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainReqHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainReqHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainReqHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainReqHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainReqHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

