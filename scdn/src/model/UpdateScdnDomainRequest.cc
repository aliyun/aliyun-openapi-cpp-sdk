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

#include <alibabacloud/scdn/model/UpdateScdnDomainRequest.h>

using AlibabaCloud::Scdn::Model::UpdateScdnDomainRequest;

UpdateScdnDomainRequest::UpdateScdnDomainRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "UpdateScdnDomain")
{}

UpdateScdnDomainRequest::~UpdateScdnDomainRequest()
{}

std::string UpdateScdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UpdateScdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UpdateScdnDomainRequest::getSources()const
{
	return sources_;
}

void UpdateScdnDomainRequest::setSources(const std::string& sources)
{
	sources_ = sources;
	setParameter("Sources", sources);
}

std::string UpdateScdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateScdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateScdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void UpdateScdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long UpdateScdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateScdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateScdnDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateScdnDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

