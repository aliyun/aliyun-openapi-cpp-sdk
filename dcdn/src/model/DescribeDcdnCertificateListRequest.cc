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

#include <alibabacloud/dcdn/model/DescribeDcdnCertificateListRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnCertificateListRequest;

DescribeDcdnCertificateListRequest::DescribeDcdnCertificateListRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnCertificateList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnCertificateListRequest::~DescribeDcdnCertificateListRequest()
{}

std::string DescribeDcdnCertificateListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnCertificateListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDcdnCertificateListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnCertificateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnCertificateListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnCertificateListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

