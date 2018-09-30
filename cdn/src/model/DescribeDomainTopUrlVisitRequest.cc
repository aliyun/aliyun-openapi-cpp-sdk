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

#include <alibabacloud/cdn/model/DescribeDomainTopUrlVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopUrlVisitRequest;

DescribeDomainTopUrlVisitRequest::DescribeDomainTopUrlVisitRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTopUrlVisit")
{}

DescribeDomainTopUrlVisitRequest::~DescribeDomainTopUrlVisitRequest()
{}

std::string DescribeDomainTopUrlVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainTopUrlVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainTopUrlVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTopUrlVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainTopUrlVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDomainTopUrlVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

std::string DescribeDomainTopUrlVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTopUrlVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainTopUrlVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainTopUrlVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainTopUrlVisitRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainTopUrlVisitRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

