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

#include <alibabacloud/cdn/model/DescribeDomainMonthBillingBpsDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainMonthBillingBpsDataRequest::DescribeDomainMonthBillingBpsDataRequest() :
	CdnRequest("DescribeDomainMonthBillingBpsData")
{}

DescribeDomainMonthBillingBpsDataRequest::~DescribeDomainMonthBillingBpsDataRequest()
{}

std::string DescribeDomainMonthBillingBpsDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainMonthBillingBpsDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainMonthBillingBpsDataRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeDomainMonthBillingBpsDataRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string DescribeDomainMonthBillingBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainMonthBillingBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainMonthBillingBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainMonthBillingBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainMonthBillingBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainMonthBillingBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainMonthBillingBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainMonthBillingBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainMonthBillingBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainMonthBillingBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

