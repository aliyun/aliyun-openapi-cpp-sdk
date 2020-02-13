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

#include <alibabacloud/cdn/model/DescribeDomainConfigsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainConfigsRequest;

DescribeDomainConfigsRequest::DescribeDomainConfigsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainConfigs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainConfigsRequest::~DescribeDomainConfigsRequest()
{}

std::string DescribeDomainConfigsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainConfigsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDomainConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainConfigsRequest::getConfigList()const
{
	return configList_;
}

void DescribeDomainConfigsRequest::setConfigList(const std::string& configList)
{
	configList_ = configList;
	setParameter("ConfigList", configList);
}

