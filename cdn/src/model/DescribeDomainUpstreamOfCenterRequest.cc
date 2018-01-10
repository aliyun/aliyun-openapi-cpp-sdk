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

#include <alibabacloud/cdn/model/DescribeDomainUpstreamOfCenterRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainUpstreamOfCenterRequest::DescribeDomainUpstreamOfCenterRequest() :
	CdnRequest("DescribeDomainUpstreamOfCenter")
{}

DescribeDomainUpstreamOfCenterRequest::~DescribeDomainUpstreamOfCenterRequest()
{}

std::string DescribeDomainUpstreamOfCenterRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainUpstreamOfCenterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainUpstreamOfCenterRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainUpstreamOfCenterRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainUpstreamOfCenterRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainUpstreamOfCenterRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainUpstreamOfCenterRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainUpstreamOfCenterRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainUpstreamOfCenterRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainUpstreamOfCenterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainUpstreamOfCenterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainUpstreamOfCenterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

