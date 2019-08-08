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

#include <alibabacloud/scdn/model/DescribeScdnDomainConfigsRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainConfigsRequest;

DescribeScdnDomainConfigsRequest::DescribeScdnDomainConfigsRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainConfigs")
{}

DescribeScdnDomainConfigsRequest::~DescribeScdnDomainConfigsRequest()
{}

std::string DescribeScdnDomainConfigsRequest::getFunctionNames()const
{
	return functionNames_;
}

void DescribeScdnDomainConfigsRequest::setFunctionNames(const std::string& functionNames)
{
	functionNames_ = functionNames;
	setCoreParameter("FunctionNames", functionNames);
}

std::string DescribeScdnDomainConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainConfigsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainConfigsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeScdnDomainConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

