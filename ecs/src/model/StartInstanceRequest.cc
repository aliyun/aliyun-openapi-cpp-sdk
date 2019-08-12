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

#include <alibabacloud/ecs/model/StartInstanceRequest.h>

using AlibabaCloud::Ecs::Model::StartInstanceRequest;

StartInstanceRequest::StartInstanceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "StartInstance")
{}

StartInstanceRequest::~StartInstanceRequest()
{}

std::string StartInstanceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void StartInstanceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

bool StartInstanceRequest::getInitLocalDisk()const
{
	return initLocalDisk_;
}

void StartInstanceRequest::setInitLocalDisk(bool initLocalDisk)
{
	initLocalDisk_ = initLocalDisk;
	setCoreParameter("InitLocalDisk", initLocalDisk ? "true" : "false");
}

long StartInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string StartInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void StartInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

bool StartInstanceRequest::getDryRun()const
{
	return dryRun_;
}

void StartInstanceRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string StartInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string StartInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long StartInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

