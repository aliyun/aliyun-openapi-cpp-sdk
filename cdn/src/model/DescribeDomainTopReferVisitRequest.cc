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

#include <alibabacloud/cdn/model/DescribeDomainTopReferVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopReferVisitRequest;

DescribeDomainTopReferVisitRequest::DescribeDomainTopReferVisitRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainTopReferVisit")
{}

DescribeDomainTopReferVisitRequest::~DescribeDomainTopReferVisitRequest()
{}

std::string DescribeDomainTopReferVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainTopReferVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainTopReferVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTopReferVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainTopReferVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDomainTopReferVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string DescribeDomainTopReferVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTopReferVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainTopReferVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainTopReferVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

