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

#include <alibabacloud/vpc/model/ModifyIPv6TranslatorAclAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIPv6TranslatorAclAttributeRequest;

ModifyIPv6TranslatorAclAttributeRequest::ModifyIPv6TranslatorAclAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIPv6TranslatorAclAttribute")
{}

ModifyIPv6TranslatorAclAttributeRequest::~ModifyIPv6TranslatorAclAttributeRequest()
{}

std::string ModifyIPv6TranslatorAclAttributeRequest::getAclId()const
{
	return aclId_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", std::to_string(aclId));
}

long ModifyIPv6TranslatorAclAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyIPv6TranslatorAclAttributeRequest::getAclName()const
{
	return aclName_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setCoreParameter("AclName", std::to_string(aclName));
}

std::string ModifyIPv6TranslatorAclAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyIPv6TranslatorAclAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyIPv6TranslatorAclAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string ModifyIPv6TranslatorAclAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyIPv6TranslatorAclAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIPv6TranslatorAclAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

