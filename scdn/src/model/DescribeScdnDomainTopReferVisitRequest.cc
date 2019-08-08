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

#include <alibabacloud/scdn/model/DescribeScdnDomainTopReferVisitRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainTopReferVisitRequest;

DescribeScdnDomainTopReferVisitRequest::DescribeScdnDomainTopReferVisitRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainTopReferVisit")
{}

DescribeScdnDomainTopReferVisitRequest::~DescribeScdnDomainTopReferVisitRequest()
{}

std::string DescribeScdnDomainTopReferVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainTopReferVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainTopReferVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainTopReferVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainTopReferVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeScdnDomainTopReferVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string DescribeScdnDomainTopReferVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainTopReferVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeScdnDomainTopReferVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainTopReferVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

