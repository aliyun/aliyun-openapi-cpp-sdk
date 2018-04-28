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

#include <alibabacloud/dcdn/model/AddDcdnDomainRequest.h>

using AlibabaCloud::Dcdn::Model::AddDcdnDomainRequest;

AddDcdnDomainRequest::AddDcdnDomainRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "AddDcdnDomain")
{}

AddDcdnDomainRequest::~AddDcdnDomainRequest()
{}

std::string AddDcdnDomainRequest::getTopLevelDomain()const
{
	return topLevelDomain_;
}

void AddDcdnDomainRequest::setTopLevelDomain(const std::string& topLevelDomain)
{
	topLevelDomain_ = topLevelDomain;
	setParameter("TopLevelDomain", topLevelDomain);
}

std::string AddDcdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddDcdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AddDcdnDomainRequest::getSources()const
{
	return sources_;
}

void AddDcdnDomainRequest::setSources(const std::string& sources)
{
	sources_ = sources;
	setParameter("Sources", sources);
}

std::string AddDcdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddDcdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddDcdnDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddDcdnDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AddDcdnDomainRequest::getScope()const
{
	return scope_;
}

void AddDcdnDomainRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string AddDcdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void AddDcdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long AddDcdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void AddDcdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddDcdnDomainRequest::getCheckUrl()const
{
	return checkUrl_;
}

void AddDcdnDomainRequest::setCheckUrl(const std::string& checkUrl)
{
	checkUrl_ = checkUrl;
	setParameter("CheckUrl", checkUrl);
}

std::string AddDcdnDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddDcdnDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

