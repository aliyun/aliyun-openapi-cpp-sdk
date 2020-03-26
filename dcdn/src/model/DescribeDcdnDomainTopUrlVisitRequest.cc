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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainTopUrlVisitRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainTopUrlVisitRequest;

DescribeDcdnDomainTopUrlVisitRequest::DescribeDcdnDomainTopUrlVisitRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainTopUrlVisit")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainTopUrlVisitRequest::~DescribeDcdnDomainTopUrlVisitRequest()
{}

std::string DescribeDcdnDomainTopUrlVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainTopUrlVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnDomainTopUrlVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnDomainTopUrlVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDcdnDomainTopUrlVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainTopUrlVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnDomainTopUrlVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnDomainTopUrlVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnDomainTopUrlVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDcdnDomainTopUrlVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

