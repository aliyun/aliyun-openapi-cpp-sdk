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

#include <alibabacloud/vpc/model/ModifyIPv6TranslatorAclListEntryRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIPv6TranslatorAclListEntryRequest;

ModifyIPv6TranslatorAclListEntryRequest::ModifyIPv6TranslatorAclListEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIPv6TranslatorAclListEntry")
{}

ModifyIPv6TranslatorAclListEntryRequest::~ModifyIPv6TranslatorAclListEntryRequest()
{}

std::string ModifyIPv6TranslatorAclListEntryRequest::getAclId()const
{
	return aclId_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", std::to_string(aclId));
}

long ModifyIPv6TranslatorAclListEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyIPv6TranslatorAclListEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyIPv6TranslatorAclListEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyIPv6TranslatorAclListEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyIPv6TranslatorAclListEntryRequest::getAclEntryComment()const
{
	return aclEntryComment_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setAclEntryComment(const std::string& aclEntryComment)
{
	aclEntryComment_ = aclEntryComment;
	setCoreParameter("AclEntryComment", std::to_string(aclEntryComment));
}

long ModifyIPv6TranslatorAclListEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyIPv6TranslatorAclListEntryRequest::getAclEntryId()const
{
	return aclEntryId_;
}

void ModifyIPv6TranslatorAclListEntryRequest::setAclEntryId(const std::string& aclEntryId)
{
	aclEntryId_ = aclEntryId;
	setCoreParameter("AclEntryId", std::to_string(aclEntryId));
}

