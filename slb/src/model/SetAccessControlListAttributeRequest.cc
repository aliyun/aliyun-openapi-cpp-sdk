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

#include <alibabacloud/slb/model/SetAccessControlListAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetAccessControlListAttributeRequest;

SetAccessControlListAttributeRequest::SetAccessControlListAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetAccessControlListAttribute")
{}

SetAccessControlListAttributeRequest::~SetAccessControlListAttributeRequest()
{}

std::string SetAccessControlListAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetAccessControlListAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string SetAccessControlListAttributeRequest::getAclId()const
{
	return aclId_;
}

void SetAccessControlListAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long SetAccessControlListAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetAccessControlListAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SetAccessControlListAttributeRequest::getAclName()const
{
	return aclName_;
}

void SetAccessControlListAttributeRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setCoreParameter("AclName", aclName);
}

std::string SetAccessControlListAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetAccessControlListAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetAccessControlListAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetAccessControlListAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetAccessControlListAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetAccessControlListAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SetAccessControlListAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetAccessControlListAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetAccessControlListAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetAccessControlListAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetAccessControlListAttributeRequest::getTags()const
{
	return tags_;
}

void SetAccessControlListAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

