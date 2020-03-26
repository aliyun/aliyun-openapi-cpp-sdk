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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeSrcBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeSrcBpsDataRequest;

DescribeDcdnDomainRealTimeSrcBpsDataRequest::DescribeDcdnDomainRealTimeSrcBpsDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeSrcBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainRealTimeSrcBpsDataRequest::~DescribeDcdnDomainRealTimeSrcBpsDataRequest()
{}

std::string DescribeDcdnDomainRealTimeSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRealTimeSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRealTimeSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRealTimeSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRealTimeSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRealTimeSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDcdnDomainRealTimeSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRealTimeSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

