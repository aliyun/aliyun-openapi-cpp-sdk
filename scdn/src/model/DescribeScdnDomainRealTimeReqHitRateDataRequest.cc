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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeReqHitRateDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeReqHitRateDataRequest;

DescribeScdnDomainRealTimeReqHitRateDataRequest::DescribeScdnDomainRealTimeReqHitRateDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeReqHitRateData")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeScdnDomainRealTimeReqHitRateDataRequest::~DescribeScdnDomainRealTimeReqHitRateDataRequest()
{}

std::string DescribeScdnDomainRealTimeReqHitRateDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeReqHitRateDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainRealTimeReqHitRateDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeReqHitRateDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainRealTimeReqHitRateDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeReqHitRateDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeScdnDomainRealTimeReqHitRateDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeReqHitRateDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

