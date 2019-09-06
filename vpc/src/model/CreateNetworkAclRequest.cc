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

#include <alibabacloud/vpc/model/CreateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::CreateNetworkAclRequest;

CreateNetworkAclRequest::CreateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateNetworkAcl")
{}

CreateNetworkAclRequest::~CreateNetworkAclRequest()
{}

long CreateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateNetworkAclRequest::getDescription()const
{
	return description_;
}

void CreateNetworkAclRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkAclRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void CreateNetworkAclRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setCoreParameter("NetworkAclName", networkAclName);
}

long CreateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateNetworkAclRequest::getVpcId()const
{
	return vpcId_;
}

void CreateNetworkAclRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

