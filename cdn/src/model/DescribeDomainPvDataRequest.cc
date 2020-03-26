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

#include <alibabacloud/cdn/model/DescribeDomainPvDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainPvDataRequest;

DescribeDomainPvDataRequest::DescribeDomainPvDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainPvData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainPvDataRequest::~DescribeDomainPvDataRequest()
{}

std::string DescribeDomainPvDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainPvDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainPvDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainPvDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainPvDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainPvDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainPvDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainPvDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDomainPvDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainPvDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

