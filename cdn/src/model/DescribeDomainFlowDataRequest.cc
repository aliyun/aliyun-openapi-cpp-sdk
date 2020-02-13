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

#include <alibabacloud/cdn/model/DescribeDomainFlowDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainFlowDataRequest;

DescribeDomainFlowDataRequest::DescribeDomainFlowDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainFlowData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainFlowDataRequest::~DescribeDomainFlowDataRequest()
{}

std::string DescribeDomainFlowDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainFlowDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainFlowDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainFlowDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainFlowDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainFlowDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainFlowDataRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainFlowDataRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setParameter("DomainType", domainType);
}

std::string DescribeDomainFlowDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainFlowDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainFlowDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainFlowDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainFlowDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainFlowDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainFlowDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainFlowDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainFlowDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainFlowDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

