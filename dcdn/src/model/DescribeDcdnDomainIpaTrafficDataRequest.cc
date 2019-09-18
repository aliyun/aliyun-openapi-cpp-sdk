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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainIpaTrafficDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainIpaTrafficDataRequest;

DescribeDcdnDomainIpaTrafficDataRequest::DescribeDcdnDomainIpaTrafficDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainIpaTrafficData")
{}

DescribeDcdnDomainIpaTrafficDataRequest::~DescribeDcdnDomainIpaTrafficDataRequest()
{}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setCoreParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDcdnDomainIpaTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainIpaTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnDomainIpaTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

