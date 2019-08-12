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

#include <alibabacloud/dcdn/model/DeleteDcdnDomainRequest.h>

using AlibabaCloud::Dcdn::Model::DeleteDcdnDomainRequest;

DeleteDcdnDomainRequest::DeleteDcdnDomainRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DeleteDcdnDomain")
{}

DeleteDcdnDomainRequest::~DeleteDcdnDomainRequest()
{}

std::string DeleteDcdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteDcdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DeleteDcdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteDcdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteDcdnDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDcdnDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteDcdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteDcdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DeleteDcdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDcdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

