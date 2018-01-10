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

#include <alibabacloud/cdn/model/DescribeLiveAppRecordConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveAppRecordConfigRequest::DescribeLiveAppRecordConfigRequest() :
	CdnRequest("DescribeLiveAppRecordConfig")
{}

DescribeLiveAppRecordConfigRequest::~DescribeLiveAppRecordConfigRequest()
{}

std::string DescribeLiveAppRecordConfigRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveAppRecordConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DescribeLiveAppRecordConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveAppRecordConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveAppRecordConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveAppRecordConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveAppRecordConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveAppRecordConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveAppRecordConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveAppRecordConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

