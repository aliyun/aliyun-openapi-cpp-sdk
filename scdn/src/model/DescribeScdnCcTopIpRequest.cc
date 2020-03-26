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

#include <alibabacloud/scdn/model/DescribeScdnCcTopIpRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnCcTopIpRequest;

DescribeScdnCcTopIpRequest::DescribeScdnCcTopIpRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnCcTopIp")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeScdnCcTopIpRequest::~DescribeScdnCcTopIpRequest()
{}

std::string DescribeScdnCcTopIpRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnCcTopIpRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnCcTopIpRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScdnCcTopIpRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeScdnCcTopIpRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScdnCcTopIpRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeScdnCcTopIpRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnCcTopIpRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnCcTopIpRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnCcTopIpRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeScdnCcTopIpRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnCcTopIpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

