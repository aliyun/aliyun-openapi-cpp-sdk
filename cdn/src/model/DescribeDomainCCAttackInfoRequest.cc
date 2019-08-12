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

#include <alibabacloud/cdn/model/DescribeDomainCCAttackInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCCAttackInfoRequest;

DescribeDomainCCAttackInfoRequest::DescribeDomainCCAttackInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainCCAttackInfo")
{}

DescribeDomainCCAttackInfoRequest::~DescribeDomainCCAttackInfoRequest()
{}

std::string DescribeDomainCCAttackInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainCCAttackInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDomainCCAttackInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCCAttackInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeDomainCCAttackInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainCCAttackInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeDomainCCAttackInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainCCAttackInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeDomainCCAttackInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCCAttackInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

