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

#include <alibabacloud/cdn/model/BatchDeleteCdnDomainConfigRequest.h>

using AlibabaCloud::Cdn::Model::BatchDeleteCdnDomainConfigRequest;

BatchDeleteCdnDomainConfigRequest::BatchDeleteCdnDomainConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "BatchDeleteCdnDomainConfig")
{}

BatchDeleteCdnDomainConfigRequest::~BatchDeleteCdnDomainConfigRequest()
{}

std::string BatchDeleteCdnDomainConfigRequest::getFunctionNames()const
{
	return functionNames_;
}

void BatchDeleteCdnDomainConfigRequest::setFunctionNames(const std::string& functionNames)
{
	functionNames_ = functionNames;
	setCoreParameter("FunctionNames", functionNames);
}

std::string BatchDeleteCdnDomainConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void BatchDeleteCdnDomainConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string BatchDeleteCdnDomainConfigRequest::getDomainNames()const
{
	return domainNames_;
}

void BatchDeleteCdnDomainConfigRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setCoreParameter("DomainNames", domainNames);
}

std::string BatchDeleteCdnDomainConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void BatchDeleteCdnDomainConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long BatchDeleteCdnDomainConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchDeleteCdnDomainConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

