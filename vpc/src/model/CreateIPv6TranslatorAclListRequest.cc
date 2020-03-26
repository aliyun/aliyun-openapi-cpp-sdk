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

#include <alibabacloud/vpc/model/CreateIPv6TranslatorAclListRequest.h>

using AlibabaCloud::Vpc::Model::CreateIPv6TranslatorAclListRequest;

CreateIPv6TranslatorAclListRequest::CreateIPv6TranslatorAclListRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateIPv6TranslatorAclList")
{
	setMethod(HttpRequest::Method::Post);
}

CreateIPv6TranslatorAclListRequest::~CreateIPv6TranslatorAclListRequest()
{}

long CreateIPv6TranslatorAclListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateIPv6TranslatorAclListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateIPv6TranslatorAclListRequest::getAclName()const
{
	return aclName_;
}

void CreateIPv6TranslatorAclListRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setParameter("AclName", aclName);
}

std::string CreateIPv6TranslatorAclListRequest::getClientToken()const
{
	return clientToken_;
}

void CreateIPv6TranslatorAclListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateIPv6TranslatorAclListRequest::getRegionId()const
{
	return regionId_;
}

void CreateIPv6TranslatorAclListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateIPv6TranslatorAclListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateIPv6TranslatorAclListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateIPv6TranslatorAclListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateIPv6TranslatorAclListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateIPv6TranslatorAclListRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateIPv6TranslatorAclListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

