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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainBpsDataByTimeStampRequest::DescribeDomainBpsDataByTimeStampRequest() :
	CdnRequest("DescribeDomainBpsDataByTimeStamp")
{}

DescribeDomainBpsDataByTimeStampRequest::~DescribeDomainBpsDataByTimeStampRequest()
{}

std::string DescribeDomainBpsDataByTimeStampRequest::getIspNames()const
{
	return ispNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setIspNames(const std::string& ispNames)
{
	ispNames_ = ispNames;
	setParameter("IspNames", ispNames);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainBpsDataByTimeStampRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getLocationNames()const
{
	return locationNames_;
}

void DescribeDomainBpsDataByTimeStampRequest::setLocationNames(const std::string& locationNames)
{
	locationNames_ = locationNames;
	setParameter("LocationNames", locationNames);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainBpsDataByTimeStampRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDomainBpsDataByTimeStampRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainBpsDataByTimeStampRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainBpsDataByTimeStampRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainBpsDataByTimeStampRequest::getTimePoint()const
{
	return timePoint_;
}

void DescribeDomainBpsDataByTimeStampRequest::setTimePoint(const std::string& timePoint)
{
	timePoint_ = timePoint;
	setParameter("TimePoint", timePoint);
}

