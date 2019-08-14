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

#include <alibabacloud/ecs/model/DeleteInstanceRequest.h>

using AlibabaCloud::Ecs::Model::DeleteInstanceRequest;

DeleteInstanceRequest::DeleteInstanceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteInstance")
{}

DeleteInstanceRequest::~DeleteInstanceRequest()
{}

std::string DeleteInstanceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteInstanceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DeleteInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DeleteInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool DeleteInstanceRequest::getTerminateSubscription()const
{
	return terminateSubscription_;
}

void DeleteInstanceRequest::setTerminateSubscription(bool terminateSubscription)
{
	terminateSubscription_ = terminateSubscription;
	setCoreParameter("TerminateSubscription", terminateSubscription ? "true" : "false");
}

bool DeleteInstanceRequest::getForce()const
{
	return force_;
}

void DeleteInstanceRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

long DeleteInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

