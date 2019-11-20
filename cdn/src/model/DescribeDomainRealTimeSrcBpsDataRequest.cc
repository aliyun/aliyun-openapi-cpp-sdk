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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeSrcBpsDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeSrcBpsDataRequest;

DescribeDomainRealTimeSrcBpsDataRequest::DescribeDomainRealTimeSrcBpsDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeSrcBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainRealTimeSrcBpsDataRequest::~DescribeDomainRealTimeSrcBpsDataRequest()
{}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeSrcBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDomainRealTimeSrcBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeSrcBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

