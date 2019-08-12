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

#include <alibabacloud/ecs/model/ReActivateInstancesRequest.h>

using AlibabaCloud::Ecs::Model::ReActivateInstancesRequest;

ReActivateInstancesRequest::ReActivateInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReActivateInstances")
{}

ReActivateInstancesRequest::~ReActivateInstancesRequest()
{}

std::string ReActivateInstancesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ReActivateInstancesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool ReActivateInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReActivateInstancesRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string ReActivateInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void ReActivateInstancesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ReActivateInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReActivateInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReActivateInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ReActivateInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ReActivateInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReActivateInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool ReActivateInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void ReActivateInstancesRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

