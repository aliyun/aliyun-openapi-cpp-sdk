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

#include <alibabacloud/vpc/model/DeleteNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::DeleteNetworkAclRequest;

DeleteNetworkAclRequest::DeleteNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteNetworkAcl")
{}

DeleteNetworkAclRequest::~DeleteNetworkAclRequest()
{}

long DeleteNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void DeleteNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string DeleteNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

