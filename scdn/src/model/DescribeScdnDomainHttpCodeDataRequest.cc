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

#include <alibabacloud/scdn/model/DescribeScdnDomainHttpCodeDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainHttpCodeDataRequest;

DescribeScdnDomainHttpCodeDataRequest::DescribeScdnDomainHttpCodeDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainHttpCodeData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainHttpCodeDataRequest::~DescribeScdnDomainHttpCodeDataRequest()
{}

std::string DescribeScdnDomainHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeScdnDomainHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

