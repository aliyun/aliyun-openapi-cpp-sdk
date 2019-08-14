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

#include <alibabacloud/vpc/model/AddIPv6TranslatorAclListEntryRequest.h>

using AlibabaCloud::Vpc::Model::AddIPv6TranslatorAclListEntryRequest;

AddIPv6TranslatorAclListEntryRequest::AddIPv6TranslatorAclListEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AddIPv6TranslatorAclListEntry")
{}

AddIPv6TranslatorAclListEntryRequest::~AddIPv6TranslatorAclListEntryRequest()
{}

std::string AddIPv6TranslatorAclListEntryRequest::getAclId()const
{
	return aclId_;
}

void AddIPv6TranslatorAclListEntryRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long AddIPv6TranslatorAclListEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddIPv6TranslatorAclListEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddIPv6TranslatorAclListEntryRequest::getAclEntryIp()const
{
	return aclEntryIp_;
}

void AddIPv6TranslatorAclListEntryRequest::setAclEntryIp(const std::string& aclEntryIp)
{
	aclEntryIp_ = aclEntryIp;
	setCoreParameter("AclEntryIp", aclEntryIp);
}

std::string AddIPv6TranslatorAclListEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddIPv6TranslatorAclListEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddIPv6TranslatorAclListEntryRequest::getRegionId()const
{
	return regionId_;
}

void AddIPv6TranslatorAclListEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddIPv6TranslatorAclListEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddIPv6TranslatorAclListEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddIPv6TranslatorAclListEntryRequest::getAclEntryComment()const
{
	return aclEntryComment_;
}

void AddIPv6TranslatorAclListEntryRequest::setAclEntryComment(const std::string& aclEntryComment)
{
	aclEntryComment_ = aclEntryComment;
	setCoreParameter("AclEntryComment", aclEntryComment);
}

long AddIPv6TranslatorAclListEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void AddIPv6TranslatorAclListEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

