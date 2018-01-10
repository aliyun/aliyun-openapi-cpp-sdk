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

#include <alibabacloud/cdn/model/DescribeLiveStreamHlsOnlineUserNumByDomainRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamHlsOnlineUserNumByDomainRequest::DescribeLiveStreamHlsOnlineUserNumByDomainRequest() :
	CdnRequest("DescribeLiveStreamHlsOnlineUserNumByDomain")
{}

DescribeLiveStreamHlsOnlineUserNumByDomainRequest::~DescribeLiveStreamHlsOnlineUserNumByDomainRequest()
{}

std::string DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getHlsSwitch()const
{
	return hlsSwitch_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setHlsSwitch(const std::string& hlsSwitch)
{
	hlsSwitch_ = hlsSwitch;
	setParameter("HlsSwitch", hlsSwitch);
}

std::string DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLiveStreamHlsOnlineUserNumByDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamHlsOnlineUserNumByDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

