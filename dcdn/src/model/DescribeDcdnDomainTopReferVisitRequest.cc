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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainTopReferVisitRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainTopReferVisitRequest;

DescribeDcdnDomainTopReferVisitRequest::DescribeDcdnDomainTopReferVisitRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainTopReferVisit")
{}

DescribeDcdnDomainTopReferVisitRequest::~DescribeDcdnDomainTopReferVisitRequest()
{}

std::string DescribeDcdnDomainTopReferVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainTopReferVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainTopReferVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainTopReferVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainTopReferVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDcdnDomainTopReferVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string DescribeDcdnDomainTopReferVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainTopReferVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeDcdnDomainTopReferVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainTopReferVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

