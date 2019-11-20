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

#include <alibabacloud/live/model/DescribeLiveDomainPushTrafficDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainPushTrafficDataRequest;

DescribeLiveDomainPushTrafficDataRequest::DescribeLiveDomainPushTrafficDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainPushTrafficData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainPushTrafficDataRequest::~DescribeLiveDomainPushTrafficDataRequest()
{}

std::string DescribeLiveDomainPushTrafficDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeLiveDomainPushTrafficDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeLiveDomainPushTrafficDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainPushTrafficDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeLiveDomainPushTrafficDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeLiveDomainPushTrafficDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeLiveDomainPushTrafficDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainPushTrafficDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveDomainPushTrafficDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainPushTrafficDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeLiveDomainPushTrafficDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainPushTrafficDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveDomainPushTrafficDataRequest::getInterval()const
{
	return interval_;
}

void DescribeLiveDomainPushTrafficDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

