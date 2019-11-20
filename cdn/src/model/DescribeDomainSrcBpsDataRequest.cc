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

using AlibabaCloud::Cdn::Model::DescribeDomainSrcBpsDataRequest;

DescribeDomainSrcBpsDataRequest::DescribeDomainSrcBpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainSrcBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainSrcBpsDataRequest::~DescribeDomainSrcBpsDataRequest()
{}

std::string DescribeDomainSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainSrcBpsDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainSrcBpsDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setCoreParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainSrcBpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainSrcBpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDomainSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainSrcBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

