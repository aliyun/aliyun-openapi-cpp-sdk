<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/DetachDiskRequest.h>

using AlibabaCloud::Ecs::Model::DetachDiskRequest;

DetachDiskRequest::DetachDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DetachDisk")
{}

DetachDiskRequest::~DetachDiskRequest()
{}

std::string DetachDiskRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DetachDiskRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DetachDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachDiskRequest::getInstanceId()const
{
	return instanceId_;
}

void DetachDiskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DetachDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DetachDiskRequest::getDiskId()const
{
	return diskId_;
}

void DetachDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

long DetachDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

=======
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

#include <alibabacloud/ecs/model/DetachDiskRequest.h>

using AlibabaCloud::Ecs::Model::DetachDiskRequest;

DetachDiskRequest::DetachDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DetachDisk")
{}

DetachDiskRequest::~DetachDiskRequest()
{}

std::string DetachDiskRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DetachDiskRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DetachDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachDiskRequest::getInstanceId()const
{
	return instanceId_;
}

void DetachDiskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DetachDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DetachDiskRequest::getDiskId()const
{
	return diskId_;
}

void DetachDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

long DetachDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

>>>>>>> master
