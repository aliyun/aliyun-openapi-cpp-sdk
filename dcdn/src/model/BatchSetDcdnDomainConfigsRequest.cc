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

#include <alibabacloud/dcdn/model/BatchSetDcdnDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::BatchSetDcdnDomainConfigsRequest;

BatchSetDcdnDomainConfigsRequest::BatchSetDcdnDomainConfigsRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "BatchSetDcdnDomainConfigs")
{}

BatchSetDcdnDomainConfigsRequest::~BatchSetDcdnDomainConfigsRequest()
{}

std::string BatchSetDcdnDomainConfigsRequest::getFunctions()const
{
	return functions_;
}

void BatchSetDcdnDomainConfigsRequest::setFunctions(const std::string& functions)
{
	functions_ = functions;
	setCoreParameter("Functions", std::to_string(functions));
}

std::string BatchSetDcdnDomainConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void BatchSetDcdnDomainConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string BatchSetDcdnDomainConfigsRequest::getDomainNames()const
{
	return domainNames_;
}

void BatchSetDcdnDomainConfigsRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setCoreParameter("DomainNames", std::to_string(domainNames));
}

std::string BatchSetDcdnDomainConfigsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BatchSetDcdnDomainConfigsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long BatchSetDcdnDomainConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchSetDcdnDomainConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

