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

#include <alibabacloud/cdn/model/DescribeDomainHttpsDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHttpsDataRequest::DescribeDomainHttpsDataRequest() :
	CdnRequest("DescribeDomainHttpsData")
{}

DescribeDomainHttpsDataRequest::~DescribeDomainHttpsDataRequest()
{}

std::string DescribeDomainHttpsDataRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainHttpsDataRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setParameter("DomainType", domainType);
}

std::string DescribeDomainHttpsDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainHttpsDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainHttpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainHttpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainHttpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainHttpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainHttpsDataRequest::getDomainNames()const
{
	return domainNames_;
}

void DescribeDomainHttpsDataRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setParameter("DomainNames", domainNames);
}

std::string DescribeDomainHttpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainHttpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainHttpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainHttpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeDomainHttpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainHttpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainHttpsDataRequest::getCls()const
{
	return cls_;
}

void DescribeDomainHttpsDataRequest::setCls(const std::string& cls)
{
	cls_ = cls;
	setParameter("Cls", cls);
}

long DescribeDomainHttpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainHttpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainHttpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainHttpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

