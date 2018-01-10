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

#include <alibabacloud/cdn/model/DescribeLiveStreamDomainAppInfoRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamDomainAppInfoRequest::DescribeLiveStreamDomainAppInfoRequest() :
	CdnRequest("DescribeLiveStreamDomainAppInfo")
{}

DescribeLiveStreamDomainAppInfoRequest::~DescribeLiveStreamDomainAppInfoRequest()
{}

std::string DescribeLiveStreamDomainAppInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamDomainAppInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamDomainAppInfoRequest::getAppDomain()const
{
	return appDomain_;
}

void DescribeLiveStreamDomainAppInfoRequest::setAppDomain(const std::string& appDomain)
{
	appDomain_ = appDomain;
	setParameter("AppDomain", appDomain);
}

long DescribeLiveStreamDomainAppInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamDomainAppInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamDomainAppInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamDomainAppInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

