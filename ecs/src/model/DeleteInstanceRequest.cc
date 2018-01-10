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

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DeleteInstanceRequest::DeleteInstanceRequest() :
	EcsRequest("DeleteInstance")
{}

DeleteInstanceRequest::~DeleteInstanceRequest()
{}

long DeleteInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool DeleteInstanceRequest::getTerminateSubscription()const
{
	return terminateSubscription_;
}

void DeleteInstanceRequest::setTerminateSubscription(bool terminateSubscription)
{
	terminateSubscription_ = terminateSubscription;
	setParameter("TerminateSubscription", std::to_string(terminateSubscription));
}

bool DeleteInstanceRequest::getForce()const
{
	return force_;
}

void DeleteInstanceRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", std::to_string(force));
}

long DeleteInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

