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

#include <alibabacloud/scdn/model/AddScdnDomainRequest.h>

using AlibabaCloud::Scdn::Model::AddScdnDomainRequest;

AddScdnDomainRequest::AddScdnDomainRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "AddScdnDomain")
{}

AddScdnDomainRequest::~AddScdnDomainRequest()
{}

std::string AddScdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddScdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string AddScdnDomainRequest::getSources()const
{
	return sources_;
}

void AddScdnDomainRequest::setSources(const std::string& sources)
{
	sources_ = sources;
	setCoreParameter("Sources", sources);
}

std::string AddScdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddScdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddScdnDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddScdnDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddScdnDomainRequest::getScope()const
{
	return scope_;
}

void AddScdnDomainRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string AddScdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void AddScdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long AddScdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void AddScdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddScdnDomainRequest::getCheckUrl()const
{
	return checkUrl_;
}

void AddScdnDomainRequest::setCheckUrl(const std::string& checkUrl)
{
	checkUrl_ = checkUrl;
	setCoreParameter("CheckUrl", checkUrl);
}

