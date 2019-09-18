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

#include <alibabacloud/scdn/model/DescribeScdnDomainOriginTrafficDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainOriginTrafficDataRequest;

DescribeScdnDomainOriginTrafficDataRequest::DescribeScdnDomainOriginTrafficDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainOriginTrafficData")
{}

DescribeScdnDomainOriginTrafficDataRequest::~DescribeScdnDomainOriginTrafficDataRequest()
{}

std::string DescribeScdnDomainOriginTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainOriginTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeScdnDomainOriginTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainOriginTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainOriginTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainOriginTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeScdnDomainOriginTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainOriginTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainOriginTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainOriginTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

