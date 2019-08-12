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

#include <alibabacloud/scdn/model/DeleteScdnDomainRequest.h>

using AlibabaCloud::Scdn::Model::DeleteScdnDomainRequest;

DeleteScdnDomainRequest::DeleteScdnDomainRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DeleteScdnDomain")
{}

DeleteScdnDomainRequest::~DeleteScdnDomainRequest()
{}

std::string DeleteScdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteScdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DeleteScdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteScdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteScdnDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteScdnDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteScdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteScdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long DeleteScdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

