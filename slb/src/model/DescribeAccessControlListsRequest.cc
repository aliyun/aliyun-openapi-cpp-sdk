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

#include <alibabacloud/slb/model/DescribeAccessControlListsRequest.h>

using AlibabaCloud::Slb::Model::DescribeAccessControlListsRequest;

DescribeAccessControlListsRequest::DescribeAccessControlListsRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeAccessControlLists")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAccessControlListsRequest::~DescribeAccessControlListsRequest()
{}

std::string DescribeAccessControlListsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeAccessControlListsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeAccessControlListsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAccessControlListsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAccessControlListsRequest::getAclName()const
{
	return aclName_;
}

void DescribeAccessControlListsRequest::setAclName(const std::string& aclName)
{
	aclName_ = aclName;
	setParameter("AclName", aclName);
}

std::string DescribeAccessControlListsRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void DescribeAccessControlListsRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setParameter("AddressIPVersion", addressIPVersion);
}

int DescribeAccessControlListsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAccessControlListsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAccessControlListsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAccessControlListsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAccessControlListsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeAccessControlListsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeAccessControlListsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAccessControlListsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeAccessControlListsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessControlListsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeAccessControlListsRequest::Tag> DescribeAccessControlListsRequest::getTag()const
{
	return tag_;
}

void DescribeAccessControlListsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeAccessControlListsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccessControlListsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAccessControlListsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAccessControlListsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeAccessControlListsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccessControlListsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAccessControlListsRequest::getTags()const
{
	return tags_;
}

void DescribeAccessControlListsRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

