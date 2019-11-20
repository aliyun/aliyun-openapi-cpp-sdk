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

#include <alibabacloud/vpc/model/UnassociateGlobalAccelerationInstanceRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateGlobalAccelerationInstanceRequest;

UnassociateGlobalAccelerationInstanceRequest::UnassociateGlobalAccelerationInstanceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnassociateGlobalAccelerationInstance")
{
	setMethod(HttpRequest::Method::Post);
}

UnassociateGlobalAccelerationInstanceRequest::~UnassociateGlobalAccelerationInstanceRequest()
{}

long UnassociateGlobalAccelerationInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateGlobalAccelerationInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateGlobalAccelerationInstanceRequest::getGlobalAccelerationInstanceId()const
{
	return globalAccelerationInstanceId_;
}

void UnassociateGlobalAccelerationInstanceRequest::setGlobalAccelerationInstanceId(const std::string& globalAccelerationInstanceId)
{
	globalAccelerationInstanceId_ = globalAccelerationInstanceId;
	setCoreParameter("GlobalAccelerationInstanceId", globalAccelerationInstanceId);
}

std::string UnassociateGlobalAccelerationInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateGlobalAccelerationInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateGlobalAccelerationInstanceRequest::getInstanceType()const
{
	return instanceType_;
}

void UnassociateGlobalAccelerationInstanceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string UnassociateGlobalAccelerationInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateGlobalAccelerationInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateGlobalAccelerationInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateGlobalAccelerationInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnassociateGlobalAccelerationInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateGlobalAccelerationInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

