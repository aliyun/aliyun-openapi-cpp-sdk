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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeBpsDataRequest;

DescribeScdnDomainRealTimeBpsDataRequest::DescribeScdnDomainRealTimeBpsDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeBpsData")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeScdnDomainRealTimeBpsDataRequest::~DescribeScdnDomainRealTimeBpsDataRequest()
{}

std::string DescribeScdnDomainRealTimeBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainRealTimeBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainRealTimeBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeScdnDomainRealTimeBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainRealTimeBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeScdnDomainRealTimeBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

