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

#include <alibabacloud/cdn/model/DescribeDomainUpstreamBpsOfEdgeRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainUpstreamBpsOfEdgeRequest::DescribeDomainUpstreamBpsOfEdgeRequest() :
	CdnRequest("DescribeDomainUpstreamBpsOfEdge")
{}

DescribeDomainUpstreamBpsOfEdgeRequest::~DescribeDomainUpstreamBpsOfEdgeRequest()
{}

std::string DescribeDomainUpstreamBpsOfEdgeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainUpstreamBpsOfEdgeRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainUpstreamBpsOfEdgeRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainUpstreamBpsOfEdgeRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainUpstreamBpsOfEdgeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainUpstreamBpsOfEdgeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainUpstreamBpsOfEdgeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

