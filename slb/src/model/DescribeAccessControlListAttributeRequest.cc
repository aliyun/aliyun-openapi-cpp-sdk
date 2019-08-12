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

#include <alibabacloud/slb/model/DescribeAccessControlListAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeAccessControlListAttributeRequest;

DescribeAccessControlListAttributeRequest::DescribeAccessControlListAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeAccessControlListAttribute")
{}

DescribeAccessControlListAttributeRequest::~DescribeAccessControlListAttributeRequest()
{}

std::string DescribeAccessControlListAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeAccessControlListAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string DescribeAccessControlListAttributeRequest::getAclId()const
{
	return aclId_;
}

void DescribeAccessControlListAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long DescribeAccessControlListAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccessControlListAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAccessControlListAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccessControlListAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAccessControlListAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAccessControlListAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAccessControlListAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAccessControlListAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAccessControlListAttributeRequest::getAclEntryComment()const
{
	return aclEntryComment_;
}

void DescribeAccessControlListAttributeRequest::setAclEntryComment(const std::string& aclEntryComment)
{
	aclEntryComment_ = aclEntryComment;
	setCoreParameter("AclEntryComment", aclEntryComment);
}

long DescribeAccessControlListAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccessControlListAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAccessControlListAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAccessControlListAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAccessControlListAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeAccessControlListAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

