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

#include <alibabacloud/smartag/model/AssociateACLRequest.h>

using AlibabaCloud::Smartag::Model::AssociateACLRequest;

AssociateACLRequest::AssociateACLRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "AssociateACL")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateACLRequest::~AssociateACLRequest()
{}

long AssociateACLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateACLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateACLRequest::getRegionId()const
{
	return regionId_;
}

void AssociateACLRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateACLRequest::getAclId()const
{
	return aclId_;
}

void AssociateACLRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

std::string AssociateACLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateACLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateACLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateACLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AssociateACLRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateACLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AssociateACLRequest::getSmartAGId()const
{
	return smartAGId_;
}

void AssociateACLRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

