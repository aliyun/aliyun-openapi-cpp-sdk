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

#include <alibabacloud/scdn/model/DescribeScdnDomainTopUrlVisitRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainTopUrlVisitRequest;

DescribeScdnDomainTopUrlVisitRequest::DescribeScdnDomainTopUrlVisitRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainTopUrlVisit")
{}

DescribeScdnDomainTopUrlVisitRequest::~DescribeScdnDomainTopUrlVisitRequest()
{}

std::string DescribeScdnDomainTopUrlVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainTopUrlVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainTopUrlVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainTopUrlVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeScdnDomainTopUrlVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeScdnDomainTopUrlVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string DescribeScdnDomainTopUrlVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainTopUrlVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeScdnDomainTopUrlVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainTopUrlVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

