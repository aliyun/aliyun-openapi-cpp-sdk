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

#include <alibabacloud/scdn/model/DescribeScdnDomainOriginBpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainOriginBpsDataRequest;

DescribeScdnDomainOriginBpsDataRequest::DescribeScdnDomainOriginBpsDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainOriginBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainOriginBpsDataRequest::~DescribeScdnDomainOriginBpsDataRequest()
{}

std::string DescribeScdnDomainOriginBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainOriginBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainOriginBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainOriginBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainOriginBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainOriginBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeScdnDomainOriginBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainOriginBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainOriginBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainOriginBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

