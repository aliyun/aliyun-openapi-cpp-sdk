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

#include <alibabacloud/cdn/model/DescribeDomainSlowRatioRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSlowRatioRequest;

DescribeDomainSlowRatioRequest::DescribeDomainSlowRatioRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainSlowRatio")
{}

DescribeDomainSlowRatioRequest::~DescribeDomainSlowRatioRequest()
{}

std::string DescribeDomainSlowRatioRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSlowRatioRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeDomainSlowRatioRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainSlowRatioRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeDomainSlowRatioRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainSlowRatioRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainSlowRatioRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSlowRatioRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainSlowRatioRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSlowRatioRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDomainSlowRatioRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSlowRatioRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

