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

#include <alibabacloud/cdn/model/DescribeCdnDomainConfigsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainConfigsRequest;

DescribeCdnDomainConfigsRequest::DescribeCdnDomainConfigsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeCdnDomainConfigs")
{}

DescribeCdnDomainConfigsRequest::~DescribeCdnDomainConfigsRequest()
{}

std::string DescribeCdnDomainConfigsRequest::getFunctionNames()const
{
	return functionNames_;
}

void DescribeCdnDomainConfigsRequest::setFunctionNames(const std::string& functionNames)
{
	functionNames_ = functionNames;
	setCoreParameter("FunctionNames", functionNames);
}

std::string DescribeCdnDomainConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnDomainConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCdnDomainConfigsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnDomainConfigsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeCdnDomainConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

