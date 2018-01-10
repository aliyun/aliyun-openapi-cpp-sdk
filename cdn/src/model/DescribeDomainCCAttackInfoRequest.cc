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

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCCAttackInfoRequest::DescribeDomainCCAttackInfoRequest() :
	CdnRequest("DescribeDomainCCAttackInfo")
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
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainCCAttackInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCCAttackInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainCCAttackInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainCCAttackInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainCCAttackInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainCCAttackInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainCCAttackInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCCAttackInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainCCAttackInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainCCAttackInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

