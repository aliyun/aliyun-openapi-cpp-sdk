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

#include <alibabacloud/cdn/model/DescribeDomainUsageDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainUsageDataRequest;

DescribeDomainUsageDataRequest::DescribeDomainUsageDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainUsageData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainUsageDataRequest::~DescribeDomainUsageDataRequest()
{}

std::string DescribeDomainUsageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainUsageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainUsageDataRequest::getDataProtocol()const
{
	return dataProtocol_;
}

void DescribeDomainUsageDataRequest::setDataProtocol(const std::string& dataProtocol)
{
	dataProtocol_ = dataProtocol;
	setCoreParameter("DataProtocol", dataProtocol);
}

std::string DescribeDomainUsageDataRequest::getArea()const
{
	return area_;
}

void DescribeDomainUsageDataRequest::setArea(const std::string& area)
{
	area_ = area;
	setCoreParameter("Area", area);
}

std::string DescribeDomainUsageDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainUsageDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainUsageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainUsageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDomainUsageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainUsageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainUsageDataRequest::getField()const
{
	return field_;
}

void DescribeDomainUsageDataRequest::setField(const std::string& field)
{
	field_ = field;
	setCoreParameter("Field", field);
}

std::string DescribeDomainUsageDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainUsageDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

