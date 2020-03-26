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

#include <alibabacloud/dcdn/model/UpdateDcdnIpaDomainRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnIpaDomainRequest;

UpdateDcdnIpaDomainRequest::UpdateDcdnIpaDomainRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnIpaDomain")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDcdnIpaDomainRequest::~UpdateDcdnIpaDomainRequest()
{}

std::string UpdateDcdnIpaDomainRequest::getSources()const
{
	return sources_;
}

void UpdateDcdnIpaDomainRequest::setSources(const std::string& sources)
{
	sources_ = sources;
	setParameter("Sources", sources);
}

std::string UpdateDcdnIpaDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpdateDcdnIpaDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UpdateDcdnIpaDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateDcdnIpaDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateDcdnIpaDomainRequest::getTopLevelDomain()const
{
	return topLevelDomain_;
}

void UpdateDcdnIpaDomainRequest::setTopLevelDomain(const std::string& topLevelDomain)
{
	topLevelDomain_ = topLevelDomain;
	setParameter("TopLevelDomain", topLevelDomain);
}

std::string UpdateDcdnIpaDomainRequest::getDomainName()const
{
	return domainName_;
}

void UpdateDcdnIpaDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long UpdateDcdnIpaDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateDcdnIpaDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

