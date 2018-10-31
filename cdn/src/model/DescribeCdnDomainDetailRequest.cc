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

#include <alibabacloud/cdn/model/DescribeCdnDomainDetailRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainDetailRequest;

DescribeCdnDomainDetailRequest::DescribeCdnDomainDetailRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeCdnDomainDetail")
{}

DescribeCdnDomainDetailRequest::~DescribeCdnDomainDetailRequest()
{}

std::string DescribeCdnDomainDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnDomainDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeCdnDomainDetailRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnDomainDetailRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeCdnDomainDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCdnDomainDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnDomainDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

