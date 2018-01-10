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

#include <alibabacloud/cdn/model/SetSourceHostConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetSourceHostConfigRequest::SetSourceHostConfigRequest() :
	CdnRequest("SetSourceHostConfig")
{}

SetSourceHostConfigRequest::~SetSourceHostConfigRequest()
{}

std::string SetSourceHostConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetSourceHostConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetSourceHostConfigRequest::getEnable()const
{
	return enable_;
}

void SetSourceHostConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetSourceHostConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetSourceHostConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetSourceHostConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetSourceHostConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetSourceHostConfigRequest::getBackSrcDomain()const
{
	return backSrcDomain_;
}

void SetSourceHostConfigRequest::setBackSrcDomain(const std::string& backSrcDomain)
{
	backSrcDomain_ = backSrcDomain;
	setParameter("BackSrcDomain", backSrcDomain);
}

std::string SetSourceHostConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetSourceHostConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

