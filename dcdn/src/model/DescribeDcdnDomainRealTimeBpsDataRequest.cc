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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainRealTimeBpsDataRequest;

DescribeDcdnDomainRealTimeBpsDataRequest::DescribeDcdnDomainRealTimeBpsDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainRealTimeBpsData")
{}

DescribeDcdnDomainRealTimeBpsDataRequest::~DescribeDcdnDomainRealTimeBpsDataRequest()
{}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainRealTimeBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDcdnDomainRealTimeBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainRealTimeBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

