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

#include <alibabacloud/cdn/model/DescribeDomainHitRateDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHitRateDataRequest::DescribeDomainHitRateDataRequest() :
	CdnRequest("DescribeDomainHitRateData")
{}

DescribeDomainHitRateDataRequest::~DescribeDomainHitRateDataRequest()
{}

std::string DescribeDomainHitRateDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainHitRateDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainHitRateDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainHitRateDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainHitRateDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainHitRateDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainHitRateDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainHitRateDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainHitRateDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainHitRateDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

long DescribeDomainHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainHitRateDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainHitRateDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

