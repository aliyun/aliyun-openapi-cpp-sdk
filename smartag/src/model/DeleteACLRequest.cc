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

#include <alibabacloud/smartag/model/DeleteACLRequest.h>

using AlibabaCloud::Smartag::Model::DeleteACLRequest;

DeleteACLRequest::DeleteACLRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteACL")
{}

DeleteACLRequest::~DeleteACLRequest()
{}

std::string DeleteACLRequest::getAclId()const
{
	return aclId_;
}

void DeleteACLRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

long DeleteACLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteACLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteACLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteACLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteACLRequest::getRegionId()const
{
	return regionId_;
}

void DeleteACLRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteACLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteACLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteACLRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteACLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

