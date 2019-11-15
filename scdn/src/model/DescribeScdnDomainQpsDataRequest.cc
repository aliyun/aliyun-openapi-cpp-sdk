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

#include <alibabacloud/scdn/model/DescribeScdnDomainQpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainQpsDataRequest;

DescribeScdnDomainQpsDataRequest::DescribeScdnDomainQpsDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainQpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainQpsDataRequest::~DescribeScdnDomainQpsDataRequest()
{}

std::string DescribeScdnDomainQpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainQpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainQpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainQpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeScdnDomainQpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainQpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainQpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainQpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainQpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainQpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeScdnDomainQpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainQpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainQpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainQpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

