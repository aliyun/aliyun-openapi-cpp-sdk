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

#include <alibabacloud/slb/model/CreateAccessControlListRequest.h>

using AlibabaCloud::Slb::Model::CreateAccessControlListRequest;

CreateAccessControlListRequest::CreateAccessControlListRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateAccessControlList")
{}

CreateAccessControlListRequest::~CreateAccessControlListRequest()
{}

std::string CreateAccessControlListRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateAccessControlListRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long CreateAccessControlListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAccessControlListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAccessControlListRequest::getAclName()const
{
	return aclName_;
}

void CreateAccessControlListRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setParameter("AclName", aclName);
}

std::string CreateAccessControlListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAccessControlListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateAccessControlListRequest::getRegionId()const
{
	return regionId_;
}

void CreateAccessControlListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAccessControlListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateAccessControlListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateAccessControlListRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAccessControlListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateAccessControlListRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void CreateAccessControlListRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setParameter("AddressIPVersion", addressIPVersion);
}

std::string CreateAccessControlListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAccessControlListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateAccessControlListRequest::getTags()const
{
	return tags_;
}

void CreateAccessControlListRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

