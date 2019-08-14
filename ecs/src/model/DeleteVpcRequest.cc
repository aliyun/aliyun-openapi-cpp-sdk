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

#include <alibabacloud/ecs/model/DeleteVpcRequest.h>

using AlibabaCloud::Ecs::Model::DeleteVpcRequest;

DeleteVpcRequest::DeleteVpcRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteVpc")
{}

DeleteVpcRequest::~DeleteVpcRequest()
{}

long DeleteVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteVpcRequest::getRegionId()const
{
	return regionId_;
}

void DeleteVpcRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteVpcRequest::getVpcId()const
{
	return vpcId_;
}

void DeleteVpcRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DeleteVpcRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteVpcRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

