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

#include <alibabacloud/cdn/model/DescribeLiveStreamFrameAndBitRateByDomainRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamFrameAndBitRateByDomainRequest::DescribeLiveStreamFrameAndBitRateByDomainRequest() :
	CdnRequest("DescribeLiveStreamFrameAndBitRateByDomain")
{}

DescribeLiveStreamFrameAndBitRateByDomainRequest::~DescribeLiveStreamFrameAndBitRateByDomainRequest()
{}

std::string DescribeLiveStreamFrameAndBitRateByDomainRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamFrameAndBitRateByDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamFrameAndBitRateByDomainRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveStreamFrameAndBitRateByDomainRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeLiveStreamFrameAndBitRateByDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeLiveStreamFrameAndBitRateByDomainRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLiveStreamFrameAndBitRateByDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamFrameAndBitRateByDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

