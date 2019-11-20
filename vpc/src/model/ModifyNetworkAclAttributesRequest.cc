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

#include <alibabacloud/vpc/model/ModifyNetworkAclAttributesRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNetworkAclAttributesRequest;

ModifyNetworkAclAttributesRequest::ModifyNetworkAclAttributesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyNetworkAclAttributes")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyNetworkAclAttributesRequest::~ModifyNetworkAclAttributesRequest()
{}

long ModifyNetworkAclAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNetworkAclAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNetworkAclAttributesRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNetworkAclAttributesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyNetworkAclAttributesRequest::getDescription()const
{
	return description_;
}

void ModifyNetworkAclAttributesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyNetworkAclAttributesRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNetworkAclAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyNetworkAclAttributesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void ModifyNetworkAclAttributesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string ModifyNetworkAclAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNetworkAclAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNetworkAclAttributesRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void ModifyNetworkAclAttributesRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setCoreParameter("NetworkAclName", networkAclName);
}

long ModifyNetworkAclAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNetworkAclAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

