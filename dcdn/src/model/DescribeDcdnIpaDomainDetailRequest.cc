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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaDomainDetailRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnIpaDomainDetailRequest;

DescribeDcdnIpaDomainDetailRequest::DescribeDcdnIpaDomainDetailRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnIpaDomainDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnIpaDomainDetailRequest::~DescribeDcdnIpaDomainDetailRequest()
{}

std::string DescribeDcdnIpaDomainDetailRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnIpaDomainDetailRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDcdnIpaDomainDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnIpaDomainDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnIpaDomainDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnIpaDomainDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

