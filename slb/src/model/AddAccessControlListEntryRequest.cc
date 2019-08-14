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

#include <alibabacloud/slb/model/AddAccessControlListEntryRequest.h>

using AlibabaCloud::Slb::Model::AddAccessControlListEntryRequest;

AddAccessControlListEntryRequest::AddAccessControlListEntryRequest() :
	RpcServiceRequest("slb", "2014-05-15", "AddAccessControlListEntry")
{}

AddAccessControlListEntryRequest::~AddAccessControlListEntryRequest()
{}

std::string AddAccessControlListEntryRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void AddAccessControlListEntryRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string AddAccessControlListEntryRequest::getAclId()const
{
	return aclId_;
}

void AddAccessControlListEntryRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long AddAccessControlListEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddAccessControlListEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddAccessControlListEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddAccessControlListEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddAccessControlListEntryRequest::getRegionId()const
{
	return regionId_;
}

void AddAccessControlListEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddAccessControlListEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddAccessControlListEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddAccessControlListEntryRequest::getAclEntrys()const
{
	return aclEntrys_;
}

void AddAccessControlListEntryRequest::setAclEntrys(const std::string& aclEntrys)
{
	aclEntrys_ = aclEntrys;
	setCoreParameter("AclEntrys", aclEntrys);
}

long AddAccessControlListEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void AddAccessControlListEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddAccessControlListEntryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddAccessControlListEntryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddAccessControlListEntryRequest::getTags()const
{
	return tags_;
}

void AddAccessControlListEntryRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

