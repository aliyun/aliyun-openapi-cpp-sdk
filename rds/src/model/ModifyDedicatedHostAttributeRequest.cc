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

#include <alibabacloud/rds/model/ModifyDedicatedHostAttributeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDedicatedHostAttributeRequest;

ModifyDedicatedHostAttributeRequest::ModifyDedicatedHostAttributeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDedicatedHostAttribute")
{}

ModifyDedicatedHostAttributeRequest::~ModifyDedicatedHostAttributeRequest()
{}

long ModifyDedicatedHostAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedHostAttributeRequest::getHostName()const
{
	return hostName_;
}

void ModifyDedicatedHostAttributeRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string ModifyDedicatedHostAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDedicatedHostAttributeRequest::getAllocationStatus()const
{
	return allocationStatus_;
}

void ModifyDedicatedHostAttributeRequest::setAllocationStatus(const std::string& allocationStatus)
{
	allocationStatus_ = allocationStatus;
	setCoreParameter("AllocationStatus", allocationStatus);
}

std::string ModifyDedicatedHostAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long ModifyDedicatedHostAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

